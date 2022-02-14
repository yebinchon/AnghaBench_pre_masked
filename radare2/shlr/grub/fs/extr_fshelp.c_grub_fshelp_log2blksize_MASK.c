
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,char*) ;

unsigned int
FUNC_1 (unsigned int VAR_2, unsigned int *VAR_3)
{
  int VAR_4;

  *VAR_3 = 0;
  while (VAR_2 > 1)
    {
      VAR_4 = VAR_2 - ((VAR_2 >> 1) << 1);
      VAR_2 >>= 1;


      if (VAR_4)
 return FUNC_0 (VAR_0,
      "the blocksize is not a power of two");
      (*VAR_3)++;
    }

  return VAR_1;
}
