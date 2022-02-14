
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct line {int dummy; } ;
struct TYPE_5__ {int y1; int y0; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_6__ {int lineheight; int scroll_y; int window_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int,scalar_t__,int) ;
 int FUNC_4 (struct line*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (char*,struct line*,int ,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,int,struct line*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 TYPE_1__ FUNC_8 (int,int) ;
 int FUNC_9 (scalar_t__,int,scalar_t__,int,int*,int,int) ;

void FUNC_10(char *VAR_3, int VAR_4, int VAR_5, int *VAR_6)
{
 struct line VAR_7[500];
 fz_irect VAR_8;
 int VAR_9;

 VAR_8 = FUNC_8(VAR_4, VAR_5);
 VAR_9 = FUNC_5(VAR_3, VAR_7, FUNC_4(VAR_7), VAR_8.x1-VAR_8.x0 - 16, ((void*)0));
 if (VAR_9 > (VAR_8.y1-VAR_8.y0) / VAR_2.lineheight)
 {
  if (FUNC_7(VAR_8))
   *VAR_6 -= VAR_2.scroll_y * VAR_2.lineheight * 3;
  FUNC_9(VAR_8.x1-16, VAR_8.y0, VAR_8.x1, VAR_8.y1, VAR_6, VAR_8.y1-VAR_8.y0, VAR_9 * VAR_2.lineheight);
 }
 else
  *VAR_6 = 0;

 FUNC_3(VAR_8.x0, VAR_2.window_h-VAR_8.y1, VAR_8.x1-VAR_8.x0-16, VAR_8.y1-VAR_8.y0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 FUNC_6(VAR_8.x0, VAR_8.y0 - *VAR_6, VAR_7, VAR_9);
 FUNC_1(VAR_0);
}
