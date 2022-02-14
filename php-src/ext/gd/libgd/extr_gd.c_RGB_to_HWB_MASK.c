
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float R; float G; float B; } ;
typedef TYPE_1__ RGBType ;
typedef int HWBType ;


 int VAR_0 ;
 float FUNC_0 (float,float,float) ;
 float FUNC_1 (float,float,float) ;
 int FUNC_2 (int,float,float) ;

__attribute__((used)) static HWBType * FUNC_3 (RGBType VAR_1, HWBType * VAR_2)
{





 float VAR_3 = VAR_1.R, VAR_4 = VAR_1.G, VAR_5 = VAR_1.B, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = FUNC_1 (VAR_3, VAR_4, VAR_5);
 VAR_7 = FUNC_0 (VAR_3, VAR_4, VAR_5);
 VAR_8 = 1 - VAR_7;
 if (VAR_7 == VAR_6) {
  FUNC_2(VAR_0, VAR_6, VAR_8);
 }
 VAR_9 = (VAR_3 == VAR_6) ? VAR_4 - VAR_5 : ((VAR_4 == VAR_6) ? VAR_5 - VAR_3 : VAR_3 - VAR_4);
 VAR_10 = (VAR_3 == VAR_6) ? 3 : ((VAR_4 == VAR_6) ? 5 : 1);

 FUNC_2(VAR_10 - VAR_9 / (VAR_7 - VAR_6), VAR_6, VAR_8);
}
