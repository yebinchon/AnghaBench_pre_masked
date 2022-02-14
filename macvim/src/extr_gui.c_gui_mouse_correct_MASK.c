
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w_wrow; } ;
typedef TYPE_1__ win_T ;
struct TYPE_8__ {int char_width; int char_height; scalar_t__ in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (int,int) ;

void
FUNC_8()
{
    int VAR_6, VAR_7;
    win_T *VAR_8 = ((void*)0);

    VAR_4 = VAR_1;

    if (!(VAR_3.in_use && VAR_5))
 return;

    FUNC_3(&VAR_6, &VAR_7);

    if (VAR_6 < 0 || VAR_6 > VAR_0 * VAR_3.char_width)
 return;
    if (VAR_7 >= 0



       )
 VAR_8 = FUNC_7(VAR_6, VAR_7);
    if (VAR_8 != VAR_2 && VAR_8 != ((void*)0))
    {
 FUNC_6();
 FUNC_4((int)FUNC_0(VAR_2) * VAR_3.char_width - 3,
  (FUNC_1(VAR_2) + VAR_2->w_wrow) * VAR_3.char_height
           + (VAR_3.char_height) / 2);
    }
}
