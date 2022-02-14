
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_spec_reg {int reg_size; } ;
struct cris_opcode {char* args; scalar_t__ imm_oprnd_size; } ;
typedef enum cris_disass_family { ____Placeholder_cris_disass_family } cris_disass_family ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct cris_spec_reg* FUNC_0 (unsigned int,int) ;

__attribute__((used)) static unsigned
FUNC_1 (unsigned int VAR_3,
        const struct cris_opcode *VAR_4,
        enum cris_disass_family VAR_5,
        const struct cris_opcode *VAR_6)
{

  unsigned VAR_7 = 2;
  const char *VAR_8 = VAR_4->args;
  const char *VAR_9;

  for (VAR_9 = VAR_8; *VAR_9; VAR_9++) {
   if ((*VAR_9 == 's' || *VAR_9 == 'N' || *VAR_9 == 'Y') && (VAR_3 & 0x400) && (VAR_3 & 15) == 15 && !VAR_6) {


    int VAR_10 = 1 << ((VAR_3 >> 4) & (*VAR_8 == 'z' ? 1 : 3));

    if (VAR_4->imm_oprnd_size == VAR_0) {
     VAR_7 += 4;
    } else if (VAR_4->imm_oprnd_size == VAR_1) {
     const struct cris_spec_reg *VAR_11 = FUNC_0 ((VAR_3 >> 12) & 15, VAR_5);



     if (!VAR_11) {
      return 2;
     }




     VAR_7 +=
      VAR_5 == VAR_2 ? 4 : (VAR_11->reg_size + 1) & ~1;
    } else {
     VAR_7 += (VAR_10 + 1) & ~1;
    }
   } else if (*VAR_9 == 'n') {
    VAR_7 += 4;
   } else if (*VAR_9 == 'b') {
    VAR_7 += 2;
   }
  }

  return VAR_7;
}
