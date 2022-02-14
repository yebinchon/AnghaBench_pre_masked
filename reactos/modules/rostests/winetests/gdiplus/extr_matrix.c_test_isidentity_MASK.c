
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpMatrix ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (double,double,double,double,double,double,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,double,double,double,double,double,double) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpMatrix *VAR_4;
    GpStatus VAR_5;
    BOOL VAR_6;

    VAR_5 = FUNC_2(((void*)0), ((void*)0));
    FUNC_4(VAR_1, VAR_5);

    VAR_5 = FUNC_2(((void*)0), &VAR_6);
    FUNC_4(VAR_1, VAR_5);

    VAR_5 = FUNC_0(1.0, 0.0, 0.0, 1.0, 0.0, 0.0, &VAR_4);
    FUNC_4(VAR_2, VAR_5);

    VAR_5 = FUNC_2(VAR_4, ((void*)0));
    FUNC_4(VAR_1, VAR_5);

    VAR_6 = VAR_0;
    VAR_5 = FUNC_2(VAR_4, &VAR_6);
    FUNC_4(VAR_2, VAR_5);
    FUNC_5(!!VAR_6, "got %d\n", VAR_6);

    VAR_5 = FUNC_3(VAR_4, 1.0, 0.0, 0.0, 1.0, 0.1, 0.0);
    FUNC_4(VAR_2, VAR_5);

    VAR_6 = VAR_3;
    VAR_5 = FUNC_2(VAR_4, &VAR_6);
    FUNC_4(VAR_2, VAR_5);
    FUNC_5(!VAR_6, "got %d\n", VAR_6);

    FUNC_1(VAR_4);
}
