
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int editor; } ;
struct TYPE_12__ {TYPE_4__* next_para; scalar_t__ nRows; scalar_t__ nWidth; } ;
struct TYPE_13__ {int run; TYPE_1__ para; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_2__ member; struct TYPE_15__* next; struct TYPE_15__* prev; } ;
struct TYPE_14__ {int total_rows; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;
typedef TYPE_5__ ME_Context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(ME_TextEditor *VAR_2, ME_Context *VAR_3, ME_DisplayItem *VAR_4) {
  ME_DisplayItem *VAR_5;

  VAR_4->member.para.nWidth = 0;


  VAR_2->total_rows -= VAR_4->member.para.nRows;
  VAR_4->member.para.nRows = 0;
  for (VAR_5 = VAR_4->next; VAR_5 != VAR_4->member.para.next_para; VAR_5 = VAR_5->next) {
    if (VAR_5->type == VAR_1) {
      ME_DisplayItem *VAR_6 = VAR_5;
      VAR_5 = VAR_5->prev;
      FUNC_3(VAR_6);
      FUNC_1(VAR_6);
    }
  }

  for (VAR_5 = VAR_4->next; VAR_5 != VAR_4->member.para.next_para; VAR_5 = VAR_5->next) {
    FUNC_4(VAR_5->type != VAR_1);
    if (VAR_5->type == VAR_0) {
      while (VAR_5->next->type == VAR_0 &&
             FUNC_0(&VAR_5->member.run, &VAR_5->next->member.run)) {
        FUNC_2(VAR_3->editor, VAR_5);
      }
    }
  }
}
