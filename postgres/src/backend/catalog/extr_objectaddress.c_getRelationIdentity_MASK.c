
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relname; int relnamespace; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(StringInfo VAR_2, Oid VAR_3, List **VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_class VAR_6;
 char *VAR_7;

 VAR_5 = FUNC_5(VAR_1,
        FUNC_3(VAR_3));
 if (!FUNC_1(VAR_5))
  FUNC_7(VAR_0, "cache lookup failed for relation %u", VAR_3);
 VAR_6 = (Form_pg_class) FUNC_0(VAR_5);

 VAR_7 = FUNC_8(VAR_6->relnamespace);
 FUNC_6(VAR_2,
         FUNC_11(VAR_7,
               FUNC_2(VAR_6->relname)));
 if (VAR_4)
  *VAR_4 = FUNC_9(VAR_7, FUNC_10(FUNC_2(VAR_6->relname)));

 FUNC_4(VAR_5);
}
