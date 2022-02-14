
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int columns; } ;
struct TYPE_5__ {scalar_t__ type; int * name; } ;
typedef TYPE_1__ FUNCTION ;
typedef TYPE_2__ DISPLAY_COLUMNS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(FUNCTION *VAR_3, DISPLAY_COLUMNS *VAR_4)
{
    FUNCTION *VAR_5;
    int VAR_6, VAR_7 = 0;

    for (VAR_5 = VAR_3; VAR_5->name != ((void*)0); ++VAR_5)
        if (VAR_5->type == VAR_1 || VAR_5->type == VAR_2 || VAR_5->type == VAR_0)
            if ((VAR_6 = FUNC_0(VAR_5->name)) > VAR_7)
                VAR_7 = VAR_6;

    VAR_4->width = VAR_7 + 2;
    VAR_4->columns = (80 - 1) / VAR_4->width;
}
