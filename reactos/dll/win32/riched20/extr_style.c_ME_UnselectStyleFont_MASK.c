
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hDC; } ;
struct TYPE_5__ {int * font_cache; } ;
typedef TYPE_1__ ME_Style ;
typedef TYPE_2__ ME_Context ;
typedef int HFONT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(ME_Context *VAR_0, ME_Style *VAR_1, HFONT VAR_2)
{
  FUNC_0(VAR_0->hDC, VAR_2);
  FUNC_1(VAR_1->font_cache);
  VAR_1->font_cache = ((void*)0);
}
