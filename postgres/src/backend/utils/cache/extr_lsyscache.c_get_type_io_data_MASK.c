
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_2__ {int typbyval; char typalign; char typdelim; int typsend; int typreceive; int typoutput; int typinput; int typlen; } ;
typedef int Oid ;
typedef int IOFuncSelector ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *,int*,char*,char*,int *,int *,int *) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;

void
FUNC_9(Oid VAR_2,
     IOFuncSelector VAR_3,
     int16 *VAR_4,
     bool *VAR_5,
     char *VAR_6,
     char *VAR_7,
     Oid *VAR_8,
     Oid *VAR_9)
{
 HeapTuple VAR_10;
 Form_pg_type VAR_11;





 if (FUNC_2())
 {
  Oid VAR_12;
  Oid VAR_13;

  FUNC_6(VAR_2,
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_8,
         &VAR_12,
         &VAR_13);
  switch (VAR_3)
  {
   case 131:
    *VAR_9 = VAR_12;
    break;
   case 130:
    *VAR_9 = VAR_13;
    break;
   default:
    FUNC_7(VAR_0, "binary I/O not supported during bootstrap");
    break;
  }
  return;
 }

 VAR_10 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 if (!FUNC_1(VAR_10))
  FUNC_7(VAR_0, "cache lookup failed for type %u", VAR_2);
 VAR_11 = (Form_pg_type) FUNC_0(VAR_10);

 *VAR_4 = VAR_11->typlen;
 *VAR_5 = VAR_11->typbyval;
 *VAR_6 = VAR_11->typalign;
 *VAR_7 = VAR_11->typdelim;
 *VAR_8 = FUNC_8(VAR_10);
 switch (VAR_3)
 {
  case 131:
   *VAR_9 = VAR_11->typinput;
   break;
  case 130:
   *VAR_9 = VAR_11->typoutput;
   break;
  case 129:
   *VAR_9 = VAR_11->typreceive;
   break;
  case 128:
   *VAR_9 = VAR_11->typsend;
   break;
 }
 FUNC_4(VAR_10);
}
