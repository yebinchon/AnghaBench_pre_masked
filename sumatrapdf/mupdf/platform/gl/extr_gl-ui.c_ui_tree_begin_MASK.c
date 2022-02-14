
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y0; int y1; scalar_t__ x0; scalar_t__ x1; int member_3; int member_2; int member_1; int member_0; } ;
struct list {int scroll_y; int is_tree; int item_y; TYPE_1__ area; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_7__ {int lineheight; int middle_y; int y; int scroll_y; int window_h; struct list* hot; struct list* active; scalar_t__ middle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int,scalar_t__,int) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (TYPE_1__,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__,int,scalar_t__,int,int*,int,int) ;

void FUNC_6(struct list *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 static int VAR_8 = 0;

 fz_irect VAR_9 = FUNC_4(VAR_5, VAR_6);
 fz_irect VAR_10 = { VAR_9.x0+2, VAR_9.y0+2, VAR_9.x1-2, VAR_9.y1-2 };

 int VAR_11 = VAR_4 * VAR_2.lineheight - (VAR_10.y1-VAR_10.y0);

 if (VAR_11 > 0)
  VAR_10.x1 -= 16;

 if (FUNC_3(VAR_10))
 {
  VAR_2.hot = VAR_3;
  if (!VAR_2.active && VAR_2.middle)
  {
   VAR_2.active = VAR_3;
   VAR_8 = VAR_3->scroll_y;
  }
 }


 if (VAR_2.active == VAR_3)
  VAR_3->scroll_y = VAR_8 + (VAR_2.middle_y - VAR_2.y) * 5;


 if (VAR_2.hot == VAR_3)
  VAR_3->scroll_y -= VAR_2.scroll_y * VAR_2.lineheight * 3;


 if (VAR_3->scroll_y >= VAR_11)
  VAR_3->scroll_y = VAR_11;
 if (VAR_3->scroll_y < 0)
  VAR_3->scroll_y = 0;

 FUNC_2(VAR_9, VAR_1, 1);
 if (VAR_11 > 0)
 {
  FUNC_5(VAR_10.x1, VAR_10.y0, VAR_10.x1+16, VAR_10.y1,
    &VAR_3->scroll_y, VAR_10.y1-VAR_10.y0, VAR_4 * VAR_2.lineheight);
 }

 VAR_3->is_tree = VAR_7;
 VAR_3->area = VAR_10;
 VAR_3->item_y = VAR_10.y0 - VAR_3->scroll_y;

 FUNC_1(VAR_3->area.x0, VAR_2.window_h-VAR_3->area.y1, VAR_3->area.x1-VAR_3->area.x0, VAR_3->area.y1-VAR_3->area.y0);
 FUNC_0(VAR_0);
}
