
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, uint16 *VAR_1)
{
   int VAR_2 = FUNC_1(VAR_0) - 1;
   int VAR_3, VAR_4 = VAR_0 >> 3;
   for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3)
      VAR_1[VAR_3] = (FUNC_0(VAR_3) >> (32-VAR_2+3)) << 2;
}
