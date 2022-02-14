
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pubname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_publication ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 char* FUNC_7 (int ) ;

char *
FUNC_8(Oid VAR_2, bool VAR_3)
{
 HeapTuple VAR_4;
 char *VAR_5;
 Form_pg_publication VAR_6;

 VAR_4 = FUNC_5(VAR_1, FUNC_3(VAR_2));

 if (!FUNC_1(VAR_4))
 {
  if (!VAR_3)
   FUNC_6(VAR_0, "cache lookup failed for publication %u", VAR_2);
  return ((void*)0);
 }

 VAR_6 = (Form_pg_publication) FUNC_0(VAR_4);
 VAR_5 = FUNC_7(FUNC_2(VAR_6->pubname));

 FUNC_4(VAR_4);

 return VAR_5;
}
