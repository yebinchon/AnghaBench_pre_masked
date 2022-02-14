
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int GpStatus ;
typedef int GpFontCollection ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    GpFontCollection *VAR_2;
    GpStatus VAR_3;
    INT VAR_4;

    VAR_3 = FUNC_0(((void*)0), ((void*)0));
    FUNC_2(VAR_3 == VAR_0, "Unexpected status %d.\n", VAR_3);

    VAR_4 = 123;
    VAR_3 = FUNC_0(((void*)0), &VAR_4);
    FUNC_2(VAR_3 == VAR_0, "Unexpected status %d.\n", VAR_3);
    FUNC_2(VAR_4 == 123, "Unexpected family count %d.\n", VAR_4);

    VAR_3 = FUNC_1(&VAR_2);
    FUNC_2(VAR_3 == VAR_1, "Failed to get system collection, status %d.\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, ((void*)0));
    FUNC_2(VAR_3 == VAR_0, "Unexpected status %d.\n", VAR_3);
}
