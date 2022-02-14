
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wine_test {int subtest_count; char* name; int * subtests; int exename; } ;
typedef int LPTSTR ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wine_test*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,char*,char const*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int *,char*,int ) ;
 char* FUNC_10 (char*,char const*) ;
 char* FUNC_11 (char*,int ) ;
 char* FUNC_12 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_13 (int) ;
 void* FUNC_14 (int *,int) ;

__attribute__((used)) static void
FUNC_15 (const char *VAR_5, struct wine_test *VAR_6, LPTSTR VAR_7)
{
    char *VAR_8, *VAR_9;
    FILE *VAR_10;
    size_t VAR_11;
    char VAR_12[8192], *VAR_13;
    static const char VAR_14[] = "Valid test names:";
    int VAR_15;

    VAR_6->subtest_count = 0;

    VAR_8 = FUNC_12 (0, "sub");
    if (!VAR_8) FUNC_6 (VAR_1, "Can't name subtests file.");

    FUNC_0 (VAR_6, VAR_5, VAR_7);
    VAR_9 = FUNC_9 (((void*)0), "%s --list", VAR_6->exename);
    FUNC_7 (VAR_9, VAR_8, VAR_5, 5000);
    FUNC_4 (VAR_9);

    VAR_10 = FUNC_2 (VAR_8, "r");
    if (!VAR_10) {
        FUNC_6 (VAR_0, "Can't open subtests output of %s: %d",
                VAR_6->name, VAR_3);
        goto quit;
    }
    VAR_11 = FUNC_3 (VAR_12, 1, sizeof VAR_12, VAR_10);
    FUNC_1 (VAR_10);
    if (sizeof VAR_12 == VAR_11) {
        FUNC_6 (VAR_0, "Subtest list of %s too big.",
                VAR_6->name, sizeof VAR_12);
        goto quit;
    }
    VAR_12[VAR_11] = 0;

    VAR_13 = FUNC_10 (VAR_12, VAR_14);
    if (!VAR_13) {
        FUNC_6 (VAR_0, "Can't parse subtests output of %s",
                VAR_6->name);
        goto quit;
    }
    VAR_13 += sizeof VAR_14;

    VAR_15 = 10;
    VAR_6->subtests = FUNC_13 (VAR_15 * sizeof(char*));
    VAR_13 = FUNC_11 (VAR_13, VAR_4);
    while (VAR_13) {
        if (VAR_6->subtest_count == VAR_15) {
            VAR_15 *= 2;
            VAR_6->subtests = FUNC_14 (VAR_6->subtests,
                                       VAR_15 * sizeof(char*));
        }
        VAR_6->subtests[VAR_6->subtest_count++] = FUNC_8 (VAR_13);
        VAR_13 = FUNC_11 (((void*)0), VAR_4);
    }
    VAR_6->subtests = FUNC_14 (VAR_6->subtests,
                               VAR_6->subtest_count * sizeof(char*));

 quit:
    if (FUNC_5 (VAR_8))
        FUNC_6 (VAR_2, "Can't delete file '%s': %d",
                VAR_8, VAR_3);
    FUNC_4 (VAR_8);
}
