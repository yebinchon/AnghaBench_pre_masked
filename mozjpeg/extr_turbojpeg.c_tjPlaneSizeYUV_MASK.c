
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;

unsigned long FUNC_4(int VAR_1, int VAR_2, int VAR_3,
                                       int VAR_4, int VAR_5)
{
 unsigned long VAR_6=0;
 int VAR_7, VAR_8;

 if(VAR_2<1 || VAR_4<1 || VAR_5<0 || VAR_5>=VAR_0)
    FUNC_0("tjPlaneSizeYUV(): Invalid argument");

 VAR_7=FUNC_3(VAR_1, VAR_2, VAR_5);
 VAR_8=FUNC_2(VAR_1, VAR_4, VAR_5);
 if(VAR_7<0 || VAR_8<0) return -1;

 if(VAR_3==0) VAR_3=VAR_7;
 else VAR_3=FUNC_1(VAR_3);

 VAR_6=VAR_3*(VAR_8-1)+VAR_7;

 bailout:
 return VAR_6;
}
