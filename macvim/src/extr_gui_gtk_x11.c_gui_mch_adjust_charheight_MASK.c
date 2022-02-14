
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int char_height; int char_ascent; int text_context; int norm_font; } ;
typedef int PangoFontMetrics ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(void)
{
    PangoFontMetrics *VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_4 = FUNC_3(VAR_2.text_context, VAR_2.norm_font,
    FUNC_2(VAR_2.text_context));
    VAR_5 = FUNC_4(VAR_4);
    VAR_6 = FUNC_5(VAR_4);

    FUNC_6(VAR_4);

    VAR_2.char_height = (VAR_5 + VAR_6 + VAR_1 - 1) / VAR_1
        + VAR_3;

    VAR_2.char_ascent = FUNC_1(VAR_5 + VAR_3 * VAR_1 / 2);



    VAR_2.char_ascent = FUNC_0(VAR_2.char_ascent, 0);
    VAR_2.char_height = FUNC_0(VAR_2.char_height, VAR_2.char_ascent + 1);

    return VAR_0;
}
