
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef int StringInfo ;
typedef TYPE_1__ JsonbValue ;
typedef int JEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,TYPE_1__*,int) ;
 int FUNC_3 (int ,int *,TYPE_1__*,int) ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_3, JEntry *VAR_4, JsonbValue *VAR_5, int VAR_6)
{
 FUNC_1();

 if (!VAR_5)
  return;
 if (FUNC_0(VAR_5))
  FUNC_4(VAR_3, VAR_4, VAR_5);
 else if (VAR_5->type == VAR_1)
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_5->type == VAR_2)
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  FUNC_5(VAR_0, "unknown type of jsonb container to convert");
}
