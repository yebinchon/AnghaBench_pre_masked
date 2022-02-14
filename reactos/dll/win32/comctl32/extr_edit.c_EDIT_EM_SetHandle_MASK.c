
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int style; int buffer_size; int flags; scalar_t__ selection_end; scalar_t__ selection_start; scalar_t__ y_offset; scalar_t__ x_offset; int * hlocapp; scalar_t__ hloc32W; } ;
typedef scalar_t__ HLOCAL ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(EDITSTATE *VAR_4, HLOCAL VAR_5)
{
    if (!(VAR_4->style & VAR_2))
        return;

    if (!VAR_5)
        return;

    FUNC_4(VAR_4, VAR_3);

    VAR_4->hloc32W = VAR_5;
    VAR_4->buffer_size = FUNC_7(VAR_4->hloc32W)/sizeof(WCHAR) - 1;


    VAR_4->hlocapp = ((void*)0);

    FUNC_3(VAR_4);
    FUNC_9(VAR_4);

    VAR_4->x_offset = VAR_4->y_offset = 0;
    VAR_4->selection_start = VAR_4->selection_end = 0;
    FUNC_1(VAR_4);
    VAR_4->flags &= ~VAR_0;
    VAR_4->flags &= ~VAR_1;
    FUNC_0(VAR_4, 0, FUNC_8(VAR_4), 0, ((void*)0));
    FUNC_6(VAR_4, ((void*)0), VAR_3);
    FUNC_2(VAR_4);

    FUNC_5(VAR_4);
}
