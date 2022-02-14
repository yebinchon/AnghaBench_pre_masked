
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct font_metrics {double font_size; int descent; int ascent; int line_spacing; int em_height; scalar_t__ lfHeight; int font_height; } ;
typedef scalar_t__ INT ;
typedef int GpStatus ;
typedef int GpFontFamily ;
typedef int GpFont ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,scalar_t__,int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,double*) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(GpFont *VAR_2, struct font_metrics *VAR_3)
{
    INT VAR_4;
    GpFontFamily *VAR_5;
    GpStatus VAR_6;

    VAR_6 = FUNC_7(VAR_2, &VAR_4);
    FUNC_9(VAR_1, VAR_6);

    VAR_6 = FUNC_5(((void*)0), ((void*)0), &VAR_3->font_height);
    FUNC_9(VAR_0, VAR_6);

    VAR_6 = FUNC_5(VAR_2, ((void*)0), ((void*)0));
    FUNC_9(VAR_0, VAR_6);

    VAR_6 = FUNC_5(VAR_2, ((void*)0), &VAR_3->font_height);
    FUNC_9(VAR_1, VAR_6);
    VAR_6 = FUNC_6(VAR_2, &VAR_3->font_size);
    FUNC_9(VAR_1, VAR_6);

    VAR_3->lfHeight = (INT)(VAR_3->font_size * -1.0);

    VAR_6 = FUNC_4(VAR_2, &VAR_5);
    FUNC_9(VAR_1, VAR_6);

    VAR_6 = FUNC_3(VAR_5, VAR_4, &VAR_3->em_height);
    FUNC_9(VAR_1, VAR_6);
    VAR_6 = FUNC_8(VAR_5, VAR_4, &VAR_3->line_spacing);
    FUNC_9(VAR_1, VAR_6);
    VAR_6 = FUNC_1(VAR_5, VAR_4, &VAR_3->ascent);
    FUNC_9(VAR_1, VAR_6);
    VAR_6 = FUNC_2(VAR_5, VAR_4, &VAR_3->descent);
    FUNC_9(VAR_1, VAR_6);

    FUNC_0(VAR_5);
}
