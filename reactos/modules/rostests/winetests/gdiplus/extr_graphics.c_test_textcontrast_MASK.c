
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_3;
    HDC VAR_4 = FUNC_3( VAR_2 );
    GpGraphics *VAR_5;
    UINT VAR_6;

    VAR_3 = FUNC_2(((void*)0), ((void*)0));
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_0(VAR_4, &VAR_5);
    FUNC_5(VAR_1, VAR_3);

    VAR_3 = FUNC_2(VAR_5, ((void*)0));
    FUNC_5(VAR_0, VAR_3);
    VAR_3 = FUNC_2(VAR_5, &VAR_6);
    FUNC_5(VAR_1, VAR_3);
    FUNC_5(4, VAR_6);

    FUNC_1(VAR_5);
    FUNC_4(VAR_2, VAR_4);
}
