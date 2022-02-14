
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int we_wordc; char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct winsize {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*) ;
 int * FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,struct winsize*) ;
 int * VAR_9 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,char*,char*,char*) ;
 int VAR_10 ;
 int FUNC_16 (char*) ;
 int VAR_11 ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (char*,TYPE_1__*,int ) ;

int FUNC_19(int VAR_12, char *VAR_13[])
{
pid_t VAR_14;
struct winsize VAR_15;
wordexp_t VAR_16;
char *VAR_17;
char *VAR_18;

FUNC_10();

VAR_17 = FUNC_4("PROGRESS_ARGS");

if (VAR_17) {
    int VAR_19;



    VAR_19 = FUNC_16(VAR_13[0]) + 1 + FUNC_16(VAR_17) + 1;
    VAR_18 = FUNC_7(VAR_19 * sizeof(char));
    FUNC_0(VAR_18 != ((void*)0));
    FUNC_15(VAR_18, "%s %s", VAR_13[0], VAR_17);

    if (FUNC_18(VAR_18, &VAR_16, 0)) {
        FUNC_3(VAR_10,"Unable to parse PROGRESS_ARGS environment variable.\n");
        FUNC_2(VAR_0);
    }
    FUNC_9(VAR_16.we_wordc,VAR_16.we_wordv);
}
FUNC_9(VAR_12,VAR_13);


FUNC_6(VAR_3, VAR_4, &VAR_15);
if (VAR_5 || VAR_6) {
    FUNC_13(VAR_1, "");
    if ((VAR_9 = FUNC_5()) == ((void*)0) ) {
        FUNC_3(VAR_10, "Error initialising ncurses.\n");
        FUNC_2(VAR_0);
    }
    if (!VAR_7) {
      VAR_7 = 1;
      VAR_11 = 1;
    }
    FUNC_12(VAR_11);
    FUNC_14(VAR_2, VAR_8);
    do {
        FUNC_8(&VAR_14);
        FUNC_11();
        if(VAR_6 && !VAR_14) {
          FUNC_17(1000000 * VAR_11);
        }
    } while ((VAR_5 && VAR_14) || VAR_6);
    FUNC_1();
}
else {
    FUNC_12(VAR_11);
    FUNC_8(&VAR_14);
}
return 0;
}
