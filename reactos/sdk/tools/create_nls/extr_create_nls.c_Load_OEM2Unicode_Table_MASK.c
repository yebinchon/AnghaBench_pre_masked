
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int CodePage; } ;
typedef int FILE ;
typedef int DWORD ;
typedef TYPE_1__ CPINFOEXA ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char**,int) ;

__attribute__((used)) static WCHAR *FUNC_9(char *VAR_0, WCHAR *VAR_1, UINT VAR_2, CPINFOEXA *VAR_3)
{
    char VAR_4[256];
    char *VAR_5;
    DWORD VAR_6, VAR_7;
    FILE *VAR_8;
    WCHAR *VAR_9;
    int VAR_10;

    FUNC_7("Loading oem glyph table \"%s\"\n", VAR_0);

    VAR_9 = (WCHAR *)FUNC_5(sizeof(WCHAR) * 65536);
    if(!VAR_9) {
        FUNC_7("Not enough memory for Codepage to Unicode table\n");
        return ((void*)0);
    }

    FUNC_6(VAR_9, VAR_1, 65536 * sizeof(WCHAR));

    VAR_8 = FUNC_2(VAR_0, "r");
    if(VAR_8 == ((void*)0)) {
        FUNC_3(VAR_9);
        return ((void*)0);
    }

    VAR_10 = 0;

    while(FUNC_1(VAR_4, sizeof(VAR_4), VAR_8)) {
        VAR_10++;
        VAR_5 = VAR_4;
        while(FUNC_4(*VAR_5)) VAR_5++;

        if(!*VAR_5 || VAR_5[0] == '#')
            continue;

        VAR_7 = FUNC_8(VAR_5, &VAR_5, 16);
        if(VAR_7 > 0xFFFF) {
            FUNC_7("Line %d: Entry 0x%06lX: File \"%s\" corrupted\n", VAR_10, VAR_7, VAR_0);
            continue;
        }

        while(FUNC_4(*VAR_5)) VAR_5++;

        if(!*VAR_5 || VAR_5[0] == '#') {

            continue;
        }
        else {
            VAR_6 = FUNC_8(VAR_5, &VAR_5, 16);
            if(VAR_6 > 0xFFFF) {
                FUNC_7("Line %d: Entry 0x%06lX unicode value: File \"%s\" corrupted\n", VAR_10, VAR_7, VAR_0);
                continue;
            }
        }

        if (VAR_3->CodePage == 864) {
            while(FUNC_4(*VAR_5)) VAR_5++;

            if(!*VAR_5 || VAR_5[0] == '#' || VAR_5[0] == '-') {

                continue;
            }
            else {
                VAR_6 = FUNC_8(VAR_5, &VAR_5, 16);
                if(VAR_6 > 0xFFFF) {
                    FUNC_7("Line %d: Entry 0x%06lX oem value: File \"%s\" corrupted\n", VAR_10, VAR_7, VAR_0);
                }
                continue;
            }
        }

        VAR_9[VAR_6] = (WCHAR)VAR_7;
    }

    FUNC_0(VAR_8);

    return VAR_9;
}
