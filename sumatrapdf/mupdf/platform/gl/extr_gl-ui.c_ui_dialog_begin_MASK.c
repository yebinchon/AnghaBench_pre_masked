
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_irect ;
struct TYPE_2__ {int window_w; int window_h; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(int VAR_2, int VAR_3)
{
 fz_irect VAR_4;
 int VAR_5, VAR_6;
 VAR_2 += 24 + 4;
 VAR_3 += 24 + 4;
 if (VAR_2 > VAR_1.window_w) VAR_2 = VAR_1.window_w - 20;
 if (VAR_3 > VAR_1.window_h) VAR_3 = VAR_1.window_h - 20;
 VAR_5 = (VAR_1.window_w-VAR_2)/2;
 VAR_6 = (VAR_1.window_h-VAR_3)/3;
 VAR_4 = FUNC_1(VAR_5, VAR_6, VAR_5+VAR_2, VAR_6+VAR_3);
 FUNC_2(VAR_4, VAR_0, 0);
 VAR_4 = FUNC_0(VAR_4, -14);
 FUNC_3(VAR_4);
}
