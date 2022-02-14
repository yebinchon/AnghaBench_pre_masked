
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int GpStatus ;
typedef int GpRectF ;
typedef int GpRect ;
typedef int GpGraphics ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
    GpGraphics* VAR_3 = ((void*)0);
    GpRectF VAR_4;
    GpRect VAR_5;
    HDC VAR_6 = FUNC_4( VAR_2 );
    GpStatus VAR_7;

    VAR_7 = FUNC_0(VAR_6, &VAR_3);
    FUNC_6(VAR_1, VAR_7);
    FUNC_7(VAR_3 != ((void*)0), "Expected graphics to be initialized\n");


    VAR_7 = FUNC_2(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_7);

    VAR_7 = FUNC_2(((void*)0), &VAR_4);
    FUNC_6(VAR_0, VAR_7);

    VAR_7 = FUNC_3(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_7);

    VAR_7 = FUNC_3(((void*)0), &VAR_5);
    FUNC_6(VAR_0, VAR_7);

    FUNC_1(VAR_3);
    FUNC_5(VAR_2, VAR_6);

    FUNC_8();
    FUNC_9();
}
