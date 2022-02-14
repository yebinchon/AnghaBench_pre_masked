
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int
FUNC_1 (unsigned int VAR_0)
{
  const unsigned char VAR_1[16] =
    {0, 1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, 4};
  if (VAR_0 > 16)
    {
      FUNC_0 (0);
      return -1;
    }
  FUNC_0 (VAR_1[VAR_0 - 1] != (unsigned char)-1);
  return VAR_1[VAR_0 - 1];
}
