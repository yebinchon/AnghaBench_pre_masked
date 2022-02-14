
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int selection_end; int style; char* text; int selection_start; } ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(EDITSTATE *VAR_2, BOOL VAR_3)
{
 INT VAR_4 = VAR_2->selection_end;

 if (VAR_4) {
  VAR_4--;
  if ((VAR_2->style & VAR_0) && VAR_4 &&
    (VAR_2->text[VAR_4 - 1] == '\r') && (VAR_2->text[VAR_4] == '\n')) {
   VAR_4--;
   if (VAR_4 && (VAR_2->text[VAR_4 - 1] == '\r'))
    VAR_4--;
  }
 }
 FUNC_1(VAR_2, VAR_3 ? VAR_2->selection_start : VAR_4, VAR_4, VAR_1);
 FUNC_0(VAR_2);
}
