
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int* VAR_2 ;

int FUNC_2(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8=0;

 if(VAR_4<1 || VAR_5<0 || VAR_5>=VAR_1)
    FUNC_1("tjPlaneWidth(): Invalid argument");
 VAR_7=(VAR_5==VAR_0? 1:3);
 if(VAR_3<0 || VAR_3>=VAR_7)
    FUNC_1("tjPlaneWidth(): Invalid argument");

 VAR_6=FUNC_0(VAR_4, VAR_2[VAR_5]/8);
 if(VAR_3==0)
  VAR_8=VAR_6;
 else
  VAR_8=VAR_6*8/VAR_2[VAR_5];

 bailout:
 return VAR_8;
}
