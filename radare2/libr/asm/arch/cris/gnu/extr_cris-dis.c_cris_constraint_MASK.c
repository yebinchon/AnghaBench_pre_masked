
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_spec_reg {unsigned int reg_size; } ;
struct cris_opcode {int match; } ;
struct cris_disasm_data {int distype; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct cris_opcode* FUNC_0 (unsigned int,unsigned int,struct cris_disasm_data*) ;
 struct cris_spec_reg* FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_4,
   unsigned int VAR_5,
   unsigned int VAR_6,
   struct cris_disasm_data *VAR_7)
{
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10 = 0;
  const char *VAR_11;

  for (VAR_11 = VAR_4; *VAR_11; VAR_11++) {
   switch (*VAR_11) {
   case '!':


    if (VAR_6 != VAR_2 || VAR_7->distype != VAR_3) {
     return -1;
    }
    break;

   case 'U':

    return -1;

   case 'M':




    VAR_9 = ((VAR_5 >> 12) & 0xf);
    if (VAR_9 != 0 && VAR_9 != 4 && VAR_9 != 8) {
     return -1;
    }
    break;

   case 'm':
    if ((VAR_5 & 0x30) == 0x30) {
     return -1;
    }
    break;

   case 'S':

    if (VAR_6 != VAR_2 && (VAR_5 & 0x400) == 0) {
     VAR_10 = 1;
     break;
    } else {
     return -1;
    }

   case 's':
   case 'y':
   case 'Y':


    if (VAR_6 != VAR_2) {
     if (VAR_5 & 0x400) {
      const struct cris_opcode *VAR_12 = FUNC_0 (VAR_6, VAR_2, VAR_7);

      if (VAR_12->match == VAR_1) {
       return -1;
      }
     }

     VAR_10 = 1;
    }
    break;

   case 'B':

    VAR_10 = 1;



    if (VAR_6 != VAR_2) {

     const struct cris_opcode *VAR_13 = FUNC_0 (VAR_6, VAR_2, VAR_7);

     if (VAR_13->match == VAR_0) {
      int VAR_14 = (VAR_6 & 255);

      if (VAR_14 > 127) {
       VAR_14 -= 256;
      }

      if (VAR_11[1] == 'P') {
       unsigned int VAR_15 = (VAR_5 >> 12) & 15;
       const struct cris_spec_reg *VAR_16 = FUNC_1 (VAR_15, VAR_7->distype);



       if (VAR_16 && VAR_16->reg_size == (unsigned int)-VAR_14) {
        break;
       }
      } else if (VAR_11[1] == 'R') {
       if ((VAR_5 & 0x30) == 0x20 && VAR_14 == -4) {
        break;
       }
      }


     }
    }
    return -1;

   case 'D':
    VAR_8 = (((VAR_5 >> 12) & 15) == (VAR_5 & 15));
    if (!VAR_8) {
     return -1;
    } else {
     VAR_8 += 4;
    }
    break;

   case 'P': {
    const struct cris_spec_reg *VAR_17 = FUNC_1 ((VAR_5 >> 12) & 15, VAR_7->distype);
    if (VAR_17 != ((void*)0)) {
     VAR_8 += 3;
     break;
    } else {
     return -1;
    }
   }
   }
  }

  if (VAR_6 != VAR_2 && !VAR_10) {
   return -1;
  }

  return VAR_8;
}
