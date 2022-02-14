
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INT ;
typedef int GpStatus ;
typedef int GpFontFamily ;
typedef int GpFontCollection ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,int,int **,scalar_t__*) ;
 int FUNC_3 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    GpFontFamily *VAR_2, *VAR_3;
    GpFontCollection *VAR_4;
    INT VAR_5, VAR_6;
    GpStatus VAR_7;

    VAR_7 = FUNC_3(&VAR_4);
    FUNC_4(VAR_7 == VAR_1, "Failed to get system collection, status %d.\n", VAR_7);

    VAR_6 = 0;
    VAR_7 = FUNC_1(VAR_4, &VAR_6);
    FUNC_4(VAR_7 == VAR_1, "Failed to get family count, status %d.\n", VAR_7);
    FUNC_4(VAR_6 > 0, "Unexpected empty collection.\n");

    VAR_7 = FUNC_2(((void*)0), 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "Unexpected status %d.\n", VAR_7);

    VAR_5 = 123;
    VAR_7 = FUNC_2(((void*)0), 0, ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_0, "Unexpected status %d.\n", VAR_7);
    FUNC_4(VAR_5 == 123, "Unexpected list count %d.\n", VAR_5);

    VAR_7 = FUNC_2(VAR_4, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "Unexpected status %d.\n", VAR_7);

    VAR_5 = 123;
    VAR_7 = FUNC_2(VAR_4, 0, ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_0, "Unexpected status %d.\n", VAR_7);
    FUNC_4(VAR_5 == 123, "Unexpected list count %d.\n", VAR_5);

    VAR_5 = 123;
    VAR_7 = FUNC_2(VAR_4, 1, ((void*)0), &VAR_5);
    FUNC_4(VAR_7 == VAR_0, "Unexpected status %d.\n", VAR_7);
    FUNC_4(VAR_5 == 123, "Unexpected list count %d.\n", VAR_5);

    VAR_2 = ((void*)0);
    VAR_5 = 0;
    VAR_7 = FUNC_2(VAR_4, 1, &VAR_2, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "Failed to get family list, status %d.\n", VAR_7);
    FUNC_4(VAR_5 == 1, "Unexpected list count %d.\n", VAR_5);
    FUNC_4(VAR_2 != ((void*)0), "Expected family instance.\n");

    VAR_2 = ((void*)0);
    VAR_5 = 0;
    VAR_7 = FUNC_2(VAR_4, 1, &VAR_3, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "Failed to get family list, status %d.\n", VAR_7);
    FUNC_4(VAR_5 == 1, "Unexpected list count %d.\n", VAR_5);
    FUNC_4(VAR_3 != VAR_2, "Unexpected family instance.\n");

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
}
