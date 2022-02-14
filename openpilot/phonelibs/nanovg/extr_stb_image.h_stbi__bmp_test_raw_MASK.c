
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(stbi__context *VAR_0)
{
   int VAR_1;
   int VAR_2;
   if (FUNC_2(VAR_0) != 'B') return 0;
   if (FUNC_2(VAR_0) != 'M') return 0;
   FUNC_1(VAR_0);
   FUNC_0(VAR_0);
   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
   VAR_2 = FUNC_1(VAR_0);
   VAR_1 = (VAR_2 == 12 || VAR_2 == 40 || VAR_2 == 56 || VAR_2 == 108 || VAR_2 == 124);
   return VAR_1;
}
