
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int style; TYPE_1__* first_line_def; int ssa; int hwndSelf; int * font; int * text; int password_char; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef int SCRIPT_STRING_ANALYSIS ;
typedef TYPE_1__ LINEDEF ;
typedef double INT ;
typedef int * HFONT ;
typedef scalar_t__ HDC ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (TYPE_2__*,scalar_t__,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int *,double,double,int,int,int,int *,int *,int *,int *,int *,int *) ;
 int * FUNC_4 (scalar_t__,int *) ;
 double FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static SCRIPT_STRING_ANALYSIS FUNC_6(EDITSTATE *VAR_6, HDC VAR_7, INT VAR_8)
{
 LINEDEF *VAR_9;

 if (!(VAR_6->style & VAR_0))
 {
  if (!VAR_6->ssa)
  {
   INT VAR_10 = FUNC_5(VAR_6);
   HFONT VAR_11 = ((void*)0);
   HDC VAR_12 = VAR_7;

   if (!VAR_12)
    VAR_12 = FUNC_1(VAR_6->hwndSelf);
   if (VAR_6->font)
    VAR_11 = FUNC_4(VAR_12, VAR_6->font);

   if (VAR_6->style & VAR_1)
    FUNC_3(VAR_12, &VAR_6->password_char, VAR_10, (1.5*VAR_10+16), -1, VAR_4|VAR_2|VAR_3|VAR_5, -1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6->ssa);
   else
    FUNC_3(VAR_12, VAR_6->text, VAR_10, (1.5*VAR_10+16), -1, VAR_4|VAR_2|VAR_3, -1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6->ssa);

   if (VAR_6->font)
    FUNC_4(VAR_12, VAR_11);
   if (VAR_12 != VAR_7)
    FUNC_2(VAR_6->hwndSelf, VAR_12);
  }
  return VAR_6->ssa;
 }
 else
 {
  VAR_9 = VAR_6->first_line_def;
  while (VAR_9 && VAR_8)
  {
   VAR_9 = VAR_9->next;
   VAR_8--;
  }

  return FUNC_0(VAR_6,VAR_7,VAR_9);
 }
}
