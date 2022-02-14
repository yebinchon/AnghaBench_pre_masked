
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (int const) ;

__attribute__((used)) static unsigned int
FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  VAR_3 = FUNC_0(VAR_0[VAR_2]) + (VAR_3 << 6) + (VAR_3 << 16) - VAR_3;

 return VAR_3;
}
