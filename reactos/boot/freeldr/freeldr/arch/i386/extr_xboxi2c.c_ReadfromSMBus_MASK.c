
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int * PUSHORT ;
typedef int PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static BOOLEAN
FUNC_4(UCHAR VAR_3, UCHAR VAR_4, UCHAR VAR_5, ULONG *VAR_6)
{
  int VAR_7=50;

  while (0 != (FUNC_1((PUSHORT) (VAR_1 + 0)) & 0x0800))
    {
      ;
    }

  while (0 != VAR_7--)
    {
      UCHAR VAR_8;
      int VAR_9;

      FUNC_2((PUCHAR) (VAR_1 + 4), (VAR_3 << 1) | 1);
      FUNC_2((PUCHAR) (VAR_1 + 8), VAR_4);

      VAR_9 = FUNC_1((USHORT *) (VAR_1 + 0));
      FUNC_3((PUSHORT) (VAR_1 + 0), VAR_9);

      switch (VAR_5)
        {
          case 4:
            FUNC_2((PUCHAR) (VAR_1 + 2), 0x0d);
            break;
          case 2:
            FUNC_2((PUCHAR) (VAR_1 + 2), 0x0b);
            break;
          default:
            FUNC_2((PUCHAR) (VAR_1 + 2), 0x0a);
            break;
        }

      VAR_8 = 0;

      while (0 == (VAR_8 & 0x36))
        {
          VAR_8 = FUNC_0((PUCHAR) (VAR_1 + 0));
        }

      if (0 != (VAR_8 & 0x24))
        {

        }

      if(0 == (VAR_8 & 0x10))
        {

        }
      else
        {
          switch (VAR_5)
            {
              case 4:
                FUNC_0((PUCHAR) (VAR_1 + 6));
                FUNC_0((PUCHAR) (VAR_1 + 9));
                FUNC_0((PUCHAR) (VAR_1 + 9));
                FUNC_0((PUCHAR) (VAR_1 + 9));
                FUNC_0((PUCHAR) (VAR_1 + 9));
                break;
              case 2:
                *VAR_6 = FUNC_1((USHORT *) (VAR_1 + 6));
                break;
              default:
                *VAR_6 = FUNC_0((PUCHAR) (VAR_1 + 6));
                break;
            }


          return VAR_2;
        }
    }

  return VAR_0;
}
