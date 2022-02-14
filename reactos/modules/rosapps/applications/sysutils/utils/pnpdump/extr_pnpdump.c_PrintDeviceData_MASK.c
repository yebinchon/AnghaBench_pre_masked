
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Node; int Size; int ProductId; } ;
typedef TYPE_1__* PCM_PNP_BIOS_DEVICE_NODE ;
typedef int CM_PNP_BIOS_DEVICE_NODE ;


 char* FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (unsigned char*,int *,int) ;
 int FUNC_9 (char*,...) ;

void FUNC_10 (PCM_PNP_BIOS_DEVICE_NODE VAR_2)
{
  char VAR_3[8];
  unsigned char *VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;

  unsigned char VAR_7[4];

  FUNC_9 ("Node: %x  Size %hu (0x%hx)\n",
   VAR_2->Node,
   VAR_2->Size,
   VAR_2->Size);

  FUNC_8(VAR_7, &VAR_2->ProductId, 4);

  VAR_3[0] = ((VAR_7[0] >> 2) & 0x1F) + 0x40;
  VAR_3[1] = ((VAR_7[0] << 3) & 0x18) +
      ((VAR_7[1] >> 5) & 0x07) + 0x40;
  VAR_3[2] = (VAR_7[1] & 0x1F) + 0x40;

  VAR_3[3] = VAR_0[(VAR_7[2] >> 4) & 0xF];
  VAR_3[4] = VAR_0[VAR_7[2] & 0x0F];

  VAR_3[5] = VAR_0[(VAR_7[3] >> 4) & 0x0F];
  VAR_3[6] = VAR_0[VAR_7[3] & 0x0F];
  VAR_3[7] = 0;

  FUNC_9("  '%s' (%s)\n",
  VAR_3, FUNC_0(VAR_3));

  if (VAR_2->Size > sizeof(CM_PNP_BIOS_DEVICE_NODE))
    {
      VAR_4 = (unsigned char *)(VAR_2 + 1);
      while (VAR_1)
 {
   if (*VAR_4 & 0x80)
     {
       VAR_6 = *VAR_4 & 0x7F;
       VAR_4++;
       VAR_5 = *VAR_4;
       VAR_4++;
       VAR_5 += (*VAR_4 << 16);
       VAR_4++;


       switch (VAR_6)
  {
    case 1:
      FUNC_6(VAR_4);
      break;

    case 5:
      FUNC_7(VAR_4);
      break;

    case 6:
      FUNC_3(VAR_4);
      break;

    default:
      FUNC_9("      Large tag: type %u  size %u\n",
      VAR_6,
      VAR_5);
      break;
  }
     }
   else
     {
       VAR_6 = (*VAR_4 >> 3) & 0x0F;
       VAR_5 = *VAR_4 & 0x07;
       VAR_4++;

       switch (VAR_6)
  {
    case 2:
      FUNC_9("      Logical device ID\n");
      break;

    case 3:
      FUNC_9("      Compatible device ID\n");
      break;

    case 4:
      FUNC_5(VAR_4);
      break;

    case 5:
      FUNC_1(VAR_4);
      break;

    case 8:
      FUNC_4(VAR_4);
      break;

    case 9:
      FUNC_2(VAR_4);
      break;

    case 0x0F:
      break;

    default:
      FUNC_9("      Small tag: type %u  size %u\n",
      VAR_6,
      VAR_5);
      break;
  }


       if (VAR_6 == 0x0F)
  break;
     }

   VAR_4 = VAR_4 + VAR_5;
 }
    }
}
