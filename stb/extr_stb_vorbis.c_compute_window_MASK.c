
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(int VAR_1, float *VAR_2)
{
   int VAR_3 = VAR_1 >> 1, VAR_4;
   for (VAR_4=0; VAR_4 < VAR_3; ++VAR_4)
      VAR_2[VAR_4] = (float) FUNC_0(0.5 * VAR_0 * FUNC_1((float) FUNC_0((VAR_4 - 0 + 0.5) / VAR_3 * 0.5 * VAR_0)));
}
