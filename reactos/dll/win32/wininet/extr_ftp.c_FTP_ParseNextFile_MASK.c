
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wMinute; int wHour; int wDay; int wMonth; int wYear; scalar_t__ wSecond; } ;
struct TYPE_9__ {char* nSize; int permissions; int * lpszName; void* bIsDirectory; TYPE_1__ tmLastModified; } ;
struct TYPE_8__ {int wYear; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__* LPFILEPROPERTIESW ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef int DWORD ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 void* VAR_1 ;
 void* FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char) ;
 int FUNC_13 (char*,char*,int*,int*,...) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*,char const*) ;
 char* VAR_2 ;

__attribute__((used)) static BOOL FUNC_18(INT VAR_3, LPCWSTR VAR_4, LPFILEPROPERTIESW VAR_5)
{
    static const char VAR_6[] = " \t";
    DWORD VAR_7;
    char *VAR_8;
    char *VAR_9;
    char *VAR_10;
    BOOL VAR_11 = VAR_0;
    int VAR_12;

    VAR_5->lpszName = ((void*)0);
    do {
        if(!(VAR_8 = FUNC_1(VAR_3, &VAR_7)))
            return VAR_0;

        VAR_9 = FUNC_17(VAR_8, VAR_6);






        if(!FUNC_12(VAR_9[0]) && 10 == FUNC_16(VAR_9)) {
            if(!FUNC_2(VAR_9, VAR_5))
                VAR_5->bIsDirectory = VAR_0;
            for(VAR_12=0; VAR_12<=3; VAR_12++) {
              if(!(VAR_9 = FUNC_17(((void*)0), VAR_6)))
                  break;
            }
            if(!VAR_9) continue;
            if(VAR_5->bIsDirectory) {
                FUNC_6("Is directory\n");
                VAR_5->nSize = 0;
            }
            else {
                FUNC_6("Size: %s\n", VAR_9);
                VAR_5->nSize = FUNC_8(VAR_9);
            }

            VAR_5->tmLastModified.wSecond = 0;
            VAR_5->tmLastModified.wMinute = 0;
            VAR_5->tmLastModified.wHour = 0;
            VAR_5->tmLastModified.wDay = 0;
            VAR_5->tmLastModified.wMonth = 0;
            VAR_5->tmLastModified.wYear = 0;


            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            if(FUNC_16(VAR_9) >= 3) {
                VAR_9[3] = 0;
                if((VAR_10 = FUNC_5(VAR_2, VAR_9)))
                    VAR_5->tmLastModified.wMonth = ((VAR_10 - VAR_2) / 3)+1;
            }

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            VAR_5->tmLastModified.wDay = FUNC_7(VAR_9);

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            if((VAR_10 = FUNC_15(VAR_9, ':'))) {
                SYSTEMTIME VAR_13;
                *VAR_10 = 0;
                VAR_10++;
                VAR_5->tmLastModified.wMinute = FUNC_7(VAR_10);
                VAR_5->tmLastModified.wHour = FUNC_7(VAR_9);
                FUNC_3( &VAR_13 );
                VAR_5->tmLastModified.wYear = VAR_13.wYear;
            }
            else {
                VAR_5->tmLastModified.wYear = FUNC_7(VAR_9);
                VAR_5->tmLastModified.wHour = 12;
            }
            FUNC_6("Mod time: %02d:%02d:%02d  %04d/%02d/%02d\n",
                  VAR_5->tmLastModified.wHour, VAR_5->tmLastModified.wMinute, VAR_5->tmLastModified.wSecond,
                  VAR_5->tmLastModified.wYear, VAR_5->tmLastModified.wMonth, VAR_5->tmLastModified.wDay);

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            VAR_5->lpszName = FUNC_11(VAR_9);
            FUNC_6("File: %s\n", FUNC_9(VAR_5->lpszName));
        }





        else if(FUNC_12(VAR_9[0]) && 8 == FUNC_16(VAR_9)) {
            int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
            VAR_5->permissions = 0xFFFF;

            FUNC_13(VAR_9, "%d-%d-%d", &VAR_14, &VAR_15, &VAR_16);
            VAR_5->tmLastModified.wDay = VAR_15;
            VAR_5->tmLastModified.wMonth = VAR_14;
            VAR_5->tmLastModified.wYear = VAR_16;


            if (VAR_5->tmLastModified.wYear < 70) VAR_5->tmLastModified.wYear += 2000;

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            FUNC_13(VAR_9, "%d:%d", &VAR_17, &VAR_18);
            VAR_5->tmLastModified.wHour = VAR_17;
            VAR_5->tmLastModified.wMinute = VAR_18;
            if((VAR_9[5] == 'P') && (VAR_9[6] == 'M')) {
                VAR_5->tmLastModified.wHour += 12;
            }
            VAR_5->tmLastModified.wSecond = 0;

            FUNC_6("Mod time: %02d:%02d:%02d  %04d/%02d/%02d\n",
                  VAR_5->tmLastModified.wHour, VAR_5->tmLastModified.wMinute, VAR_5->tmLastModified.wSecond,
                  VAR_5->tmLastModified.wYear, VAR_5->tmLastModified.wMonth, VAR_5->tmLastModified.wDay);

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            if(!FUNC_14(VAR_9, "<DIR>")) {
                VAR_5->bIsDirectory = VAR_1;
                VAR_5->nSize = 0;
                FUNC_6("Is directory\n");
            }
            else {
                VAR_5->bIsDirectory = VAR_0;
                VAR_5->nSize = FUNC_8(VAR_9);
                FUNC_6("Size: %d\n", VAR_5->nSize);
            }

            VAR_9 = FUNC_17(((void*)0), VAR_6);
            if(!VAR_9) continue;
            VAR_5->lpszName = FUNC_11(VAR_9);
            FUNC_6("Name: %s\n", FUNC_9(VAR_5->lpszName));
        }

        else if(VAR_9[0] == '+') {
            FUNC_0("EPLF Format not implemented\n");
        }

        if(VAR_5->lpszName) {
            if((VAR_4 == ((void*)0)) ||
        (FUNC_4(VAR_5->lpszName, VAR_4))) {
                VAR_11 = VAR_1;
                FUNC_6("Matched: %s\n", FUNC_9(VAR_5->lpszName));
            }
            else {
                FUNC_10(VAR_5->lpszName);
                VAR_5->lpszName = ((void*)0);
            }
        }
    } while(!VAR_11);
    return VAR_1;
}
