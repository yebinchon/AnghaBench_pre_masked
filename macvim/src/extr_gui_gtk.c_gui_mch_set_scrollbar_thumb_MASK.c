
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handler_id; int * id; } ;
typedef TYPE_1__ scrollbar_T ;
typedef int gulong ;
struct TYPE_8__ {double lower; long value; long upper; long page_size; long page_increment; double step_increment; } ;
typedef TYPE_2__ GtkAdjustment ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ) ;

void
FUNC_6(scrollbar_T *VAR_0, long VAR_1, long VAR_2, long VAR_3)
{
    if (VAR_0->id != ((void*)0))
    {
 GtkAdjustment *VAR_4;

 VAR_4 = FUNC_5(FUNC_1(VAR_0->id));

 VAR_4->lower = 0.0;
 VAR_4->value = VAR_1;
 VAR_4->upper = VAR_3 + 1;
 VAR_4->page_size = VAR_2;
 VAR_4->page_increment = VAR_2 < 3L ? 1L : VAR_2 - 2L;
 VAR_4->step_increment = 1.0;

 FUNC_2(FUNC_0(VAR_4),
            (gulong)VAR_0->handler_id);
 FUNC_4(VAR_4);
 FUNC_3(FUNC_0(VAR_4),
            (gulong)VAR_0->handler_id);
    }
}
