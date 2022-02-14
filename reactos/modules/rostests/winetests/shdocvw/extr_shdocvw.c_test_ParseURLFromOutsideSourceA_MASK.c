
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int len; int newurl; int url; } ;
typedef int DWORD ;
typedef char CHAR ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,int,int,int,...) ;
 int FUNC_4 (int ,char*,int*,int*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    CHAR VAR_2[VAR_0];
    DWORD VAR_3;
    DWORD VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;
    int VAR_7;

    if (!&FUNC_4) {
        FUNC_5("ParseURLFromOutsideSourceA not found\n");
        return;
    }

    for(VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = sizeof(VAR_2);
        VAR_3 = 0;

        VAR_6 = FUNC_4(VAR_1[VAR_7].url, VAR_2, &VAR_5, &VAR_3);

        FUNC_3( VAR_6 == (VAR_1[VAR_7].len+1) && VAR_5 == VAR_1[VAR_7].len &&
            !FUNC_1(VAR_2, VAR_1[VAR_7].newurl),
            "#%d: got %d and %d with '%s' (expected %d and %d with '%s')\n",
            VAR_7, VAR_6, VAR_5, VAR_2, VAR_1[VAR_7].len+1, VAR_1[VAR_7].len, VAR_1[VAR_7].newurl);



        if (VAR_7 > 4) continue;

        VAR_4 = VAR_5;

        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = VAR_4 + 1;
        VAR_3 = 0;
        VAR_6 = FUNC_4(VAR_1[VAR_7].url, VAR_2, &VAR_5, &VAR_3);
        FUNC_3( VAR_6 != 0 && VAR_5 == VAR_1[VAR_7].len &&
            !FUNC_1(VAR_2, VAR_1[VAR_7].newurl),
            "#%d (+1): got %d and %d with '%s' (expected '!=0' and %d with '%s')\n",
            VAR_7, VAR_6, VAR_5, VAR_2, VAR_1[VAR_7].len, VAR_1[VAR_7].newurl);

        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = VAR_4;
        VAR_3 = 0;
        VAR_6 = FUNC_4(VAR_1[VAR_7].url, VAR_2, &VAR_5, &VAR_3);

        FUNC_3( VAR_6 == 0 && VAR_5 == VAR_1[VAR_7].len + 1,
            "#%d (==): got %d and %d (expected '0' and %d)\n",
            VAR_7, VAR_6, VAR_5, VAR_1[VAR_7].len + 1);

        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = VAR_4-1;
        VAR_3 = 0;
        VAR_6 = FUNC_4(VAR_1[VAR_7].url, VAR_2, &VAR_5, &VAR_3);

        FUNC_3( VAR_6 == 0 && (VAR_5 == VAR_1[VAR_7].len || VAR_5 == VAR_1[VAR_7].len + 1),
            "#%d (-1): got %d and %d (expected '0' and %d or %d)\n",
            VAR_7, VAR_6, VAR_5, VAR_1[VAR_7].len, VAR_1[VAR_7].len + 1);

        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = VAR_4+1;
        VAR_3 = 0;
        VAR_6 = FUNC_4(VAR_1[VAR_7].url, ((void*)0), &VAR_5, &VAR_3);

        FUNC_3( VAR_6 == 0 && VAR_5 == VAR_1[VAR_7].len,
            "#%d (buffer): got %d and %d (expected '0' and %d)\n",
            VAR_7, VAR_6, VAR_5, VAR_1[VAR_7].len);

        if (0) {

            FUNC_4(VAR_1[VAR_7].url, VAR_2, ((void*)0), &VAR_3);
        }

        FUNC_2(VAR_2, '#', sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = '\0';
        VAR_5 = VAR_4+1;
        VAR_3 = 0;
        VAR_6 = FUNC_4(VAR_1[VAR_7].url, VAR_2, &VAR_5, ((void*)0));
        FUNC_3( VAR_6 != 0 && VAR_5 == VAR_1[VAR_7].len &&
            !FUNC_1(VAR_2, VAR_1[VAR_7].newurl),
            "#%d (unknown): got %d and %d with '%s' (expected '!=0' and %d with '%s')\n",
            VAR_7, VAR_6, VAR_5, VAR_2, VAR_1[VAR_7].len, VAR_1[VAR_7].newurl);
    }
}
