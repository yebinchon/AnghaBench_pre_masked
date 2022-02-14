
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct ud {int dis_mode; TYPE_1__* le; int vendor; int pfx_adr; int pfx_opr; int pfx_rex; } ;
struct TYPE_2__ {int type; int* table; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ud*) ;
 int FUNC_6 (struct ud*,int) ;
 int FUNC_7 (struct ud*) ;
 int FUNC_8 (struct ud*) ;
 int FUNC_9 (struct ud*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (struct ud*) ;
 int FUNC_13 (struct ud*) ;
 TYPE_1__* VAR_3 ;
 size_t FUNC_14 (struct ud*) ;
 size_t FUNC_15 (struct ud*) ;

__attribute__((used)) static int
FUNC_16(struct ud *VAR_4, uint16_t VAR_5)
{
  uint8_t VAR_6 = 0;
  if ((VAR_5 & 0x8000) == 0) {
    return FUNC_6(VAR_4, VAR_5);
  }
  VAR_4->le = &VAR_3[(~0x8000 & VAR_5)];
  if (VAR_4->le->type == VAR_0) {
    return FUNC_5(VAR_4);
  }

  switch (VAR_4->le->type) {
    case 139:

      VAR_6 = (FUNC_0(FUNC_13(VAR_4)) + 1) / 4;
      break;



    case 138:
      VAR_6 = VAR_4->dis_mode != 64 ? 0 : 1;
      break;
    case 137:
      VAR_6 = FUNC_11(VAR_4->dis_mode, FUNC_3(VAR_4->pfx_rex), VAR_4->pfx_opr) / 32;
      break;
    case 140:
      VAR_6 = FUNC_10(VAR_4->dis_mode, VAR_4->pfx_adr) / 32;
      break;
    case 128:
      VAR_6 = FUNC_13(VAR_4) - 0xC0;
      break;
    case 132:
      if (VAR_4->vendor == VAR_2) {

        VAR_6 = (VAR_4->le->table[VAR_6] != 0) ? 0 : 1;
      } else if (VAR_4->vendor == VAR_1) {
        VAR_6 = 0;
      } else {
        VAR_6 = 1;
      }
      break;
    case 135:
      VAR_6 = FUNC_2(FUNC_13(VAR_4));
      break;
    case 136:
      VAR_6 = FUNC_1(FUNC_13(VAR_4));
      break;
    case 134:
      return FUNC_8(VAR_4);
    case 131:
      return FUNC_9(VAR_4);
    case 129:
      VAR_6 = FUNC_15(VAR_4);
      break;
    case 130:
      VAR_6 = FUNC_14(VAR_4);
      break;
    case 133:
      FUNC_12(VAR_4);
      return FUNC_7(VAR_4);
    default:
      FUNC_4(!"not reached");
      break;
  }

  return FUNC_16(VAR_4, VAR_4->le->table[VAR_6]);
}
