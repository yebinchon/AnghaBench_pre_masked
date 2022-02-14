
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
typedef int TypeName ;
struct TYPE_6__ {int const typtype; scalar_t__ domainBaseType; scalar_t__ tupDesc_identifier; int * tupDesc; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_8__ {scalar_t__ oid; int typtype; int typlen; char typstorage; int typbasetype; int typelem; int typcollation; int typbyval; int typname; int typisdefined; } ;
struct TYPE_7__ {scalar_t__ typoid; scalar_t__ ttype; int typlen; int typtype; int typisarray; scalar_t__ tupdesc_id; TYPE_1__* tcache; int * origtypname; int atttypmod; int collation; int typbyval; int typname; } ;
typedef TYPE_2__ PLpgSQL_type ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static PLpgSQL_type *
FUNC_13(HeapTuple VAR_9, int32 VAR_10,
      Oid VAR_11, TypeName *VAR_12)
{
 Form_pg_type VAR_13 = (Form_pg_type) FUNC_0(VAR_9);
 PLpgSQL_type *VAR_14;

 if (!VAR_13->typisdefined)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_6("type \"%s\" is only a shell",
      FUNC_1(VAR_13->typname))));

 VAR_14 = (PLpgSQL_type *) FUNC_10(sizeof(PLpgSQL_type));

 VAR_14->typname = FUNC_11(FUNC_1(VAR_13->typname));
 VAR_14->typoid = VAR_13->oid;
 switch (VAR_13->typtype)
 {
  case 133:
  case 130:
  case 128:
   VAR_14->ttype = VAR_5;
   break;
  case 132:
   VAR_14->ttype = VAR_4;
   break;
  case 131:
   if (FUNC_12(VAR_13->typbasetype))
    VAR_14->ttype = VAR_4;
   else
    VAR_14->ttype = VAR_5;
   break;
  case 129:
   if (VAR_14->typoid == VAR_6)
    VAR_14->ttype = VAR_4;
   else
    VAR_14->ttype = VAR_3;
   break;
  default:
   FUNC_3(VAR_2, "unrecognized typtype: %d",
     (int) VAR_13->typtype);
   break;
 }
 VAR_14->typlen = VAR_13->typlen;
 VAR_14->typbyval = VAR_13->typbyval;
 VAR_14->typtype = VAR_13->typtype;
 VAR_14->collation = VAR_13->typcollation;
 if (FUNC_2(VAR_11) && FUNC_2(VAR_14->collation))
  VAR_14->collation = VAR_11;


 if (VAR_13->typtype == 133)
 {




  VAR_14->typisarray = (VAR_13->typlen == -1 &&
         FUNC_2(VAR_13->typelem) &&
         VAR_13->typstorage != 'p');
 }
 else if (VAR_13->typtype == 131)
 {

  VAR_14->typisarray = (VAR_13->typlen == -1 &&
         VAR_13->typstorage != 'p' &&
         FUNC_2(FUNC_8(VAR_13->typbasetype)));
 }
 else
  VAR_14->typisarray = 0;
 VAR_14->atttypmod = VAR_10;







 if (VAR_14->ttype == VAR_4 && VAR_14->typoid != VAR_6)
 {
  TypeCacheEntry *VAR_15;

  VAR_15 = FUNC_9(VAR_14->typoid,
          VAR_8 |
          VAR_7);
  if (VAR_15->typtype == 131)
   VAR_15 = FUNC_9(VAR_15->domainBaseType,
           VAR_8);
  if (VAR_15->tupDesc == ((void*)0))
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_6("type %s is not composite",
       FUNC_7(VAR_14->typoid))));

  VAR_14->origtypname = VAR_12;
  VAR_14->tcache = VAR_15;
  VAR_14->tupdesc_id = VAR_15->tupDesc_identifier;
 }
 else
 {
  VAR_14->origtypname = ((void*)0);
  VAR_14->tcache = ((void*)0);
  VAR_14->tupdesc_id = 0;
 }

 return VAR_14;
}
