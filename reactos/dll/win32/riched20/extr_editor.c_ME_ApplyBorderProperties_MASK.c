
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {void* colorRef; int width; } ;
struct TYPE_12__ {TYPE_5__ right; TYPE_5__ bottom; TYPE_5__ left; TYPE_5__ top; } ;
struct TYPE_11__ {int color; int width; } ;
struct TYPE_10__ {int rtfCNum; scalar_t__ rtfCRed; scalar_t__ rtfCGreen; scalar_t__ rtfCBlue; struct TYPE_10__* rtfNextColor; } ;
struct TYPE_9__ {TYPE_2__* colorList; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFColor ;
typedef TYPE_3__ RTFBorder ;
typedef TYPE_4__ ME_BorderRect ;
typedef TYPE_5__ ME_Border ;


 void* FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(RTF_Info *VAR_0,
                                     ME_BorderRect *VAR_1,
                                     RTFBorder *VAR_2)
{
  int VAR_3, VAR_4;
  ME_Border *VAR_5[] = {&VAR_1->top,
                           &VAR_1->left,
                           &VAR_1->bottom,
                           &VAR_1->right};
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  {
    RTFColor *VAR_6 = VAR_0->colorList;
    VAR_5[VAR_3]->width = VAR_2[VAR_3].width;
    VAR_4 = VAR_2[VAR_3].color;
    while (VAR_6 && VAR_6->rtfCNum != VAR_4)
      VAR_6 = VAR_6->rtfNextColor;
    if (VAR_6)
      VAR_5[VAR_3]->colorRef = FUNC_0(
                           VAR_6->rtfCRed >= 0 ? VAR_6->rtfCRed : 0,
                           VAR_6->rtfCGreen >= 0 ? VAR_6->rtfCGreen : 0,
                           VAR_6->rtfCBlue >= 0 ? VAR_6->rtfCBlue : 0);
    else
      VAR_5[VAR_3]->colorRef = FUNC_0(0, 0, 0);
  }
}
