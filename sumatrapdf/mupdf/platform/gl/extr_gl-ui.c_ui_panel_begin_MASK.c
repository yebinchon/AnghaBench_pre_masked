
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_1__ fz_irect ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int) ;
 TYPE_1__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__) ;

void FUNC_4(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 fz_irect VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5)
 {
  FUNC_0(VAR_0);
  FUNC_1(VAR_6.x0, VAR_6.y0, VAR_6.x1, VAR_6.y1);
 }
 VAR_6.x0 += VAR_3; VAR_6.y0 += VAR_3;
 VAR_6.x1 -= VAR_4; VAR_6.y1 -= VAR_4;
 FUNC_3(VAR_6);
}
