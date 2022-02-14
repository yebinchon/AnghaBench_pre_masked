
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bufferA ;
typedef int WCHAR ;
struct TYPE_2__ {char* url; int len; int newurl; } ;
typedef int DWORD ;
typedef char CHAR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int,char*,int,int,...) ;
 int FUNC_6 (int *,int *,int*,int*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_3[VAR_1];
    WCHAR VAR_4[VAR_1];
    CHAR VAR_5[VAR_1];
    DWORD VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;

    if (!&FUNC_6) {
        FUNC_7("ParseURLFromOutsideSourceW not found\n");
        return;
    }
    FUNC_1(VAR_0, 0, VAR_2[0].url, -1, VAR_3, VAR_1);

    FUNC_4(VAR_5, '#', sizeof(VAR_5)-1);
    VAR_5[sizeof(VAR_5) - 1] = '\0';
    FUNC_1(VAR_0, 0, VAR_5, -1, VAR_4, VAR_1);


    VAR_8 = FUNC_0(VAR_4);
    VAR_7 = 0;

    VAR_9 = FUNC_6(VAR_3, VAR_4, &VAR_8, &VAR_7);
    FUNC_2(VAR_0, 0, VAR_4, -1, VAR_5, sizeof(VAR_5), ((void*)0), ((void*)0));
    FUNC_5( VAR_9 == 1 && VAR_8 == VAR_2[0].len &&
        !FUNC_3(VAR_5, VAR_2[0].newurl),
        "got %d and %d with '%s' (expected 1 and %d with '%s')\n",
        VAR_9, VAR_8, VAR_5, VAR_2[0].len, VAR_2[0].newurl);


    VAR_6 = VAR_8;

    FUNC_4(VAR_5, '#', sizeof(VAR_5)-1);
    VAR_5[sizeof(VAR_5) - 1] = '\0';
    FUNC_1(VAR_0, 0, VAR_5, -1, VAR_4, VAR_1);
    VAR_8 = VAR_6+1;
    VAR_7 = 0;
    VAR_9 = FUNC_6(VAR_3, VAR_4, &VAR_8, &VAR_7);
    FUNC_2(VAR_0, 0, VAR_4, -1, VAR_5, sizeof(VAR_5), ((void*)0), ((void*)0));

    FUNC_5( VAR_9 != 0 && VAR_8 == VAR_2[0].len &&
        !FUNC_3(VAR_5, VAR_2[0].newurl),
        "+1: got %d and %d with '%s' (expected '!=0' and %d with '%s')\n",
        VAR_9, VAR_8, VAR_5, VAR_2[0].len, VAR_2[0].newurl);

    VAR_8 = VAR_6;
    VAR_7 = 0;
    VAR_9 = FUNC_6(VAR_3, VAR_4, &VAR_8, &VAR_7);

    FUNC_5( VAR_9 == 0 && VAR_8 == VAR_2[0].len + 1,
        "==: got %d and %d (expected '0' and %d)\n",
        VAR_9, VAR_8, VAR_2[0].len + 1);

    VAR_8 = VAR_6 - 1;
    VAR_7 = 0;
    VAR_9 = FUNC_6(VAR_3, VAR_4, &VAR_8, &VAR_7);

    FUNC_5( VAR_9 == 0 && (VAR_8 == VAR_2[0].len || VAR_8 == VAR_2[0].len + 1),
        "-1: got %d and %d (expected '0' and %d or %d)\n",
        VAR_9, VAR_8, VAR_2[0].len, VAR_2[0].len + 1);

}
