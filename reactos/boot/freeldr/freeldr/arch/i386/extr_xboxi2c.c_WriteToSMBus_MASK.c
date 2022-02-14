
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef int PUSHORT ;
typedef int PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static BOOLEAN
FUNC_5(UCHAR VAR_3, UCHAR VAR_4, UCHAR VAR_5, ULONG VAR_6)
{
  int VAR_7=50;

  while(FUNC_1((PUSHORT) (VAR_1+0)) & 0x0800)
  {
    ;
  }

  while(VAR_7--)
  {
    UCHAR VAR_8;
    unsigned int VAR_9;

    FUNC_3((PUCHAR)(VAR_1 + 4), (VAR_3 << 1) | 0);
    FUNC_3((PUCHAR)(VAR_1 + 8), VAR_4);

    switch (VAR_5)
    {
      case 4:
        FUNC_3((PUCHAR) (VAR_1 + 9), VAR_6 & 0xff);
        FUNC_3((PUCHAR) (VAR_1 + 9), (VAR_6 >> 8) & 0xff );
        FUNC_3((PUCHAR) (VAR_1 + 9), (VAR_6 >> 16) & 0xff );
        FUNC_3((PUCHAR) (VAR_1 + 9), (VAR_6 >> 24) & 0xff );
        FUNC_4((PUSHORT) (VAR_1 + 6), 4);
        break;
      case 2:
        FUNC_4((PUSHORT) (VAR_1 + 6), VAR_6&0xffff);
        break;
      default:
        FUNC_4((PUSHORT) (VAR_1 + 6), VAR_6&0xff);
        break;
    }


    VAR_9 = FUNC_1((PUSHORT) (VAR_1 + 0));
    FUNC_4((PUSHORT) (VAR_1 + 0), VAR_9);

    switch (VAR_5)
    {
      case 4:
        FUNC_3((PUCHAR) (VAR_1 + 2), 0x1d);
        break;
      case 2:
        FUNC_3((PUCHAR) (VAR_1 + 2), 0x1b);
        break;
      default:
        FUNC_3((PUCHAR) (VAR_1 + 2), 0x1a);
        break;
    }

    VAR_8 = 0;

    while( (VAR_8&0x36)==0 )
    {
      VAR_8=FUNC_0((PUCHAR) (VAR_1 + 0));
    }

    if ((VAR_8&0x10) != 0)
    {
      return VAR_2;
    }

    FUNC_2(1);
  }

  return VAR_0;
}
