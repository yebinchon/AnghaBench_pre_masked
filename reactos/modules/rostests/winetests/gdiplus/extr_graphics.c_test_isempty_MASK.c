
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef int GpGraphics ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(void)
{
    GpStatus VAR_5;
    GpGraphics *VAR_6 = ((void*)0);
    HDC VAR_7 = FUNC_5( VAR_4 );
    GpRegion *VAR_8;
    BOOL VAR_9;

    VAR_5 = FUNC_0(VAR_7, &VAR_6);
    FUNC_7(VAR_2, VAR_5);

    VAR_5 = FUNC_1(&VAR_8);
    FUNC_7(VAR_2, VAR_5);


    VAR_5 = FUNC_4(((void*)0), ((void*)0));
    FUNC_7(VAR_1, VAR_5);
    VAR_5 = FUNC_4(VAR_6, ((void*)0));
    FUNC_7(VAR_1, VAR_5);
    VAR_5 = FUNC_4(((void*)0), &VAR_9);
    FUNC_7(VAR_1, VAR_5);


    VAR_9 = VAR_3;
    VAR_5 = FUNC_4(VAR_6, &VAR_9);
    FUNC_7(VAR_2, VAR_5);
    FUNC_7(VAR_0, VAR_9);

    FUNC_3(VAR_8);

    FUNC_2(VAR_6);
    FUNC_6(VAR_4, VAR_7);
}
