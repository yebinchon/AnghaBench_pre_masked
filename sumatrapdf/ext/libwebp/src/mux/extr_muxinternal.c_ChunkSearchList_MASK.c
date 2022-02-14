
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {struct TYPE_6__* next_; } ;
typedef TYPE_1__ WebPChunk ;


 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__) ;

WebPChunk* FUNC_1(WebPChunk* VAR_0, uint32_t VAR_1, uint32_t VAR_2) {
  uint32_t VAR_3 = VAR_1;
  VAR_0 = FUNC_0(VAR_0, VAR_2);
  if (VAR_0 == ((void*)0)) return ((void*)0);

  while (--VAR_3 != 0) {
    WebPChunk* VAR_4 = FUNC_0(VAR_0->next_, VAR_2);
    if (VAR_4 == ((void*)0)) break;
    VAR_0 = VAR_4;
  }
  return ((VAR_1 > 0) && (VAR_3 > 0)) ? ((void*)0) : VAR_0;
}
