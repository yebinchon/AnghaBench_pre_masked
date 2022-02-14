
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int MaxCharSize; scalar_t__* DefaultChar; } ;
typedef int FILE ;
typedef TYPE_1__ CPINFOEXA ;
typedef scalar_t__ CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int,int,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static BOOL FUNC_5(FILE *VAR_2, CPINFOEXA *VAR_3, WCHAR *VAR_4)
{
    void *VAR_5;
    WCHAR *VAR_6;
    CHAR *VAR_7;
    int VAR_8;
    BOOL VAR_9 = VAR_1;

    VAR_5 = FUNC_2(VAR_3->MaxCharSize * 65536);
    if(!VAR_5) {
        FUNC_4("Not enough memory for Unicode to Codepage table\n");
        return VAR_0;
    }

    if(VAR_3->MaxCharSize == 2) {
        VAR_6 = (WCHAR *)VAR_5;
        for(VAR_8 = 0; VAR_8 < 65536; VAR_8++)
            VAR_6[VAR_8] = *(WCHAR *)VAR_3->DefaultChar;

        for(VAR_8 = 0; VAR_8 < 65536; VAR_8++)
            if (VAR_4[VAR_8] != '?')
                VAR_6[VAR_4[VAR_8]] = (WCHAR)VAR_8;
    }
    else {
        VAR_7 = (CHAR *)VAR_5;
        for(VAR_8 = 0; VAR_8 < 65536; VAR_8++)
            VAR_7[VAR_8] = VAR_3->DefaultChar[0];

        for(VAR_8 = 0; VAR_8 < 256; VAR_8++)
            if (VAR_4[VAR_8] != '?')
                VAR_7[VAR_4[VAR_8]] = (CHAR)VAR_8;
    }

    FUNC_3(VAR_5, VAR_3);

    if(FUNC_1(VAR_5, 1, VAR_3->MaxCharSize * 65536, VAR_2) != VAR_3->MaxCharSize * 65536)
        VAR_9 = VAR_0;

    FUNC_0(VAR_5);

    return VAR_9;
}
