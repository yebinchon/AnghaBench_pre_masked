
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* adns_query ;
struct TYPE_4__ {size_t interim_allocd; } ;


 size_t FUNC_0 (size_t) ;
 void* FUNC_1 (TYPE_1__*,size_t) ;

void *FUNC_2(adns_query VAR_0, size_t VAR_1) {
  void *VAR_2;

  VAR_1= FUNC_0(VAR_1);
  VAR_2= FUNC_1(VAR_0,VAR_1);
  if (!VAR_2) return 0;
  VAR_0->interim_allocd += VAR_1;
  return VAR_2;
}
