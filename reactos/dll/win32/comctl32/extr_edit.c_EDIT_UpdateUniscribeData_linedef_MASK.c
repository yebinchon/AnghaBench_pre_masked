
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hwndSelf; int * font; int * text; int tabs; int tabs_count; } ;
struct TYPE_8__ {double net_length; int index; int * ssa; } ;
struct TYPE_7__ {scalar_t__ iTabOrigin; int pTabStops; int iScale; int cTabStops; } ;
typedef TYPE_1__ SCRIPT_TABDEF ;
typedef int * SCRIPT_STRING_ANALYSIS ;
typedef TYPE_2__ LINEDEF ;
typedef int HRESULT ;
typedef int * HFONT ;
typedef scalar_t__ HDC ;
typedef TYPE_3__ EDITSTATE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,int *,double,double,int,int,int,int *,int *,int *,TYPE_1__*,int *,int **) ;
 int * FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static SCRIPT_STRING_ANALYSIS FUNC_7(EDITSTATE *VAR_4, HDC VAR_5, LINEDEF *VAR_6)
{
 if (!VAR_6)
  return ((void*)0);

 if (VAR_6->net_length && !VAR_6->ssa)
 {
  int VAR_7 = VAR_6->index;
  HFONT VAR_8 = ((void*)0);
  HDC VAR_9 = VAR_5;
  SCRIPT_TABDEF VAR_10;
  HRESULT VAR_11;

  if (!VAR_9)
   VAR_9 = FUNC_2(VAR_4->hwndSelf);
  if (VAR_4->font)
   VAR_8 = FUNC_5(VAR_9, VAR_4->font);

  VAR_10.cTabStops = VAR_4->tabs_count;
  VAR_10.iScale = FUNC_1(VAR_9, ((void*)0), ((void*)0));
  VAR_10.pTabStops = VAR_4->tabs;
  VAR_10.iTabOrigin = 0;

  VAR_11 = FUNC_4(VAR_9, &VAR_4->text[VAR_7], VAR_6->net_length,
                                         (1.5*VAR_6->net_length+16), -1,
                                         VAR_2|VAR_0|VAR_1|VAR_3, -1,
                                         ((void*)0), ((void*)0), ((void*)0), &VAR_10, ((void*)0), &VAR_6->ssa);
  if (FUNC_0(VAR_11))
  {
   FUNC_6("ScriptStringAnalyse failed (%x)\n",VAR_11);
   VAR_6->ssa = ((void*)0);
  }

  if (VAR_4->font)
   FUNC_5(VAR_9, VAR_8);
  if (VAR_9 != VAR_5)
   FUNC_3(VAR_4->hwndSelf, VAR_9);
 }

 return VAR_6->ssa;
}
