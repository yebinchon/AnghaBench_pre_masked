
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* prev_marked; TYPE_7__* next_marked; } ;
struct TYPE_14__ {TYPE_4__ para; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_5__ member; } ;
struct TYPE_15__ {TYPE_7__* first_marked_para; } ;
struct TYPE_10__ {TYPE_7__* next_marked; } ;
struct TYPE_11__ {TYPE_1__ para; } ;
struct TYPE_12__ {TYPE_2__ member; } ;
typedef TYPE_6__ ME_TextEditor ;
typedef TYPE_7__ ME_DisplayItem ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void FUNC_1(ME_TextEditor *VAR_1, ME_DisplayItem *VAR_2)
{
    ME_DisplayItem *VAR_3 = VAR_1->first_marked_para;

    FUNC_0(VAR_2->type == VAR_0);
    if (!VAR_2->member.para.next_marked && !VAR_2->member.para.prev_marked)
    {
        if (VAR_2 == VAR_3)
            VAR_1->first_marked_para = ((void*)0);
    }
    else if (VAR_2->member.para.next_marked && VAR_2->member.para.prev_marked)
    {
        VAR_2->member.para.prev_marked->member.para.next_marked = VAR_2->member.para.next_marked;
        VAR_2->member.para.next_marked->member.para.prev_marked = VAR_2->member.para.prev_marked;
        VAR_2->member.para.prev_marked = VAR_2->member.para.next_marked = ((void*)0);
    }
    else if (VAR_2->member.para.next_marked)
    {
        FUNC_0(VAR_2 == VAR_1->first_marked_para);
        VAR_1->first_marked_para = VAR_2->member.para.next_marked;
        VAR_2->member.para.next_marked->member.para.prev_marked = ((void*)0);
        VAR_2->member.para.next_marked = ((void*)0);
    }
    else
    {
        VAR_2->member.para.prev_marked->member.para.next_marked = ((void*)0);
        VAR_2->member.para.prev_marked = ((void*)0);
    }
}
