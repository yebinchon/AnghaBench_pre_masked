
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_result ;
typedef int * mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int*,int const) ;

mp_result
FUNC_4(mp_int VAR_1, unsigned char *VAR_2, int VAR_3)
{
 static const int VAR_4 = 1;

 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 int VAR_5 = VAR_3;
 mp_result VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_5, VAR_4);

 if (FUNC_0(VAR_1) == VAR_0)
  FUNC_2(VAR_2, VAR_5);

 return VAR_6;
}
