
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NVGcontext ;


 int FUNC_0 (int *,int,int,int,unsigned char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (char const*,int*,int*,int*,int) ;
 int FUNC_4 (int) ;

int FUNC_5(NVGcontext* VAR_0, const char* VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned char* VAR_7;
 FUNC_4(1);
 FUNC_1(1);
 VAR_7 = FUNC_3(VAR_1, &VAR_3, &VAR_4, &VAR_5, 4);
 if (VAR_7 == ((void*)0)) {

  return 0;
 }
 VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_4, VAR_2, VAR_7);
 FUNC_2(VAR_7);
 return VAR_6;
}
