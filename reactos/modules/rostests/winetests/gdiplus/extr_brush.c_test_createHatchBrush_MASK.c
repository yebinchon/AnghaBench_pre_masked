
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HatchStyle ;
typedef int GpStatus ;
typedef int GpHatch ;
typedef int GpBrush ;


 int FUNC_0 (int,int,int,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_5;
    GpHatch *VAR_6;

    VAR_5 = FUNC_0(VAR_2, 1, 2, &VAR_6);
    FUNC_2(VAR_4, VAR_5);
    FUNC_3(VAR_6 != ((void*)0), "Expected the brush to be initialized.\n");

    FUNC_1((GpBrush *)VAR_6);

    VAR_5 = FUNC_0(VAR_1, 1, 2, &VAR_6);
    FUNC_2(VAR_4, VAR_5);
    FUNC_3(VAR_6 != ((void*)0), "Expected the brush to be initialized.\n");

    FUNC_1((GpBrush *)VAR_6);

    VAR_5 = FUNC_0(VAR_0, 1, 2, ((void*)0));
    FUNC_2(VAR_3, VAR_5);

    VAR_5 = FUNC_0((HatchStyle)(VAR_2 - 1), 1, 2, &VAR_6);
    FUNC_2(VAR_3, VAR_5);

    VAR_5 = FUNC_0((HatchStyle)(VAR_1 + 1), 1, 2, &VAR_6);
    FUNC_2(VAR_3, VAR_5);
}
