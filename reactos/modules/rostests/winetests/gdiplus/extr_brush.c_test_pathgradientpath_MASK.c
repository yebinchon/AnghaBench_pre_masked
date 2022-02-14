
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpPathGradient ;
typedef int GpPath ;
typedef int GpBrush ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int ,int,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_5;
    GpPath *VAR_6=((void*)0);
    GpPathGradient *VAR_7=((void*)0);

    VAR_5 = FUNC_1(VAR_4, 2, VAR_3, &VAR_7);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_4(VAR_7, ((void*)0));
    FUNC_5(VAR_1, VAR_5);

    VAR_5 = FUNC_0(VAR_0, &VAR_6);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_4(((void*)0), VAR_6);
    FUNC_5(VAR_1, VAR_5);

    VAR_5 = FUNC_4(VAR_7, VAR_6);
    FUNC_5(VAR_1, VAR_5);

    VAR_5 = FUNC_3(VAR_6);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_2((GpBrush*)VAR_7);
    FUNC_5(VAR_2, VAR_5);
}
