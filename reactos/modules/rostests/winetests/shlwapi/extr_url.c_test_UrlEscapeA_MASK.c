
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* url; char* expectret; char* expecturl; int flags; } ;
typedef char* HRESULT ;
typedef int DWORD ;
typedef char CHAR ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 char* FUNC_3 (char*,char*,int*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_7 = 0;
    HRESULT VAR_8;
    unsigned int VAR_9;
    char VAR_10[] = "";

    if (!&FUNC_3) {
        FUNC_5("UrlEscapeA not found\n");
        return;
    }

    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", ((void*)0), &VAR_7, VAR_6);
    FUNC_2(VAR_8 == VAR_0, "got %x, expected %x\n", VAR_8, VAR_0);
    FUNC_2(VAR_7 == 0, "got %d, expected %d\n", VAR_7, 0);

    VAR_7 = 0;
    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", VAR_10, &VAR_7, VAR_6);
    FUNC_2(VAR_8 == VAR_0, "got %x, expected %x\n", VAR_8, VAR_0);
    FUNC_2(VAR_7 == 0, "got %d, expected %d\n", VAR_7, 0);

    VAR_7 = 1;
    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", ((void*)0), &VAR_7, VAR_6);
    FUNC_2(VAR_8 == VAR_0, "got %x, expected %x\n", VAR_8, VAR_0);
    FUNC_2(VAR_7 == 1, "got %d, expected %d\n", VAR_7, 1);

    VAR_7 = 1;
    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", VAR_10, ((void*)0), VAR_6);
    FUNC_2(VAR_8 == VAR_0, "got %x, expected %x\n", VAR_8, VAR_0);
    FUNC_2(VAR_7 == 1, "got %d, expected %d\n", VAR_7, 1);

    VAR_7 = 1;
    VAR_10[0] = 127;
    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", VAR_10, &VAR_7, VAR_6);
    FUNC_2(VAR_8 == VAR_2, "got %x, expected %x\n", VAR_8, VAR_2);
    FUNC_2(VAR_7 == 34, "got %d, expected %d\n", VAR_7, 34);
    FUNC_2(VAR_10[0] == 127, "String has changed, empty_string[0] = %d\n", VAR_10[0]);

    VAR_7 = 1;
    VAR_10[0] = 127;
    VAR_8 = FUNC_3("/woningplan/woonkamer basis.swf", VAR_10, &VAR_7, VAR_5);
    FUNC_2(VAR_8 == VAR_1 || FUNC_1(VAR_8 == VAR_2),
        "got %x, expected %x\n", VAR_8, VAR_1);
    FUNC_2(VAR_7 == 1 || FUNC_1(VAR_7 == 34),
        "got %d, expected %d\n", VAR_7, 1);
    FUNC_2(VAR_10[0] == 127, "String has changed, empty_string[0] = %d\n", VAR_10[0]);

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
        CHAR VAR_11[VAR_3];

        VAR_7 = VAR_3;
        VAR_8 = FUNC_3(VAR_4[VAR_9].url, VAR_11, &VAR_7, VAR_4[VAR_9].flags);
        FUNC_2(VAR_8 == VAR_4[VAR_9].expectret, "UrlEscapeA returned 0x%08x instead of 0x%08x for \"%s\"\n",
            VAR_8, VAR_4[VAR_9].expectret, VAR_4[VAR_9].url);
        FUNC_2(!FUNC_4(VAR_11, VAR_4[VAR_9].expecturl), "Expected \"%s\", but got \"%s\" for \"%s\"\n",
            VAR_4[VAR_9].expecturl, VAR_11, VAR_4[VAR_9].url);
    }
}
