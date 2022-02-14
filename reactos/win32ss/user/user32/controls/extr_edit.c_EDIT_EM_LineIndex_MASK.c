
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; int line_count; int selection_end; TYPE_1__* first_line_def; } ;
struct TYPE_4__ {int length; struct TYPE_4__* next; } ;
typedef TYPE_1__ LINEDEF ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int VAR_0 ;

__attribute__((used)) static INT FUNC_0(const EDITSTATE *VAR_1, INT VAR_2)
{
 INT VAR_3;
 const LINEDEF *VAR_4;

 if (!(VAR_1->style & VAR_0))
  return 0;
 if (VAR_2 >= VAR_1->line_count)
  return -1;

 VAR_3 = 0;
 VAR_4 = VAR_1->first_line_def;
 if (VAR_2 == -1) {
  INT VAR_5 = VAR_1->selection_end - VAR_4->length;
  while ((VAR_5 >= 0) && VAR_4->next) {
   VAR_3 += VAR_4->length;
   VAR_4 = VAR_4->next;
   VAR_5 -= VAR_4->length;
  }
 } else {
  while (VAR_2 > 0) {
   VAR_3 += VAR_4->length;
   VAR_4 = VAR_4->next;
   VAR_2--;
  }
 }
 return VAR_3;
}
