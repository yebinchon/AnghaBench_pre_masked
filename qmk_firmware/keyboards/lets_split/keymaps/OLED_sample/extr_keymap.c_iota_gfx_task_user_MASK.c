
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CharacterMatrix {int dummy; } ;
typedef int led ;
typedef int buf ;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (struct CharacterMatrix*) ;
 int FUNC_3 (int *,struct CharacterMatrix*) ;
 int FUNC_4 (struct CharacterMatrix*,char*) ;
 int FUNC_5 (struct CharacterMatrix*,int ) ;
 int FUNC_6 (char*,int,char*,...) ;

void FUNC_7(void) {






  struct CharacterMatrix VAR_7;

  FUNC_2(&VAR_7);
  FUNC_5(&VAR_7, FUNC_0("USB: "));
  char VAR_8[40];
  FUNC_6(VAR_8,sizeof(VAR_8), "Undef-%ld", VAR_6);
  FUNC_5(&VAR_7, FUNC_0("\n\nLayer: "));
    switch (VAR_6) {
        case 130:
           FUNC_5(&VAR_7, FUNC_0("Default"));
           break;
        case 128:
           FUNC_5(&VAR_7, FUNC_0("Raise"));
           break;
        case 129:
           FUNC_5(&VAR_7, FUNC_0("Lower"));
           break;
        case 131:
           FUNC_5(&VAR_7, FUNC_0("ADJUST"));
           break;
        default:
           FUNC_4(&VAR_7, VAR_8);
 }


  char VAR_9[40];
    FUNC_6(VAR_9, sizeof(VAR_9), "\n%s  %s  %s",
            (FUNC_1() & (1<<VAR_2)) ? "NUMLOCK" : "       ",
            (FUNC_1() & (1<<VAR_1)) ? "CAPS" : "    ",
            (FUNC_1() & (1<<VAR_3)) ? "SCLK" : "    ");
  FUNC_4(&VAR_7, VAR_9);
  FUNC_3(&VAR_5, &VAR_7);
}
