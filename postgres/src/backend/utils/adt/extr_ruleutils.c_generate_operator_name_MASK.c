
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int oprkind; int oprnamespace; int oprname; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int * Operator ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int *,int ,scalar_t__,int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int * FUNC_15 (int *,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int *,int ,scalar_t__,int,int) ;

__attribute__((used)) static char *
FUNC_19(Oid VAR_2, Oid VAR_3, Oid VAR_4)
{
 StringInfoData VAR_5;
 HeapTuple VAR_6;
 Form_pg_operator VAR_7;
 char *VAR_8;
 char *VAR_9;
 Operator VAR_10;

 FUNC_11(&VAR_5);

 VAR_6 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 if (!FUNC_1(VAR_6))
  FUNC_9(VAR_0, "cache lookup failed for operator %u", VAR_2);
 VAR_7 = (Form_pg_operator) FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_7->oprname);






 switch (VAR_7->oprkind)
 {
  case 'b':
   VAR_10 = FUNC_15(((void*)0), FUNC_13(FUNC_14(VAR_8)), VAR_3, VAR_4,
       1, -1);
   break;
  case 'l':
   VAR_10 = FUNC_12(((void*)0), FUNC_13(FUNC_14(VAR_8)), VAR_4,
         1, -1);
   break;
  case 'r':
   VAR_10 = FUNC_18(((void*)0), FUNC_13(FUNC_14(VAR_8)), VAR_3,
          1, -1);
   break;
  default:
   FUNC_9(VAR_0, "unrecognized oprkind: %d", VAR_7->oprkind);
   VAR_10 = ((void*)0);
   break;
 }

 if (VAR_10 != ((void*)0) && FUNC_16(VAR_10) == VAR_2)
  VAR_9 = ((void*)0);
 else
 {
  VAR_9 = FUNC_10(VAR_7->oprnamespace);
  FUNC_6(&VAR_5, "OPERATOR(%s.", FUNC_17(VAR_9));
 }

 FUNC_8(&VAR_5, VAR_8);

 if (VAR_9)
  FUNC_7(&VAR_5, ')');

 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_10);

 FUNC_4(VAR_6);

 return VAR_5.data;
}
