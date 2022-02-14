
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
   int VAR_3 = VAR_0 + VAR_1 - VAR_2;
   int VAR_4 = FUNC_0(VAR_3-VAR_0);
   int VAR_5 = FUNC_0(VAR_3-VAR_1);
   int VAR_6 = FUNC_0(VAR_3-VAR_2);
   if (VAR_4 <= VAR_5 && VAR_4 <= VAR_6) return VAR_0;
   if (VAR_5 <= VAR_6) return VAR_1;
   return VAR_2;
}
