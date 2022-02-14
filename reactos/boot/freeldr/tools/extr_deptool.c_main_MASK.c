
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_7, char *VAR_8[])
{
    FILE* VAR_9;
    int VAR_10;
    char* VAR_11;
    char* VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15 = 0;


    if (VAR_7 < 2)
    {
        FUNC_10("Usage: deptool srcfile.d\n");
        return VAR_1;
    }


    VAR_9 = FUNC_2(VAR_8[1], "r+t");
    if (VAR_9 == ((void*)0))
    {
        FUNC_10("deptool: No such dependency file: %s\n", VAR_8[1]);
        return VAR_0;
    }


    FUNC_5(VAR_9, 0, VAR_6);
    VAR_10 = FUNC_6(VAR_9);
    FUNC_11(VAR_9);


    VAR_11 = (char *)FUNC_8(VAR_10);
    VAR_12 = (char *)FUNC_8(VAR_10 * 3);
    if (!VAR_11 || !VAR_12)
    {
        FUNC_10("deptool: Out of memory!\n");
        if (VAR_11 != ((void*)0))
            FUNC_4(VAR_11);
        if (VAR_12 != ((void*)0))
            FUNC_4(VAR_12);
        FUNC_0(VAR_9);
        return VAR_2;
    }
    FUNC_9(VAR_11, 0, VAR_10);
    FUNC_9(VAR_12, 0, VAR_10 * 3);


    FUNC_3(VAR_11, 1, VAR_10, VAR_9);
    if (FUNC_1(VAR_9))
    {
        FUNC_10("deptool: Dependency file read error.\n");
        FUNC_4(VAR_11);
        FUNC_4(VAR_12);
        FUNC_0(VAR_9);
        return VAR_3;
    }



    for (VAR_13=0,VAR_14=0; VAR_11[VAR_13]; VAR_13++,VAR_14++)
    {


        if (VAR_11[VAR_13] == ':')
        {
            VAR_12[VAR_14] = ' ';
            VAR_14++;
            FUNC_12(&VAR_12[VAR_14], VAR_8[1]);
            VAR_14 += FUNC_13(VAR_8[1]);
            VAR_12[VAR_14] = ' ';
            VAR_14++;
            FUNC_12(VAR_12, &VAR_11[VAR_13]);
            VAR_14 += 2;
            VAR_15 = VAR_13 + 2;
            break;
        }
        else
        {
            VAR_12[VAR_14] = VAR_11[VAR_13];
        }
    }



    FUNC_12(VAR_12, "\n\n");
    VAR_13 = VAR_15;
    VAR_14 = FUNC_13(VAR_12);
    for (; VAR_11[VAR_13]; VAR_13++,VAR_14++)
    {

        if (VAR_11[VAR_13] == '\\')
        {
            VAR_14--;
            continue;
        }


        if (VAR_11[VAR_13] == '\n')
        {
            VAR_12[VAR_14] = ':';
            VAR_14++;
        }

        VAR_12[VAR_14] = VAR_11[VAR_13];
    }


    FUNC_11(VAR_9);
    FUNC_7(VAR_12, 1, FUNC_13(VAR_12), VAR_9);
    if (FUNC_1(VAR_9))
    {
        FUNC_10("deptool: Dependency file write error.\n");
        FUNC_0(VAR_9);
        FUNC_4(VAR_11);
        FUNC_4(VAR_12);
        return VAR_5;
    }

    FUNC_0(VAR_9);
    FUNC_4(VAR_11);
    FUNC_4(VAR_12);
    return VAR_4;
}
