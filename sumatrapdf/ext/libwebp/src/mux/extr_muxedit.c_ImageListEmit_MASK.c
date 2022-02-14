
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {struct TYPE_4__* next_; } ;
typedef TYPE_1__ WebPMuxImage ;


 int * FUNC_0 (TYPE_1__ const*,int *) ;

__attribute__((used)) static uint8_t* FUNC_1(const WebPMuxImage* VAR_0, uint8_t* VAR_1) {
  while (VAR_0 != ((void*)0)) {
    VAR_1 = FUNC_0(VAR_0, VAR_1);
    VAR_0 = VAR_0->next_;
  }
  return VAR_1;
}
