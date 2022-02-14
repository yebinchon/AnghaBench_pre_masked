
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int index_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

int
FUNC_6(int VAR_2, char *VAR_3[])
{
    int VAR_4;
    index_t *VAR_5;
    if (VAR_2 < 2) {
        return 1;
    }

    if ((VAR_4 = FUNC_4(VAR_3[1], VAR_0)) == -1) {
        FUNC_2(VAR_1, "Error: Target %s not found\n", VAR_3[1]);
        return -1;
    }

    if (!(VAR_5 = FUNC_3(VAR_4))) {
        FUNC_2(VAR_1, "JP2 file broken\n");
        return -1;
    }

    FUNC_5(VAR_5);
    FUNC_1(&VAR_5);
    FUNC_0(VAR_4);

    return 0;
}
