
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef int GpMatrix ;
typedef int GpGraphics ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (double,double,double,double,double,double,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(void)
{
    GpStatus VAR_4;
    GpRegion *VAR_5;
    GpGraphics *VAR_6 = ((void*)0);
    GpMatrix *VAR_7;
    HDC VAR_8 = FUNC_8(0);
    BOOL VAR_9;

    VAR_4 = FUNC_0(VAR_8, &VAR_6);
    FUNC_10(VAR_2, VAR_4);
    VAR_4 = FUNC_2(&VAR_5);
    FUNC_10(VAR_2, VAR_4);

    FUNC_1(3.0, 0.0, 0.0, 1.0, 20.0, 30.0, &VAR_7);


    VAR_4 = FUNC_6(((void*)0), ((void*)0), ((void*)0));
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_6(VAR_5, ((void*)0), ((void*)0));
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_6(((void*)0), VAR_6, ((void*)0));
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_6(((void*)0), ((void*)0), &VAR_9);
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_6(VAR_5, ((void*)0), &VAR_9);
    FUNC_10(VAR_1, VAR_4);

    VAR_9 = VAR_0;
    VAR_4 = FUNC_6(VAR_5, VAR_6, &VAR_9);
    FUNC_10(VAR_2, VAR_4);
    FUNC_10(VAR_3, VAR_9);


    VAR_4 = FUNC_7(VAR_6, VAR_7);
    FUNC_10(VAR_2, VAR_4);

    VAR_9 = VAR_0;
    VAR_4 = FUNC_6(VAR_5, VAR_6, &VAR_9);
    FUNC_10(VAR_2, VAR_4);
    FUNC_10(VAR_3, VAR_9);

    FUNC_4(VAR_7);
    FUNC_5(VAR_5);
    FUNC_3(VAR_6);
    FUNC_9(0, VAR_8);
}
