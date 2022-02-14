
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* rtfSName; struct TYPE_9__* rtfSEText; struct TYPE_9__* rtfNextSE; struct TYPE_9__* rtfSSEList; struct TYPE_9__* rtfNextStyle; struct TYPE_9__* rtfNextColor; struct TYPE_9__* rtfFName; struct TYPE_9__* rtfNextFont; } ;
struct TYPE_8__ {TYPE_2__* styleList; TYPE_2__* colorList; TYPE_2__* fontList; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFStyleElt ;
typedef TYPE_2__ RTFStyle ;
typedef TYPE_2__ RTFFont ;
typedef TYPE_2__ RTFColor ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(RTF_Info *VAR_0)
{
 RTFColor *VAR_1;
 RTFFont *VAR_2;
 RTFStyle *VAR_3;
 RTFStyleElt *VAR_4, *VAR_5;

 while (VAR_0->fontList)
 {
  VAR_2 = VAR_0->fontList->rtfNextFont;
  FUNC_0 (VAR_0->fontList->rtfFName);
  FUNC_0 (VAR_0->fontList);
  VAR_0->fontList = VAR_2;
 }
 while (VAR_0->colorList)
 {
  VAR_1 = VAR_0->colorList->rtfNextColor;
  FUNC_0 (VAR_0->colorList);
  VAR_0->colorList = VAR_1;
 }
 while (VAR_0->styleList)
 {
  VAR_3 = VAR_0->styleList->rtfNextStyle;
  VAR_4 = VAR_0->styleList->rtfSSEList;
  while (VAR_4)
  {
   VAR_5 = VAR_4->rtfNextSE;
   FUNC_0 (VAR_4->rtfSEText);
   FUNC_0 (VAR_4);
   VAR_4 = VAR_5;
  }
  FUNC_0 (VAR_0->styleList->rtfSName);
  FUNC_0 (VAR_0->styleList);
  VAR_0->styleList = VAR_3;
 }
}
