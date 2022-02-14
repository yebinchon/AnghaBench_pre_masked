
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NVGcontext ;


 int FUNC_0 (int *,int,int,int,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*,int,int*,int*,int*,int) ;

int FUNC_3(NVGcontext* VAR_0, int VAR_1, unsigned char* VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned char* VAR_8 = FUNC_2(VAR_2, VAR_3, &VAR_4, &VAR_5, &VAR_6, 4);
 if (VAR_8 == ((void*)0)) {

  return 0;
 }
 VAR_7 = FUNC_0(VAR_0, VAR_4, VAR_5, VAR_1, VAR_8);
 FUNC_1(VAR_8);
 return VAR_7;
}
