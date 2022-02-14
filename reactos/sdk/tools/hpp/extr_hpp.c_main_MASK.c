
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(int VAR_0, char* VAR_1[])
{
    char *VAR_2, *VAR_3;
    FILE* VAR_4;
    int VAR_5;

    if (VAR_0 != 3)
    {
        FUNC_2("Usage: hpp <inputfile> <outputfile>\n");
        FUNC_3(1);
    }

    VAR_2 = FUNC_1(VAR_1[1]);
    VAR_3 = FUNC_1(VAR_1[2]);

    VAR_4 = FUNC_5(VAR_3, "wb");
    if (VAR_4 == ((void*)0))
    {
        FUNC_2("Cannot open output file %s", VAR_3);
        FUNC_3(1);
    }

    VAR_5 = FUNC_0(VAR_2, VAR_4);

    FUNC_4(VAR_4);
    FUNC_6(VAR_2);
    FUNC_6(VAR_3);

    return VAR_5;
}
