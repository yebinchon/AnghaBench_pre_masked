
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int style; int selection_start; int selection_end; TYPE_1__* first_line_def; } ;
struct TYPE_7__ {int net_length; scalar_t__ length; struct TYPE_7__* next; } ;
typedef TYPE_1__ LINEDEF ;
typedef int INT32 ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static INT FUNC_3(EDITSTATE *VAR_1, INT VAR_2)
{
 LINEDEF *VAR_3;

 if (!(VAR_1->style & VAR_0))
  return FUNC_2(VAR_1);

 if (VAR_2 == -1) {

  INT32 VAR_4;
  INT32 VAR_5;
  INT32 VAR_6;
  VAR_4 = FUNC_0(VAR_1, VAR_1->selection_start);

  VAR_6 = VAR_1->selection_start - FUNC_1(VAR_1, VAR_4);
  VAR_4 = FUNC_0(VAR_1, VAR_1->selection_end);

  VAR_5 = FUNC_1(VAR_1, VAR_4);
  VAR_6 += VAR_5 + FUNC_3(VAR_1, VAR_5) - VAR_1->selection_end;
  return VAR_6;
 }
 VAR_3 = VAR_1->first_line_def;
 VAR_2 -= VAR_3->length;
 while ((VAR_2 >= 0) && VAR_3->next) {
  VAR_3 = VAR_3->next;
  VAR_2 -= VAR_3->length;
 }
 return VAR_3->net_length;
}
