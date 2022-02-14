
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_13(int VAR_7, char* VAR_8[])
{
    TIFF *VAR_9, *VAR_10;

    FUNC_10(&VAR_2);

    FUNC_3(((void*)0), "tificc");

    FUNC_1(VAR_7, VAR_8);

    if ((VAR_7 - VAR_6) != 2) {

        FUNC_2(0);
    }


    FUNC_7(VAR_0);
    FUNC_8(VAR_1);

    VAR_9 = FUNC_5(VAR_8[VAR_6], "r");
    if (VAR_9 == ((void*)0)) FUNC_0("Unable to open '%s'", VAR_8[VAR_6]);

    VAR_10 = FUNC_5(VAR_8[VAR_6+1], "w");

    if (VAR_10 == ((void*)0)) {

        FUNC_4(VAR_9);
        FUNC_0("Unable to write '%s'", VAR_8[VAR_6+1]);
    }

    do {

        FUNC_9(VAR_9, VAR_10, VAR_4);


    } while (FUNC_6(VAR_9));


    if (VAR_3) { FUNC_12(VAR_5, "\n"); FUNC_11(VAR_5); }

    FUNC_4(VAR_9);
    FUNC_4(VAR_10);

    return 0;
}
