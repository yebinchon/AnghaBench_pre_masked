
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ strip; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char const*,char*,char const*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
    char VAR_5[1024], *VAR_6;
    int VAR_7;
    FILE *VAR_8;

    FUNC_6(VAR_5, "%s%c%s", VAR_3, VAR_1, VAR_4);
    VAR_8 = FUNC_2(VAR_5, "rb");
    if (!VAR_8) {
        if (VAR_0.strip)
            FUNC_7(VAR_5, ".strip");
        else
            FUNC_7(VAR_5, ".normal");
        VAR_8 = FUNC_2(VAR_5, "rb");
    }
    if (!VAR_8) {
        FUNC_5("Error: test result file could not be opened.\n");
        FUNC_0(1);
    }

    VAR_6 = FUNC_4(VAR_8);
    if (FUNC_8(VAR_6, VAR_2) != 0)
        VAR_7 = 1;
    else
        VAR_7 = 0;
    FUNC_3(VAR_6);
    FUNC_1(VAR_8);

    return VAR_7;
}
