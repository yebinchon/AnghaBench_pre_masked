
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef scalar_t__ GR_WINDOW_ID ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int,int,int *,int ) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

void * FUNC_5(int VAR_5, int VAR_6, uint8 * VAR_7)
{
  GR_WINDOW_ID VAR_8;
  uint8 * VAR_9;
  uint32 VAR_10, VAR_11, VAR_12;

  VAR_9 = VAR_7;
  VAR_8 = FUNC_2(VAR_5, VAR_6, 0);
  if (VAR_4 == 16 && VAR_2 == 32)
  {
    VAR_9 = FUNC_4(VAR_5 * VAR_6 * VAR_1);
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
      for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
      {
        VAR_12 = *(((uint16 *) VAR_7) + (VAR_10 * VAR_5 + VAR_11));
        VAR_12 = FUNC_0(VAR_12);
        *(((uint32 *) VAR_9) + (VAR_10 * VAR_5 + VAR_11)) = VAR_12;
      }
    }
  }
  FUNC_1(VAR_8, VAR_3, 0, 0, VAR_5, VAR_6, VAR_9, VAR_0);
  if (VAR_9 != VAR_7)
  {
    FUNC_3(VAR_9);
  }
  return (void *) VAR_8;
}
