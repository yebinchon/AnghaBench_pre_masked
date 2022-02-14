
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

unsigned long FUNC_2(int VAR_0, int VAR_1)
{
 unsigned long VAR_2=0;

 if(VAR_0<1 || VAR_1<1)
    FUNC_1("TJBUFSIZE(): Invalid argument");




 VAR_2=FUNC_0(VAR_0, 16) * FUNC_0(VAR_1, 16) * 6 + 2048;

 bailout:
 return VAR_2;
}
