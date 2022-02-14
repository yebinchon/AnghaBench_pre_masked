
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int colour; int cy; int cx; int y; int x; } ;
typedef int STREAM ;
typedef TYPE_1__ RECT_ORDER ;
typedef int RD_BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(STREAM VAR_0, RECT_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 uint32 VAR_4;
 if (VAR_2 & 0x01)
  FUNC_2(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x02)
  FUNC_2(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x04)
  FUNC_2(VAR_0, &VAR_1->cx, VAR_3);

 if (VAR_2 & 0x08)
  FUNC_2(VAR_0, &VAR_1->cy, VAR_3);

 if (VAR_2 & 0x10)
 {
  FUNC_1(VAR_0, VAR_4);
  VAR_1->colour = (VAR_1->colour & 0xffffff00) | VAR_4;
 }

 if (VAR_2 & 0x20)
 {
  FUNC_1(VAR_0, VAR_4);
  VAR_1->colour = (VAR_1->colour & 0xffff00ff) | (VAR_4 << 8);
 }

 if (VAR_2 & 0x40)
 {
  FUNC_1(VAR_0, VAR_4);
  VAR_1->colour = (VAR_1->colour & 0xff00ffff) | (VAR_4 << 16);
 }

 FUNC_0(("RECT(x=%d,y=%d,cx=%d,cy=%d,fg=0x%x)\n", VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->colour));

 FUNC_3(VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->colour);
}
