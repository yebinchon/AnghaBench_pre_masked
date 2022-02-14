
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int MaxCharSize; char UnicodeDefaultChar; void** LeadByte; scalar_t__ DefaultChar; int CodePage; } ;
typedef int FILE ;
typedef int DWORD ;
typedef TYPE_1__ CPINFOEXA ;
typedef void* BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char**,int ) ;

__attribute__((used)) static WCHAR *FUNC_11(char *VAR_1, UINT VAR_2, CPINFOEXA *VAR_3)
{
    char VAR_4[256];
    char *VAR_5;
    DWORD VAR_6, VAR_7;
    FILE *VAR_8;
    WCHAR *VAR_9;
    int VAR_10, VAR_11, VAR_12;

    FUNC_8("Loading translation table \"%s\"\n", VAR_1);


    FUNC_6(VAR_3, 0, sizeof(CPINFOEXA));
    VAR_3->CodePage = VAR_2;
    *(WCHAR *)VAR_3->DefaultChar = '?';
    VAR_3->MaxCharSize = 1;
    VAR_3->UnicodeDefaultChar = '?';

    FUNC_7(VAR_3);

    VAR_9 = (WCHAR *)FUNC_5(sizeof(WCHAR) * 65536);
    if(!VAR_9) {
        FUNC_8("Not enough memory for Codepage to Unicode table\n");
        return ((void*)0);
    }

    for(VAR_6 = 0; VAR_6 < 256; VAR_6++)
        VAR_9[VAR_6] = (WCHAR)VAR_6;

    for(VAR_6 = 256; VAR_6 < 65536; VAR_6++)
        VAR_9[VAR_6] = VAR_3->UnicodeDefaultChar;

    VAR_8 = FUNC_2(VAR_1, "r");
    if(VAR_8 == ((void*)0)) {
        FUNC_3(VAR_9);
        return ((void*)0);
    }

    VAR_12 = 0;
    VAR_10 = 0;
    VAR_11 = 0;

    while(FUNC_1(VAR_4, sizeof(VAR_4), VAR_8)) {
        VAR_12++;
        VAR_5 = VAR_4;
        while(FUNC_4(*VAR_5)) VAR_5++;

        if(!*VAR_5 || VAR_5[0] == '#')
            continue;

        VAR_6 = FUNC_10(VAR_5, &VAR_5, 0);
        if(VAR_6 > 0xFFFF) {
            FUNC_8("Line %d: Entry 0x%06lX: File \"%s\" corrupted\n", VAR_12, VAR_6, VAR_1);
            continue;
        }

        if(VAR_6 > 0xFF && VAR_3->MaxCharSize != 2) {

            VAR_3->MaxCharSize = 2;
        }

        while(FUNC_4(*VAR_5)) VAR_5++;

        if(!*VAR_5 || VAR_5[0] == '#') {

        }
        else {
            VAR_7 = FUNC_10(VAR_5, &VAR_5, 0);
            if(VAR_7 > 0xFFFF) {
                FUNC_8("Line %d: Entry 0x%06lX unicode value: File \"%s\" corrupted\n", VAR_12, VAR_6, VAR_1);
            }
            VAR_9[VAR_6] = (WCHAR)VAR_7;
        }


        while(*VAR_5 && *VAR_5 != '#') VAR_5++;

        if(*VAR_5 == '#' && FUNC_9(VAR_5, "DBCS LEAD BYTE")) {

            if(VAR_6 > 0xFF) {
                FUNC_8("Line %d: Entry 0x%04lX: Error: DBCS lead byte overflowed\n", VAR_12, VAR_6);
                continue;
            }

            VAR_9[VAR_6] = (WCHAR)0;

            if(VAR_11) {
                VAR_3->LeadByte[(VAR_10 - 1) * 2 + 1] = (BYTE)VAR_6;
            }
            else {

                if(VAR_10 < VAR_0/2) {
                    VAR_10++;
                    VAR_11 = 1;
                    VAR_3->LeadByte[(VAR_10 - 1) * 2] = (BYTE)VAR_6;
                }
                else
                    FUNC_8("Line %d: Error: could not start new lead byte range\n", VAR_12);
            }
        }
        else {
            if(VAR_11)
                VAR_11 = 0;
        }
    }

    FUNC_0(VAR_8);

    return VAR_9;
}
