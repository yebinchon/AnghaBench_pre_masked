
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 scalar_t__ FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*,int,int,int,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int,int,unsigned char*,unsigned char*) ;

void *
FUNC_4(unsigned int VAR_0, unsigned int VAR_1,
                 int VAR_2, int VAR_3,
                 uint8 * VAR_4, uint8 * VAR_5, int VAR_6)
{
  int VAR_7;
  int VAR_8;
  char VAR_9[32 * 4];
  char VAR_10[32 * 4];

  if (VAR_2 != 32 || VAR_3 != 32)
  {
    return ((void*)0);
  }
  if (VAR_6==1)
  {
    return (void *) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, (unsigned char *)VAR_4, (unsigned char *)VAR_5);
  }
  FUNC_2(VAR_9, 0, 32 * 4);
  FUNC_2(VAR_10, 0, 32 * 4);
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
  {
    for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    {
      if (FUNC_0((char *)VAR_4, VAR_8, VAR_7, 32, 1))
      {
        FUNC_1(VAR_9, VAR_8, 31 - VAR_7, 32, 1, 1);
      }
      if (FUNC_0((char *)VAR_5, VAR_8, VAR_7, 32, VAR_6))
      {
        FUNC_1(VAR_10, VAR_8, 31 - VAR_7, 32, 1, 1);
      }
    }
  }
  return (void *) FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, (unsigned char *)VAR_9, (unsigned char *)VAR_10);
}
