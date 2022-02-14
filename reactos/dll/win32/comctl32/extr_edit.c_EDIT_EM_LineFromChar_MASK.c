
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int style; int line_count; TYPE_1__* first_line_def; int selection_end; int selection_start; } ;
struct TYPE_5__ {scalar_t__ length; struct TYPE_5__* next; } ;
typedef TYPE_1__ LINEDEF ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static INT FUNC_2(EDITSTATE *VAR_1, INT VAR_2)
{
 INT VAR_3;
 LINEDEF *VAR_4;

 if (!(VAR_1->style & VAR_0))
  return 0;
 if (VAR_2 > (INT)FUNC_0(VAR_1))
  return VAR_1->line_count - 1;
 if (VAR_2 == -1)
  VAR_2 = FUNC_1(VAR_1->selection_start, VAR_1->selection_end);

 VAR_3 = 0;
 VAR_4 = VAR_1->first_line_def;
 VAR_2 -= VAR_4->length;
 while ((VAR_2 >= 0) && VAR_4->next) {
  VAR_3++;
  VAR_4 = VAR_4->next;
  VAR_2 -= VAR_4->length;
 }
 return VAR_3;
}
