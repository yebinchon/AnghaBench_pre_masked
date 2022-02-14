
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * j_sb_buffer; scalar_t__ j_tail; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(journal_t *VAR_0)
{


    VAR_0->j_tail = 0;
    if (VAR_0->j_sb_buffer) {
        FUNC_1(VAR_0, 0);
        FUNC_0(VAR_0->j_sb_buffer);
        VAR_0->j_sb_buffer = ((void*)0);
    }
}
