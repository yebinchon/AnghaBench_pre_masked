
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpHatchStyle ;
typedef int GpHatch ;
typedef int GpBrush ;


 int FUNC_0 (int ,int,int,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_3;
    GpHatch *VAR_4;
    GpHatchStyle VAR_5;

    FUNC_0(VAR_0, 11, 12, &VAR_4);

    VAR_3 = FUNC_2(((void*)0), &VAR_5);
    FUNC_3(VAR_1, VAR_3);

    VAR_3 = FUNC_2(VAR_4, ((void*)0));
    FUNC_3(VAR_1, VAR_3);

    VAR_3 = FUNC_2(VAR_4, &VAR_5);
    FUNC_3(VAR_2, VAR_3);
    FUNC_3(VAR_0, VAR_5);

    FUNC_1((GpBrush *)VAR_4);
}
