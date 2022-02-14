
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int,int,int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{




  HDC VAR_1 = FUNC_0(0);
  LONG VAR_2 = FUNC_1(VAR_1, VAR_0);
  FUNC_2(0, VAR_1);
  if(VAR_2 == 96)
  {
    FUNC_4(180000, 0, 0, -24, "default");
    FUNC_4(186000, 0, 0, -25, "rounding");
  } else if(VAR_2 == 72)
  {
    FUNC_4(180000, 0, 0, -18, "default");
    FUNC_4(186000, 0, 0, -19, "rounding");
  } else if(VAR_2 == 120)
  {
    FUNC_4(180000, 0, 0, -30, "default");
    FUNC_4(186000, 0, 0, -31, "rounding");
  } else
    FUNC_3("Skipping resolution dependent font size tests - display resolution is %d\n", VAR_2);


    FUNC_4(180000, 72, 2540, -18, "ratio1");
    FUNC_4(180000, 144, 2540, -36, "ratio2");
    FUNC_4(180000, 72, 1270, -36, "ratio3");
    FUNC_4(186000, 72, 2540, -19, "rounding+ratio");


    FUNC_4(180000, 10, 10, -635, "identical ratio 1");
    FUNC_4(240000, 10, 10, -848, "identical ratio 2");
    FUNC_4(300000, 10, 10, -1058, "identical ratio 3");


    FUNC_4(180000, 1, 1, -24, "1:1 ratio 1");
    FUNC_4(240000, 1, 1, -32, "1:1 ratio 2");
    FUNC_4(300000, 1, 1, -40, "1:1 ratio 3");


    FUNC_4(180000, 1, 0, -24, "1:0 ratio 1");
    FUNC_4(240000, 1, 0, -32, "1:0 ratio 2");
    FUNC_4(300000, 1, 0, -40, "1:0 ratio 3");


    FUNC_4(180000, 0, 1, -24, "0:1 ratio 1");
    FUNC_4(240000, 0, 1, -32, "0:1 ratio 2");
    FUNC_4(300000, 0, 1, -40, "0:1 ratio 3");


    FUNC_4(180000, 2, 1, -1270, "2:1 ratio 1");
    FUNC_4(240000, 2, 1, -1694, "2:1 ratio 2");
    FUNC_4(300000, 2, 1, -2117, "2:1 ratio 3");


    FUNC_4(180000, 1, 2, -318, "1:2 ratio 1");
    FUNC_4(240000, 1, 2, -424, "1:2 ratio 2");
    FUNC_4(300000, 1, 2, -529, "1:2 ratio 3");


    FUNC_4(180000, 2, 2, -635, "2:2 ratio 1");
    FUNC_4(240000, 2, 2, -848, "2:2 ratio 2");
    FUNC_4(300000, 2, 2, -1058, "2:2 ratio 3");
}
