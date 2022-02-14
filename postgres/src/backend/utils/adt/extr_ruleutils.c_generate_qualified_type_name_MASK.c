
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typnamespace; int typname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static char *
FUNC_9(Oid VAR_2)
{
 HeapTuple VAR_3;
 Form_pg_type VAR_4;
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 VAR_3 = FUNC_5(VAR_1, FUNC_3(VAR_2));
 if (!FUNC_1(VAR_3))
  FUNC_6(VAR_0, "cache lookup failed for type %u", VAR_2);
 VAR_4 = (Form_pg_type) FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_4->typname);

 VAR_6 = FUNC_7(VAR_4->typnamespace);
 if (!VAR_6)
  FUNC_6(VAR_0, "cache lookup failed for namespace %u",
    VAR_4->typnamespace);

 VAR_7 = FUNC_8(VAR_6, VAR_5);

 FUNC_4(VAR_3);

 return VAR_7;
}
