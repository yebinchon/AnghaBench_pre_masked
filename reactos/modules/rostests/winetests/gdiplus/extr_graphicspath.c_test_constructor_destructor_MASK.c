
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpPath ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_3;
    GpPath* VAR_4 = ((void*)0);

    VAR_3 = FUNC_0(VAR_0, &VAR_4);
    FUNC_2(VAR_2, VAR_3);
    FUNC_3(VAR_4 != ((void*)0), "Expected path to be initialized\n");

    VAR_3 = FUNC_1(((void*)0));
    FUNC_2(VAR_1, VAR_3);

    VAR_3 = FUNC_1(VAR_4);
    FUNC_2(VAR_2, VAR_3);
}
