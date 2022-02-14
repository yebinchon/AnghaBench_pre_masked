
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_opcode {scalar_t__ match; int applicable_version; unsigned int lose; int args; int * name; } ;
struct cris_disasm_data {scalar_t__ distype; } ;
typedef int rest_prefixes ;
typedef int opc_table ;
typedef int dip_prefixes ;
typedef int bdapq_m4_prefixes ;
typedef int bdapq_m2_prefixes ;
typedef int bdapq_m1_prefixes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 struct cris_opcode** FUNC_1 (int,int) ;
 int FUNC_2 (int ,unsigned int,unsigned int,struct cris_disasm_data*) ;
 scalar_t__ VAR_3 ;
 struct cris_opcode* VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static const struct cris_opcode *
FUNC_4 (unsigned int VAR_5,
    unsigned int VAR_6,
    struct cris_disasm_data *VAR_7)
{


  static const struct cris_opcode **VAR_8 = ((void*)0);

  const struct cris_opcode *VAR_9 = ((void*)0);
  const struct cris_opcode **VAR_10 = ((void*)0);


  static const struct cris_opcode **VAR_11 = ((void*)0);
  static const struct cris_opcode **VAR_12 = ((void*)0);
  static const struct cris_opcode **VAR_13 = ((void*)0);
  static const struct cris_opcode **VAR_14 = ((void*)0);
  static const struct cris_opcode **VAR_15 = ((void*)0);


  if (!VAR_8)
    {
      VAR_8 = FUNC_1 (65536, sizeof (VAR_8[0]));
      if (!VAR_8) {
       return ((void*)0);
      }

      VAR_11
 = FUNC_1 (65536, sizeof (VAR_11[0]));
      if (!VAR_11) {
       return ((void*)0);
      }

      VAR_12
 = FUNC_1 (65536, sizeof (VAR_12[0]));
      if (!VAR_12) {
       return ((void*)0);
      }

      VAR_13
 = FUNC_1 (65536, sizeof (VAR_13[0]));
      if (!VAR_13) {
       return ((void*)0);
      }

      VAR_14
 = FUNC_1 (65536, sizeof (VAR_14[0]));
      if (!VAR_14) {
       return ((void*)0);
      }

      VAR_15
 = FUNC_1 (65536, sizeof (VAR_15[0]));
      if (!VAR_15) {
       return ((void*)0);
      }
    }







  if (VAR_6 != VAR_2)
    {
      const struct cris_opcode *VAR_16
 = (VAR_8[VAR_6] != ((void*)0)
    ? VAR_8[VAR_6]
    : FUNC_4 (VAR_6, VAR_2, VAR_7));

      if (!VAR_16) {
       return ((void*)0);
      }

      if (VAR_16->match == VAR_0)
 {


   int VAR_17 = (VAR_6 & 255);

   if (VAR_17 > 127) {
    VAR_17 -= 256;
   }

   switch (VAR_17)
     {
     case -4:
       VAR_10 = VAR_14;
       break;

     case -2:
       VAR_10 = VAR_13;
       break;

     case -1:
       VAR_10 = VAR_12;
       break;

     default:
       VAR_10 = VAR_15;
       break;
     }
      } else if (VAR_16->match == VAR_1) {


       VAR_10 = VAR_11;
      } else {
       VAR_10 = VAR_15;
      }
    }

    if (VAR_6 != VAR_2 && VAR_10[VAR_5] != ((void*)0)) {
     VAR_9 = VAR_10[VAR_5];
    } else if (VAR_6 == VAR_2 && VAR_8[VAR_5] != ((void*)0)) {
     VAR_9 = VAR_8[VAR_5];
    } else {
     const struct cris_opcode *VAR_18;
     int VAR_19 = -1;

     for (VAR_18 = VAR_4;
      VAR_18->name != ((void*)0);
      VAR_18++) {
      int VAR_20;

      if (VAR_7->distype == VAR_3) {
       switch (VAR_18->applicable_version) {
       case 129:
        break;

       case 138:
       case 139:
       case 134:
       case 140:
       case 131:
       case 137:
       case 128:
        continue;

       case 133:
       case 130:
       case 136:
       case 135:
        break;

       case 132:
        FUNC_0 ();
       default:
        FUNC_0 ();
       }
      } else {
       switch (VAR_18->applicable_version) {
       case 129:
       case 138:
       case 133:
       case 139:
       case 130:
       case 131:
       case 137:
       case 140:
       case 136:
       case 128:
        break;

       case 135:
        continue;

       case 132:
        FUNC_0 ();
       default:
        FUNC_0 ();
       }
      }







      if ((VAR_18->match & VAR_5) == VAR_18->match && (VAR_18->lose & VAR_5) == 0 && ((VAR_20 = FUNC_2 (VAR_18->args, VAR_5, VAR_6, VAR_7)) >= 0) && ((VAR_20 += 2 * FUNC_3 (VAR_18->match | VAR_18->lose)) > VAR_19)) {
       VAR_9 = VAR_18;
       VAR_19 = VAR_20;



       if (VAR_20 >= 2 * 16) {
        break;
       }
      }
  }







  if (VAR_6 == VAR_2) {
   VAR_8[VAR_5] = VAR_9;
  } else {
   VAR_10[VAR_5] = VAR_9;
  }
    }

  return VAR_9;
}
