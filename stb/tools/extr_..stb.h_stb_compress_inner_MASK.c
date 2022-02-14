
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int stb_uchar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int *,int,int*,int **,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(stb_uchar *VAR_3, stb_uint VAR_4)
{
   int VAR_5 = 0;
   stb_uint VAR_6,VAR_7;

   stb_uchar **VAR_8;
   VAR_8 = (stb_uchar**) FUNC_2(VAR_0 * sizeof(stb_uchar*));
   if (VAR_8 == ((void*)0)) return 0;
   for (VAR_7=0; VAR_7 < VAR_0; ++VAR_7)
      VAR_8[VAR_7] = ((void*)0);


   FUNC_5(0x57); FUNC_5(0xbc);
   FUNC_6(0);

   FUNC_7(0);
   FUNC_7(VAR_4);
   FUNC_7(VAR_2);

   VAR_1 = 1;

   VAR_6 = FUNC_4(VAR_3, VAR_3, VAR_3+VAR_4, VAR_4, &VAR_5, VAR_8, VAR_0-1);
   FUNC_0(VAR_6 == VAR_4);

   FUNC_3(VAR_3+VAR_4 - VAR_5, VAR_5);

   FUNC_1(VAR_8);

   FUNC_6(0x05fa);

   FUNC_7(VAR_1);

   return 1;
}
