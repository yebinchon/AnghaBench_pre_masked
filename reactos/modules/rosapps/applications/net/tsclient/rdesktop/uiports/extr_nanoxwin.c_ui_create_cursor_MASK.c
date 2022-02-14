
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef scalar_t__ GR_CURSOR_ID ;
typedef int GR_BITMAP ;


 scalar_t__ FUNC_0 (int,int,int ,int ,int,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int * FUNC_6 (int,int,int *) ;
 int FUNC_7 (int *) ;

void * FUNC_8(uint32 VAR_0, uint32 VAR_1,
                        int VAR_2, int VAR_3,
                        uint8 * VAR_4, uint8 * VAR_5)
{
  uint8 VAR_6[128];
  uint8 VAR_7[128];
  GR_BITMAP * VAR_8;
  GR_BITMAP * VAR_9;
  GR_CURSOR_ID VAR_10;
  int VAR_11, VAR_12, VAR_13, VAR_14;

  if (VAR_2 != 32 || VAR_3 != 32)
  {
    return 0;
  }
  FUNC_4(VAR_6, 0, 128);
  FUNC_4(VAR_7, 0, 128);
  for (VAR_11 = 0; VAR_11 <= 31; VAR_11++)
  {
    for (VAR_12 = 0; VAR_12 <= 31; VAR_12++)
    {
      VAR_14 = FUNC_3(VAR_5, VAR_11, VAR_12);
      VAR_13 = FUNC_2(VAR_4, VAR_11, VAR_12);
      if (VAR_13 ^ VAR_14)
      {
        FUNC_5(VAR_6, VAR_11, VAR_12);
        if (!VAR_14)
        {
          FUNC_5(VAR_7, VAR_11, VAR_12);
        }
      }
      if (VAR_14)
      {
        FUNC_5(VAR_7, VAR_11, VAR_12);
      }
    }
  }
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  VAR_8 = FUNC_6(32, 32, VAR_6);
  VAR_9 = FUNC_6(32, 32, VAR_7);
  VAR_10 = FUNC_0(32, 32, VAR_0, VAR_1, 0xffffff, 0, VAR_8, VAR_9);
  FUNC_7(VAR_8);
  FUNC_7(VAR_9);
  return (void*)VAR_10;
}
