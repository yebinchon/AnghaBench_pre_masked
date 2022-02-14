
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rtfFNum; struct TYPE_6__* rtfNextFont; } ;
struct TYPE_5__ {TYPE_2__* fontList; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFFont ;



RTFFont *FUNC_0(const RTF_Info *VAR_0, int VAR_1)
{
 RTFFont *VAR_2;

 if (VAR_1 == -1)
  return (VAR_0->fontList);
 for (VAR_2 = VAR_0->fontList; VAR_2 != ((void*)0); VAR_2 = VAR_2->rtfNextFont)
 {
  if (VAR_2->rtfFNum == VAR_1)
   break;
 }
 return (VAR_2);
}
