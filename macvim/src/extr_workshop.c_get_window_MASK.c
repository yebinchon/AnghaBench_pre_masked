
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * w_buffer; } ;
typedef TYPE_1__ win_T ;
typedef int buf_T ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static win_T *
FUNC_1(
 buf_T *VAR_1)
{
    win_T *VAR_2 = ((void*)0);

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = FUNC_0(VAR_2))
 if (VAR_1 == VAR_2->w_buffer)
     break;
    return VAR_2;
}
