
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int colour; int cy; int cx; int y; int x; } ;
typedef int STREAM ;
typedef TYPE_1__ RECT_ORDER ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(RDPCLIENT * VAR_0, STREAM VAR_1, RECT_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 uint32 VAR_5;
 if (VAR_3 & 0x01)
  FUNC_2(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x02)
  FUNC_2(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x04)
  FUNC_2(VAR_1, &VAR_2->cx, VAR_4);

 if (VAR_3 & 0x08)
  FUNC_2(VAR_1, &VAR_2->cy, VAR_4);

 if (VAR_3 & 0x10)
 {
  FUNC_1(VAR_1, VAR_5);
  VAR_2->colour = (VAR_2->colour & 0xffffff00) | VAR_5;
 }

 if (VAR_3 & 0x20)
 {
  FUNC_1(VAR_1, VAR_5);
  VAR_2->colour = (VAR_2->colour & 0xffff00ff) | (VAR_5 << 8);
 }

 if (VAR_3 & 0x40)
 {
  FUNC_1(VAR_1, VAR_5);
  VAR_2->colour = (VAR_2->colour & 0xff00ffff) | (VAR_5 << 16);
 }

 FUNC_0(("RECT(x=%d,y=%d,cx=%d,cy=%d,fg=0x%x)\n", VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_2->colour));

 FUNC_3(VAR_0, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_2->colour);
}
