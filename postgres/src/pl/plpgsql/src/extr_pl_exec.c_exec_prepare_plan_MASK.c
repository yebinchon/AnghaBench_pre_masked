
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int func; } ;
struct TYPE_7__ {int rwparam; int * plan; int query; int func; } ;
typedef int * SPIPlanPtr ;
typedef int ParserSetupHook ;
typedef TYPE_1__ PLpgSQL_expr ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,void*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(PLpgSQL_execstate *VAR_3,
      PLpgSQL_expr *VAR_4, int VAR_5,
      bool VAR_6)
{
 SPIPlanPtr VAR_7;





 VAR_4->func = VAR_3->func;




 VAR_7 = FUNC_1(VAR_4->query,
         (ParserSetupHook) VAR_2,
         (void *) VAR_4,
         VAR_5);
 if (VAR_7 == ((void*)0))
  FUNC_3(VAR_0, "SPI_prepare_params failed for \"%s\": %s",
    VAR_4->query, FUNC_2(VAR_1));
 if (VAR_6)
  FUNC_0(VAR_7);
 VAR_4->plan = VAR_7;


 FUNC_4(VAR_3, VAR_4);






 VAR_4->rwparam = -1;
}
