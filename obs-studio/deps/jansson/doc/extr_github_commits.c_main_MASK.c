
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int line; char* text; } ;
typedef TYPE_1__ json_error_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int ,TYPE_1__*) ;
 int * FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*,char*,char*,char const*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*,int,char*,char*,char*) ;
 int VAR_2 ;

int FUNC_15(int VAR_3, char *VAR_4[])
{
    size_t VAR_5;
    char *VAR_6;
    char VAR_7[VAR_1];

    json_t *VAR_8;
    json_error_t VAR_9;

    if(VAR_3 != 3)
    {
        FUNC_0(VAR_2, "usage: %s USER REPOSITORY\n\n", VAR_4[0]);
        FUNC_0(VAR_2, "List commits at USER's REPOSITORY.\n\n");
        return 2;
    }

    FUNC_14(VAR_7, VAR_1, VAR_0, VAR_4[1], VAR_4[2]);

    VAR_6 = FUNC_13(VAR_7);
    if(!VAR_6)
        return 1;

    VAR_8 = FUNC_8(VAR_6, 0, &VAR_9);
    FUNC_1(VAR_6);

    if(!VAR_8)
    {
        FUNC_0(VAR_2, "error: on line %d: %s\n", VAR_9.line, VAR_9.text);
        return 1;
    }

    if(!FUNC_5(VAR_8))
    {
        FUNC_0(VAR_2, "error: root is not an array\n");
        FUNC_4(VAR_8);
        return 1;
    }

    for(VAR_5 = 0; VAR_5 < FUNC_3(VAR_8); VAR_5++)
    {
        json_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;
        const char *VAR_14;

        VAR_10 = FUNC_2(VAR_8, VAR_5);
        if(!FUNC_6(VAR_10))
        {
            FUNC_0(VAR_2, "error: commit data %d is not an object\n", (int)(VAR_5 + 1));
            FUNC_4(VAR_8);
            return 1;
        }

        VAR_11 = FUNC_9(VAR_10, "sha");
        if(!FUNC_7(VAR_11))
        {
            FUNC_0(VAR_2, "error: commit %d: sha is not a string\n", (int)(VAR_5 + 1));
            return 1;
        }

        VAR_12 = FUNC_9(VAR_10, "commit");
        if(!FUNC_6(VAR_12))
        {
            FUNC_0(VAR_2, "error: commit %d: commit is not an object\n", (int)(VAR_5 + 1));
            FUNC_4(VAR_8);
            return 1;
        }

        VAR_13 = FUNC_9(VAR_12, "message");
        if(!FUNC_7(VAR_13))
        {
            FUNC_0(VAR_2, "error: commit %d: message is not a string\n", (int)(VAR_5 + 1));
            FUNC_4(VAR_8);
            return 1;
        }

        VAR_14 = FUNC_10(VAR_13);
        FUNC_12("%.8s %.*s\n",
               FUNC_10(VAR_11),
               FUNC_11(VAR_14),
               VAR_14);
    }

    FUNC_4(VAR_8);
    return 0;
}
