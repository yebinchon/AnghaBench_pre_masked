
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct CharacterMatrix {int dummy; } ;
typedef int led ;
typedef int buf ;
struct TYPE_4__ {int member_0; int member_1; int member_2; } ;
struct TYPE_3__ {int member_0; int member_1; int member_2; } ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (struct CharacterMatrix*,char*) ;
 int FUNC_5 (struct CharacterMatrix*,int ) ;
 int FUNC_6 (char*,int,char*,char*,...) ;

void FUNC_7(struct CharacterMatrix *VAR_4) {


  static char VAR_5[][2][3] = {{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}}};
  int VAR_6 = FUNC_2() ? 0 : 1;
  FUNC_4(VAR_4, VAR_5[VAR_6][0]);
  FUNC_4(VAR_4, "\n");
  FUNC_4(VAR_4, VAR_5[VAR_6][1]);


  char VAR_7[40];
  FUNC_6(VAR_7,sizeof(VAR_7), "Undef-%ld", VAR_3);
  FUNC_5(VAR_4, FUNC_0("\nLayer: "));
  switch (FUNC_1(VAR_3)) {
    case 130:
      FUNC_5(VAR_4, FUNC_0("Default"));
      break;
    case 128:
      FUNC_5(VAR_4, FUNC_0("Raise"));
      break;
    case 129:
      FUNC_5(VAR_4, FUNC_0("Lower"));
      break;
    default:
      FUNC_4(VAR_4, VAR_7);
  }


  char VAR_8[40];
  FUNC_6(VAR_8, sizeof(VAR_8), "\n%s %s %s",
      (FUNC_3() & (1<<VAR_1)) ? "NMLK" : "    ",
      (FUNC_3() & (1<<VAR_0)) ? "CAPS" : "    ",
      (FUNC_3() & (1<<VAR_2)) ? "SCLK" : "    ");
  FUNC_4(VAR_4, VAR_8);
}
