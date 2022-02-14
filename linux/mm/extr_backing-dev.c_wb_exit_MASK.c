
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdi_writeback {TYPE_1__* bdi; int congested; int completions; int * stat; int dwork; } ;
struct TYPE_2__ {struct bdi_writeback wb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct bdi_writeback *VAR_1)
{
 int VAR_2;

 FUNC_0(FUNC_2(&VAR_1->dwork));

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_4(&VAR_1->stat[VAR_2]);

 FUNC_3(&VAR_1->completions);
 FUNC_5(VAR_1->congested);
 if (VAR_1 != &VAR_1->bdi->wb)
  FUNC_1(VAR_1->bdi);
}
