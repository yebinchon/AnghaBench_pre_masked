
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long x; long y; } ;
struct cursor_data {long x_hotspot; long y_hotspot; int texture; scalar_t__ visible; TYPE_1__ cursor_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (float,float,float) ;
 int FUNC_7 (int ,long,long,int ,int ,int) ;

void FUNC_8(struct cursor_data *VAR_2, long VAR_3, long VAR_4,
   float VAR_5, float VAR_6, long VAR_7, long VAR_8)
{
 long VAR_9 = VAR_2->cursor_pos.x + VAR_3;
 long VAR_10 = VAR_2->cursor_pos.y + VAR_4;
 long VAR_11 = VAR_9 - VAR_2->x_hotspot;
 long VAR_12 = VAR_10 - VAR_2->y_hotspot;

 if (VAR_9 < 0 || VAR_9 > VAR_7 || VAR_10 < 0 || VAR_10 > VAR_8)
  return;

 if (VAR_2->visible && !!VAR_2->texture) {
  FUNC_2();
  FUNC_0(VAR_1, VAR_0);
  FUNC_3(1, 1, 1, 0);

  FUNC_5();
  FUNC_6(VAR_5, VAR_6, 1.0f);
  FUNC_7(VAR_2->texture, VAR_11, VAR_12, 0, 0, 0);
  FUNC_4();

  FUNC_3(1, 1, 1, 1);
  FUNC_1();
 }
}
