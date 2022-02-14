
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;
typedef int GpStatus ;
typedef int GpPathGradient ;
typedef int GpBrush ;


 int FUNC_0 (int ,int,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double*,double*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (double,double) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
    GpStatus VAR_4;
    GpPathGradient *VAR_5;
    REAL VAR_6[4];
    REAL VAR_7[4];

    VAR_4 = FUNC_0(VAR_3, 2, VAR_2, &VAR_5);
    FUNC_3(VAR_1, VAR_4);


    VAR_4 = FUNC_2(((void*)0), ((void*)0), ((void*)0), -1);
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(VAR_5,((void*)0), ((void*)0), -1);
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(((void*)0), VAR_6,((void*)0), -1);
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(((void*)0), ((void*)0), VAR_7, -1);
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(((void*)0), ((void*)0), ((void*)0), 1);
    FUNC_3(VAR_0, VAR_4);

    VAR_6[0] = (REAL)0xdeadbeef;
    VAR_7[0] = (REAL)0xdeadbeef;
    VAR_4 = FUNC_2(VAR_5, VAR_6, VAR_7, 1);
    FUNC_3(VAR_1, VAR_4);
    FUNC_4(1.0, VAR_6[0]);
    FUNC_4((REAL)0xdeadbeef, VAR_7[0]);

    FUNC_1((GpBrush*) VAR_5);
}
