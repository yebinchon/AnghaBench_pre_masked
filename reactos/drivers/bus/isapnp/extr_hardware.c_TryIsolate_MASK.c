
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {scalar_t__ Checksum; } ;
typedef int* PUCHAR ;
typedef int Identifier ;
typedef TYPE_1__ ISAPNP_IDENTIFIER ;
typedef int INT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static
INT
FUNC_12(PUCHAR VAR_2)
{
  ISAPNP_IDENTIFIER VAR_3;
  USHORT VAR_4, VAR_5;
  BOOLEAN VAR_6, VAR_7;
  INT VAR_8 = 0;
  USHORT VAR_9, VAR_10;

  FUNC_0("Setting read data port: 0x%p\n", VAR_2);

  FUNC_9();
  FUNC_7();

  FUNC_5();
  FUNC_2();
  FUNC_2();

  FUNC_9();
  FUNC_7();
  FUNC_10(0x00);

  FUNC_8(VAR_2);
  FUNC_2();

  while (VAR_1)
  {
    FUNC_1();
    FUNC_2();

    FUNC_6(&VAR_3, sizeof(VAR_3));

    VAR_6 = VAR_7 = VAR_0;
    for (VAR_4 = 0; VAR_4 < 9; VAR_4++)
    {
      VAR_9 = 0;
      for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
      {
        VAR_10 = FUNC_4(VAR_2);
        FUNC_2();
        VAR_10 = ((VAR_10 << 8) | FUNC_4(VAR_2));
        FUNC_2();
        VAR_9 >>= 1;

        if (VAR_10 != 0xFFFF)
        {
           VAR_7 = VAR_1;
           if (VAR_10 == 0x55AA)
           {
             VAR_9 |= 0x80;
             VAR_6 = VAR_1;
           }
        }
      }
      *(((PUCHAR)&VAR_3) + VAR_4) = VAR_9;
    }

    if (!VAR_6)
    {
       if (VAR_8)
       {
         FUNC_0("Found no more cards\n");
       }
       else
       {
         if (VAR_7)
         {
           FUNC_0("Saw life but no cards, trying new read port\n");
           VAR_8 = -1;
         }
         else
         {
           FUNC_0("Saw no sign of life, abandoning isolation\n");
         }
       }
       break;
    }

    if (VAR_3.Checksum != FUNC_3(&VAR_3))
    {
        FUNC_0("Bad checksum, trying next read data port\n");
        VAR_8 = -1;
        break;
    }

    VAR_8++;

    FUNC_11(VAR_8);
    FUNC_2();

    FUNC_10(0x00);
    FUNC_2();
  }

  FUNC_9();

  if (VAR_8 > 0)
  {
    FUNC_0("Found %d cards at read port 0x%p\n", VAR_8, VAR_2);
  }

  return VAR_8;
}
