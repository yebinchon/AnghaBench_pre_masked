
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uchar ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_3, char *VAR_4, unsigned int VAR_5)
{




   VAR_0 = ((void*)0);
   VAR_2 = FUNC_2(VAR_3, "wb");
   if (!VAR_2) return 0;

   VAR_1 = 0;

   if (!FUNC_1((stb_uchar*)VAR_4, VAR_5))
      return 0;

   FUNC_0(VAR_2);

   return VAR_1;
}
