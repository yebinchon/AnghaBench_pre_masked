
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static int FUNC_0(uint8 * VAR_0, int VAR_1, int VAR_2,
                       int VAR_3, int VAR_4)
{
  if (VAR_1 >= 0 && VAR_2 >= 0 && VAR_1 < VAR_3 && VAR_2 < VAR_4)
  {
    return *(((int*)VAR_0) + (VAR_2 * VAR_3 + VAR_1));
  }
  else
  {
    return 0;
  }
}
