
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nCharOfs; TYPE_4__* prev_para; TYPE_4__* next_para; } ;
struct TYPE_9__ {TYPE_1__ para; } ;
struct TYPE_11__ {TYPE_2__ member; struct TYPE_11__* next; struct TYPE_11__* prev; } ;
struct TYPE_10__ {int * pCharStyle; TYPE_4__* pLast; TYPE_4__* pFirst; } ;
typedef TYPE_3__ ME_TextBuffer ;
typedef TYPE_4__ ME_DisplayItem ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;

__attribute__((used)) static ME_TextBuffer *FUNC_2(void) {
  ME_TextBuffer *VAR_2 = FUNC_1(sizeof(*VAR_2));
  ME_DisplayItem *VAR_3 = FUNC_0(VAR_1);
  ME_DisplayItem *VAR_4 = FUNC_0(VAR_0);

  VAR_3->prev = ((void*)0);
  VAR_3->next = VAR_4;
  VAR_4->prev = VAR_3;
  VAR_4->next = ((void*)0);
  VAR_3->member.para.next_para = VAR_4;
  VAR_4->member.para.prev_para = VAR_3;
  VAR_4->member.para.nCharOfs = 0;

  VAR_2->pFirst = VAR_3;
  VAR_2->pLast = VAR_4;
  VAR_2->pCharStyle = ((void*)0);

  return VAR_2;
}
