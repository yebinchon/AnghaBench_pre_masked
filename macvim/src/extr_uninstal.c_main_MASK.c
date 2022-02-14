
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char**) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 char** VAR_5 ;
 char** VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;
 int VAR_8 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;

int
FUNC_21(int VAR_9, char *VAR_10[])
{
    int VAR_11 = 0;
    FILE *VAR_12;
 VAR_7 = VAR_3;


    FUNC_2(VAR_10);

    FUNC_9("This program will remove the following items:\n");
    FUNC_9("\n");
    VAR_11 = FUNC_10(0);
    if (VAR_11 > 0)
    {
 if (VAR_7)
     FUNC_9("\nRemove %s (y/n)? ", VAR_11 > 1 ? "them" : "it");
 if (!VAR_7 || FUNC_0())
     FUNC_10(1);
    }

    VAR_12 = FUNC_4("gvim.exe", "r");
    if (VAR_12 != ((void*)0))
    {
 FUNC_3(VAR_12);
 FUNC_9("gvim.exe detected.  Attempting to unregister gvim with OLE\n");
 FUNC_20("gvim.exe -silent -unregister");
    }

    FUNC_1();

    if (VAR_7)
    {
 FUNC_9("\nYou may now want to delete the Vim executables and runtime files.\n");
 FUNC_9("(They are still where you unpacked them.)\n");
    }

    if (VAR_7)
    {
 FUNC_15(VAR_8);
 FUNC_9("\nPress Enter to exit...");
 (void)FUNC_6();
    }
    else
 FUNC_16(3);

    return 0;
}
