
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_markdown {TYPE_1__* work_bufs; } ;
struct TYPE_2__ {int * item; scalar_t__ asize; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sd_markdown*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(struct sd_markdown *VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < (size_t)VAR_2->work_bufs[VAR_1].asize; ++VAR_3)
  FUNC_0(VAR_2->work_bufs[VAR_1].item[VAR_3]);

 for (VAR_3 = 0; VAR_3 < (size_t)VAR_2->work_bufs[VAR_0].asize; ++VAR_3)
  FUNC_0(VAR_2->work_bufs[VAR_0].item[VAR_3]);

 FUNC_2(&VAR_2->work_bufs[VAR_1]);
 FUNC_2(&VAR_2->work_bufs[VAR_0]);

 FUNC_1(VAR_2);
}
