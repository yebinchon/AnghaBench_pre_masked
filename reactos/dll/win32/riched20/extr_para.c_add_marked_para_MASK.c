
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nCharOfs; TYPE_4__* next_marked; TYPE_4__* prev_marked; } ;
struct TYPE_8__ {TYPE_1__ para; } ;
struct TYPE_10__ {TYPE_2__ member; } ;
struct TYPE_9__ {TYPE_4__* first_marked_para; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;



void FUNC_0(ME_TextEditor *VAR_0, ME_DisplayItem *VAR_1)
{
    ME_DisplayItem *VAR_2 = VAR_0->first_marked_para;

    if (!VAR_2)
    {
        VAR_0->first_marked_para = VAR_1;
        return;
    }
    while (VAR_2)
    {
        if (VAR_2 == VAR_1)
            return;
        else if (VAR_1->member.para.nCharOfs < VAR_2->member.para.nCharOfs)
        {
            if (VAR_2 == VAR_0->first_marked_para)
                VAR_0->first_marked_para = VAR_1;
            VAR_1->member.para.next_marked = VAR_2;
            VAR_2->member.para.prev_marked = VAR_1;
            break;
        }
        else if (VAR_1->member.para.nCharOfs >= VAR_2->member.para.nCharOfs)
        {
            if (!VAR_2->member.para.next_marked || VAR_1->member.para.nCharOfs < VAR_2->member.para.next_marked->member.para.nCharOfs)
            {
                if (VAR_2->member.para.next_marked)
                {
                    VAR_1->member.para.next_marked = VAR_2->member.para.next_marked;
                    VAR_2->member.para.next_marked->member.para.prev_marked = VAR_1;
                }
                VAR_1->member.para.prev_marked = VAR_2;
                VAR_2->member.para.next_marked = VAR_1;
                break;
            }
        }
        VAR_2 = VAR_2->member.para.next_marked;
    }
}
