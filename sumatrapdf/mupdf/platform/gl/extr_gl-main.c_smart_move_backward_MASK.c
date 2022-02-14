
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_location ;
struct TYPE_2__ {int w; int h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_8 = VAR_5.w / 20;
 int VAR_9 = VAR_5.h / 20;
 if (VAR_7 <= VAR_9)
 {
  if (VAR_6 <= VAR_8)
  {
   fz_location VAR_10 = FUNC_1(VAR_2, VAR_4, VAR_3);
   if (!FUNC_0(VAR_3, VAR_10))
   {
    VAR_6 = (VAR_5.w <= VAR_1) ? 0 : VAR_5.w - VAR_1;
    VAR_7 = (VAR_5.h <= VAR_0) ? 0 : VAR_5.h - VAR_0;
    VAR_3 = VAR_10;
   }
  }
  else
  {
   VAR_7 = VAR_5.h;
   VAR_6 -= VAR_1 * 9 / 10;
  }
 }
 else
 {
  VAR_7 -= VAR_0 * 9 / 10;
 }
}
