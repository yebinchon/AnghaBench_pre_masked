
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rtfCNum; struct TYPE_6__* rtfNextColor; } ;
struct TYPE_5__ {TYPE_2__* colorList; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFColor ;



RTFColor *FUNC_0(const RTF_Info *VAR_0, int VAR_1)
{
 RTFColor *VAR_2;

 if (VAR_1 == -1)
  return (VAR_0->colorList);
 for (VAR_2 = VAR_0->colorList; VAR_2 != ((void*)0); VAR_2 = VAR_2->rtfNextColor)
 {
  if (VAR_2->rtfCNum == VAR_1)
   break;
 }
 return (VAR_2);
}
