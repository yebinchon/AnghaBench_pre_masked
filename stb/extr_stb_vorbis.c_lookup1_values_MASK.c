
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (float,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1)
{
   int VAR_2 = (int) FUNC_1(FUNC_0((float) FUNC_2((float) VAR_0) / VAR_1));
   if ((int) FUNC_1(FUNC_3((float) VAR_2+1, VAR_1)) <= VAR_0)
      ++VAR_2;
   if (FUNC_3((float) VAR_2+1, VAR_1) <= VAR_0)
      return -1;
   if ((int) FUNC_1(FUNC_3((float) VAR_2, VAR_1)) > VAR_0)
      return -1;
   return VAR_2;
}
