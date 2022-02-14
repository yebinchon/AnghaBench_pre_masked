
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpl {char idx; int str; } ;
typedef int mrb_state ;
typedef char mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 char FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int * FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(mrb_state *VAR_30, struct tmpl *VAR_31, int *VAR_32, int *VAR_33, int *VAR_34, int *VAR_35, unsigned int *VAR_36)
{
  mrb_int VAR_37, VAR_38;
  int VAR_39, VAR_40, VAR_41, VAR_42 = 0;
  int VAR_43 = 1;
  unsigned int VAR_44 = 0;
  const char *VAR_45;

  VAR_45 = FUNC_2(VAR_31->str);
  VAR_38 = FUNC_1(VAR_31->str);

  VAR_37 = VAR_45[VAR_31->idx++];
alias:
  switch (VAR_37) {
  case 'A':
    VAR_40 = VAR_13;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_21 | VAR_15;
    break;
  case 'a':
    VAR_40 = VAR_13;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_21 | VAR_15 | VAR_23;
    break;
  case 'C':
    VAR_40 = VAR_4;
    VAR_41 = VAR_26;
    VAR_42 = 1;
    break;
  case 'c':
    VAR_40 = VAR_4;
    VAR_41 = VAR_26;
    VAR_42 = 1;
    VAR_44 |= VAR_20;
    break;
  case 'D': case 'd':
    VAR_40 = VAR_5;
    VAR_41 = VAR_25;
    VAR_42 = 8;
    VAR_44 |= VAR_20;
    break;
  case 'F': case 'f':
    VAR_40 = VAR_6;
    VAR_41 = VAR_25;
    VAR_42 = 4;
    VAR_44 |= VAR_20;
    break;
  case 'E':
    VAR_40 = VAR_5;
    VAR_41 = VAR_25;
    VAR_42 = 8;
    VAR_44 |= VAR_20 | VAR_19;
    break;
  case 'e':
    VAR_40 = VAR_6;
    VAR_41 = VAR_25;
    VAR_42 = 4;
    VAR_44 |= VAR_20 | VAR_19;
    break;
  case 'G':
    VAR_40 = VAR_5;
    VAR_41 = VAR_25;
    VAR_42 = 8;
    VAR_44 |= VAR_20 | VAR_16;
    break;
  case 'g':
    VAR_40 = VAR_6;
    VAR_41 = VAR_25;
    VAR_42 = 4;
    VAR_44 |= VAR_20 | VAR_16;
    break;
  case 'H':
    VAR_40 = VAR_7;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_15;
    break;
  case 'h':
    VAR_40 = VAR_7;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_15 | VAR_18;
    break;
  case 'I':
    switch (sizeof(int)) {
      case 2: VAR_37 = 'S'; goto alias;
      case 4: VAR_37 = 'L'; goto alias;
      case 8: VAR_37 = 'Q'; goto alias;
      default:
        FUNC_4(VAR_30, VAR_1, "mruby-pack does not support sizeof(int) == %d", (int)sizeof(int));
    }
    break;
  case 'i':
    switch (sizeof(int)) {
      case 2: VAR_37 = 's'; goto alias;
      case 4: VAR_37 = 'l'; goto alias;
      case 8: VAR_37 = 'q'; goto alias;
      default:
        FUNC_4(VAR_30, VAR_1, "mruby-pack does not support sizeof(int) == %d", (int)sizeof(int));
    }
    break;
  case 'L':
    VAR_40 = VAR_9;
    VAR_41 = VAR_26;
    VAR_42 = 4;
    break;
  case 'l':
    VAR_40 = VAR_9;
    VAR_41 = VAR_26;
    VAR_42 = 4;
    VAR_44 |= VAR_20;
    break;
  case 'm':
    VAR_40 = VAR_3;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_21 | VAR_15;
    break;
  case 'N':
    VAR_40 = VAR_9;
    VAR_41 = VAR_26;
    VAR_42 = 4;
    VAR_44 |= VAR_16;
    break;
  case 'n':
    VAR_40 = VAR_12;
    VAR_41 = VAR_26;
    VAR_42 = 2;
    VAR_44 |= VAR_16;
    break;
  case 'Q':
    VAR_40 = VAR_11;
    VAR_41 = VAR_26;
    VAR_42 = 8;
    break;
  case 'q':
    VAR_40 = VAR_11;
    VAR_41 = VAR_26;
    VAR_42 = 8;
    VAR_44 |= VAR_20;
    break;
  case 'S':
    VAR_40 = VAR_12;
    VAR_41 = VAR_26;
    VAR_42 = 2;
    break;
  case 's':
    VAR_40 = VAR_12;
    VAR_41 = VAR_26;
    VAR_42 = 2;
    VAR_44 |= VAR_20;
    break;
  case 'U':
    VAR_40 = VAR_14;
    VAR_41 = VAR_26;
    break;
  case 'V':
    VAR_40 = VAR_9;
    VAR_41 = VAR_26;
    VAR_42 = 4;
    VAR_44 |= VAR_19;
    break;
  case 'v':
    VAR_40 = VAR_12;
    VAR_41 = VAR_26;
    VAR_42 = 2;
    VAR_44 |= VAR_19;
    break;
  case 'x':
    VAR_40 = VAR_10;
    VAR_41 = VAR_27;
    break;
  case 'Z':
    VAR_40 = VAR_13;
    VAR_41 = VAR_28;
    VAR_44 |= VAR_21 | VAR_15 | VAR_22;
    break;
  default:
    VAR_40 = VAR_8;
    VAR_41 = VAR_27;
    break;
  }


  while (VAR_31->idx < VAR_38) {
    VAR_39 = VAR_45[VAR_31->idx++];
    if (FUNC_0(VAR_39)) {
      VAR_43 = VAR_39 - '0';
      while (VAR_31->idx < VAR_38 && FUNC_0(VAR_45[VAR_31->idx])) {
        int VAR_46 = VAR_45[VAR_31->idx++] - '0';
        if (VAR_43+VAR_46 > VAR_2/10) {
          FUNC_3(VAR_30, VAR_1, "too big template length");
        }
        VAR_43 = VAR_43 * 10 + VAR_46;
      }
      continue;
    } else if (VAR_39 == '*') {
      VAR_43 = -1;
    } else if (VAR_39 == '_' || VAR_39 == '!' || VAR_39 == '<' || VAR_39 == '>') {
      if (FUNC_5("sSiIlLqQ", (int)VAR_37) == ((void*)0)) {
        FUNC_4(VAR_30, VAR_0, "'%c' allowed only after types sSiIlLqQ", VAR_39);
      }
      if (VAR_39 == '_' || VAR_39 == '!') {
        VAR_44 |= VAR_24;
      } else if (VAR_39 == '<') {
        VAR_44 |= VAR_19;
      } else if (VAR_39 == '>') {
        VAR_44 |= VAR_16;
      }
    } else {
      VAR_31->idx--;
      break;
    }
  }

  if ((VAR_44 & VAR_19) || (!(VAR_44 & VAR_16) && VAR_29)) {
    VAR_44 |= VAR_17;
  }

  *VAR_32 = VAR_40;
  *VAR_33 = VAR_41;
  *VAR_34 = VAR_42;
  *VAR_35 = VAR_43;
  *VAR_36 = VAR_44;
}
