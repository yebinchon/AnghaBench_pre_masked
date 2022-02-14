
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ud {scalar_t__ inp_ctr; int pfx_adr; int pfx_lock; int pfx_opr; int pfx_str; int dis_mode; int pfx_rex; int pfx_seg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ud*) ;
 int FUNC_1 (struct ud*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ud*) ;

__attribute__((used)) static int
FUNC_3(struct ud *VAR_7)
{
  int VAR_8 = 0;
  uint8_t VAR_9 = 0, VAR_10 = 0;
  FUNC_0(VAR_7);

  do {
    VAR_10 = VAR_9;
    VAR_9 = FUNC_2(VAR_7);
    FUNC_0(VAR_7);
    if (VAR_7->inp_ctr == VAR_0) {
      FUNC_1(VAR_7, "max instruction length");
    }

    switch (VAR_9)
    {
    case 0x2E:
      VAR_7->pfx_seg = VAR_1;
      break;
    case 0x36:
      VAR_7->pfx_seg = VAR_6;
      break;
    case 0x3E:
      VAR_7->pfx_seg = VAR_2;
      break;
    case 0x26:
      VAR_7->pfx_seg = VAR_3;
      break;
    case 0x64:
      VAR_7->pfx_seg = VAR_4;
      break;
    case 0x65:
      VAR_7->pfx_seg = VAR_5;
      break;
    case 0x67:
      VAR_7->pfx_adr = 0x67;
      break;
    case 0xF0:
      VAR_7->pfx_lock = 0xF0;
      break;
    case 0x66:
      VAR_7->pfx_opr = 0x66;
      break;
    case 0xF2:
      VAR_7->pfx_str = 0xf2;
      break;
    case 0xF3:
      VAR_7->pfx_str = 0xf3;
      break;
    default:

      VAR_8 = (VAR_7->dis_mode == 64 && (VAR_9 & 0xF0) == 0x40) ? 0 : 1;
      break;
    }
  } while (!VAR_8);

  if (VAR_7->dis_mode == 64 && (VAR_10 & 0xF0) == 0x40) {
    VAR_7->pfx_rex = VAR_10;
  }
  return 0;
}
