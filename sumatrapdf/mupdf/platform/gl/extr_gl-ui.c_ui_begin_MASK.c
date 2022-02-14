
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int window_h; int window_w; scalar_t__ overlay; int cursor; TYPE_2__* layout; TYPE_2__* layout_stack; TYPE_1__* cavity; TYPE_1__* cavity_stack; int * hot; } ;
struct TYPE_5__ {scalar_t__ pady; scalar_t__ padx; int anchor; int fill; int side; } ;
struct TYPE_4__ {int y1; int x1; scalar_t__ y0; scalar_t__ x0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 TYPE_3__ VAR_7 ;

void FUNC_5(void)
{
 VAR_7.hot = ((void*)0);

 VAR_7.cavity = VAR_7.cavity_stack;
 VAR_7.cavity->x0 = 0;
 VAR_7.cavity->y0 = 0;
 VAR_7.cavity->x1 = VAR_7.window_w;
 VAR_7.cavity->y1 = VAR_7.window_h;

 VAR_7.layout = VAR_7.layout_stack;
 VAR_7.layout->side = VAR_0;
 VAR_7.layout->fill = VAR_1;
 VAR_7.layout->anchor = VAR_6;
 VAR_7.layout->padx = 0;
 VAR_7.layout->pady = 0;

 VAR_7.cursor = VAR_2;

 VAR_7.overlay = 0;

 FUNC_4(0, 0, VAR_7.window_w, VAR_7.window_h);
 FUNC_0(VAR_3);

 FUNC_2(VAR_5);
 FUNC_1();
 FUNC_3(0, VAR_7.window_w, VAR_7.window_h, 0, -1, 1);

 FUNC_2(VAR_4);
 FUNC_1();
}
