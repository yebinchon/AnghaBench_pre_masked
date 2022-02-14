
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t size; int const* data; } ;
typedef TYPE_1__ FUZZ_dataProducer_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

FUZZ_dataProducer_t *FUNC_2(const uint8_t *VAR_0, size_t VAR_1) {
  FUZZ_dataProducer_t *VAR_2 = FUNC_1(sizeof(FUZZ_dataProducer_t));

  FUNC_0(VAR_2 != ((void*)0));

  VAR_2->data = VAR_0;
  VAR_2->size = VAR_1;
  return VAR_2;
}
