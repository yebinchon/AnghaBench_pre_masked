
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(char *VAR_5, char *VAR_6)
{
    char VAR_7[VAR_0];
    int VAR_8 = 0;
    char VAR_9[VAR_1];
    int VAR_10 = 0;
    FILE *VAR_11;

    FUNC_7(VAR_9, VAR_6);
    if ((VAR_11 = FUNC_2(VAR_6, "a")) == ((void*)0))
    {
        FUNC_3(1, "Open of %s failed (locked for writing?), trying to copy first\n", VAR_6);

        FUNC_6(VAR_9, "~");
        if (FUNC_0(VAR_6, VAR_9))
            return 3;
        VAR_10 = 1;
    }
    else
        FUNC_1(VAR_11);

    FUNC_5(VAR_7, VAR_2, VAR_4, VAR_9, VAR_5);
    if (FUNC_8(VAR_7) < 0)
    {
        FUNC_3(0, "\nCannot unpack %s (check 7z path!)\n", VAR_9);
        FUNC_3(1, "Failed to execute: '%s'\n", VAR_7);
        VAR_8 = 1;
    }
    else
    {
        FUNC_3(2, "\nUnpacking reactos.cab in %s\n", VAR_5);
        FUNC_5(VAR_7, VAR_3, VAR_4, VAR_5, VAR_5);
        if (FUNC_8(VAR_7) < 0)
        {
            FUNC_3(0, "\nCannot unpack reactos.cab in %s\n", VAR_5);
            FUNC_3(1, "Failed to execute: '%s'\n", VAR_7);
            VAR_8 = 2;
        }
    }
    if (VAR_10)
        FUNC_4(VAR_9);
    return VAR_8;
}
