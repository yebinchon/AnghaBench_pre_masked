
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct CharacterMatrix {int dummy; } ;
typedef int led ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 char** VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct CharacterMatrix*) ;
 int FUNC_4 (int *,struct CharacterMatrix*) ;
 int FUNC_5 (struct CharacterMatrix*,char*) ;
 int FUNC_6 (struct CharacterMatrix*,int ) ;
 int FUNC_7 (char*,int,char*,...) ;

void FUNC_8(void) {






  struct CharacterMatrix VAR_7;

  FUNC_3(&VAR_7);
  FUNC_6(&VAR_7, FUNC_0("TKC1800"));

  uint8_t VAR_8 = FUNC_1(VAR_6);

  char VAR_9[40];
  FUNC_7(VAR_9,sizeof(VAR_9), "Undef-%d", VAR_8);
  FUNC_6(&VAR_7, FUNC_0("\nLayer: "));
  FUNC_5(&VAR_7, VAR_5[VAR_8]);


  char VAR_10[40];
    FUNC_7(VAR_10, sizeof(VAR_10), "\n\n%s  %s  %s",
            (FUNC_2() & (1<<VAR_1)) ? "NUMLOCK" : "       ",
            (FUNC_2() & (1<<VAR_0)) ? "CAPS" : "    ",
            (FUNC_2() & (1<<VAR_2)) ? "SCLK" : "    ");
  FUNC_5(&VAR_7, VAR_10);
  FUNC_4(&VAR_4, &VAR_7);
}
