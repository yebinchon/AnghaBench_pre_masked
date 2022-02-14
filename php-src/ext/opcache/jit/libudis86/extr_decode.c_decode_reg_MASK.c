
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {int base; int size; int type; } ;
struct ud {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct ud*,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ud*,int,int) ;
 int FUNC_3 (struct ud*,int) ;

__attribute__((used)) static void
FUNC_4(struct ud *VAR_8,
           struct ud_operand *VAR_9,
           int VAR_10,
           int VAR_11,
           int VAR_12)
{
  int VAR_13;
  VAR_12 = FUNC_3(VAR_8, VAR_12);
  switch (VAR_10) {
    case 131 : VAR_13 = FUNC_2(VAR_8, VAR_12, VAR_11); break;
    case 130 : VAR_13 = VAR_5 + (VAR_11 & 7); break;
    case 128 :
      VAR_13 = VAR_11 + (VAR_12 == VAR_0 ? VAR_7 : VAR_6);
      break;
    case 133 : VAR_13 = VAR_2 + VAR_11; break;
    case 132 : VAR_13 = VAR_3 + VAR_11; break;
    case 129 : {



      if ((VAR_11 & 7) > 5) {
        FUNC_0(VAR_8, "invalid segment register value\n");
        return;
      } else {
        VAR_13 = VAR_4 + (VAR_11 & 7);
      }
      break;
    }
    default:
      FUNC_1(!"invalid register type");
      return;
  }
  VAR_9->type = VAR_1;
  VAR_9->base = VAR_13;
  VAR_9->size = VAR_12;
}
