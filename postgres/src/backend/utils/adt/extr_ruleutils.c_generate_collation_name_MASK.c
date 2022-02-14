
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collnamespace; int collname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,char*) ;

char *
FUNC_10(Oid VAR_2)
{
 HeapTuple VAR_3;
 Form_pg_collation VAR_4;
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 VAR_3 = FUNC_6(VAR_0, FUNC_4(VAR_2));
 if (!FUNC_2(VAR_3))
  FUNC_7(VAR_1, "cache lookup failed for collation %u", VAR_2);
 VAR_4 = (Form_pg_collation) FUNC_1(VAR_3);
 VAR_5 = FUNC_3(VAR_4->collname);

 if (!FUNC_0(VAR_2))
  VAR_6 = FUNC_8(VAR_4->collnamespace);
 else
  VAR_6 = ((void*)0);

 VAR_7 = FUNC_9(VAR_6, VAR_5);

 FUNC_5(VAR_3);

 return VAR_7;
}
