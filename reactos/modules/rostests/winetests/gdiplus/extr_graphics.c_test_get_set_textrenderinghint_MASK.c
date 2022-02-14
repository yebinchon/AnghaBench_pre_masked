
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TextRenderingHint ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpGraphics *VAR_7;
    HDC VAR_8 = FUNC_4( VAR_6 );
    GpStatus VAR_9;
    TextRenderingHint VAR_10;

    FUNC_7(VAR_8 != ((void*)0), "Expected HDC to be initialized\n");
    VAR_9 = FUNC_0(VAR_8, &VAR_7);
    FUNC_6(VAR_1, VAR_9);
    FUNC_7(VAR_7 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_9 = FUNC_2(((void*)0), &VAR_10);
    FUNC_6(VAR_0, VAR_9);

    VAR_9 = FUNC_2(VAR_7, ((void*)0));
    FUNC_6(VAR_0, VAR_9);

    VAR_9 = FUNC_3(((void*)0), VAR_2);
    FUNC_6(VAR_0, VAR_9);


    VAR_9 = FUNC_3(VAR_7, VAR_4+1);
    FUNC_6(VAR_0, VAR_9);

    VAR_9 = FUNC_2(VAR_7, &VAR_10);
    FUNC_6(VAR_1, VAR_9);
    FUNC_6(VAR_5, VAR_10);

    VAR_9 = FUNC_3(VAR_7, VAR_5);
    FUNC_6(VAR_1, VAR_9);

    VAR_9 = FUNC_2(VAR_7, &VAR_10);
    FUNC_6(VAR_1, VAR_9);
    FUNC_6(VAR_5, VAR_10);

    VAR_9 = FUNC_3(VAR_7, VAR_3);
    FUNC_6(VAR_1, VAR_9);

    VAR_9 = FUNC_2(VAR_7, &VAR_10);
    FUNC_6(VAR_1, VAR_9);
    FUNC_6(VAR_3, VAR_10);

    FUNC_1(VAR_7);

    FUNC_5(VAR_6, VAR_8);
}
