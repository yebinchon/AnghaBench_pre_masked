
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verbose; } ;
typedef int ResultRelInfo ;
typedef int ModifyTableState ;
typedef int List ;
typedef TYPE_1__ ExplainState ;


 int FUNC_0 (char*,char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ModifyTableState *VAR_1,
        ResultRelInfo *VAR_2,
        List *VAR_3,
        int VAR_4,
        ExplainState *VAR_5)
{
 if (VAR_5->verbose)
 {
  char *VAR_6 = FUNC_2(FUNC_1(VAR_3,
            VAR_0));

  FUNC_0("Remote SQL", VAR_6, VAR_5);
 }
}
