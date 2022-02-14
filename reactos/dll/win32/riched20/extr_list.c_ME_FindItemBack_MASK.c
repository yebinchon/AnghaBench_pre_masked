
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; int type; } ;
typedef TYPE_1__ ME_DisplayItem ;
typedef int ME_DIType ;


 scalar_t__ FUNC_0 (int ,int ) ;

ME_DisplayItem *FUNC_1(ME_DisplayItem *VAR_0, ME_DIType VAR_1)
{
  if (!VAR_0)
    return ((void*)0);
  VAR_0 = VAR_0->prev;
  while(VAR_0!=((void*)0)) {
    if (FUNC_0(VAR_0->type, VAR_1))
      return VAR_0;
    VAR_0 = VAR_0->prev;
  }
  return ((void*)0);
}
