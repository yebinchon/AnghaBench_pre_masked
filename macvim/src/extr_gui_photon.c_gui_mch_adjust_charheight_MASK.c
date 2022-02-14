
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int char_ascent; scalar_t__ char_height; int norm_font; } ;
struct TYPE_4__ {int ascender; scalar_t__ descender; } ;
typedef TYPE_1__ FontQueryInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

int
FUNC_1(void)
{
    FontQueryInfo VAR_3;

    FUNC_0(VAR_1.norm_font, &VAR_3);

    VAR_1.char_height = - VAR_3.ascender + VAR_3.descender + VAR_2;
    VAR_1.char_ascent = - VAR_3.ascender + VAR_2 / 2;

    return VAR_0;
}
