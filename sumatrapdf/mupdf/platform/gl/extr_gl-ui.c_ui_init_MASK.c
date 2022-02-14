
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float fontsize; float baseline; float lineheight; float gridsize; int overlay_list; } ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_1__ VAR_27 ;
 int FUNC_21 () ;

void FUNC_22(int VAR_28, int VAR_29, const char *VAR_30)
{
 float VAR_31;





 FUNC_8(VAR_17);
 FUNC_9(VAR_25);
 FUNC_7(VAR_7 | VAR_6);
 FUNC_10(VAR_28, VAR_29);
 FUNC_3(VAR_30);

 FUNC_20(500, VAR_24, 0);
 FUNC_17(VAR_22);
 FUNC_4(VAR_16);



 FUNC_12(VAR_18);

 FUNC_19(VAR_23);
 FUNC_14(VAR_20);
 FUNC_13(VAR_19);
 FUNC_16(VAR_21);
 FUNC_15(VAR_26);

 VAR_14 = FUNC_5("GL_ARB_texture_non_power_of_two");
 if (!VAR_14)
  FUNC_0(VAR_13, "OpenGL implementation does not support non-power of two texture sizes");

 FUNC_2(VAR_12, &VAR_15);

 VAR_31 = 1;
 {
  int VAR_32 = FUNC_6(VAR_11);
  int VAR_33 = FUNC_6(VAR_10);
  int VAR_34 = FUNC_6(VAR_9);
  int VAR_35 = FUNC_6(VAR_8);
  if (VAR_32 > 0 && VAR_34 > 0)
  {
   float VAR_36 = ((VAR_33 * 254) / VAR_32 + (VAR_35 * 254) / VAR_34) / 20;
   if (VAR_36 >= 144) VAR_31 = 1.5f;
   if (VAR_36 >= 192) VAR_31 = 2.0f;
   if (VAR_36 >= 288) VAR_31 = 3.0f;
  }
 }

 VAR_27.fontsize = VAR_1 * VAR_31;
 VAR_27.baseline = VAR_0 * VAR_31;
 VAR_27.lineheight = VAR_3 * VAR_31;
 VAR_27.gridsize = VAR_2 * VAR_31;

 FUNC_21();

 VAR_27.overlay_list = FUNC_1(1);
}
