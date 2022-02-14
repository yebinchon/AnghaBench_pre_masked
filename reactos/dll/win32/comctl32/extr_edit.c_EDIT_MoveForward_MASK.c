
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t selection_end; char* text; int style; size_t selection_start; } ;
typedef size_t INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(EDITSTATE *VAR_2, BOOL VAR_3)
{
 INT VAR_4 = VAR_2->selection_end;

 if (VAR_2->text[VAR_4]) {
  VAR_4++;
  if ((VAR_2->style & VAR_0) && (VAR_2->text[VAR_4 - 1] == '\r')) {
   if (VAR_2->text[VAR_4] == '\n')
    VAR_4++;
   else if ((VAR_2->text[VAR_4] == '\r') && (VAR_2->text[VAR_4 + 1] == '\n'))
    VAR_4 += 2;
  }
 }
 FUNC_1(VAR_2, VAR_3 ? VAR_2->selection_start : VAR_4, VAR_4, VAR_1);
 FUNC_0(VAR_2);
}
