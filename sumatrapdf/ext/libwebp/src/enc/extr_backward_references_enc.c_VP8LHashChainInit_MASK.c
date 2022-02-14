
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size_; int * offset_length_; } ;
typedef TYPE_1__ VP8LHashChain ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

int FUNC_2(VP8LHashChain* const VAR_0, int VAR_1) {
  FUNC_1(VAR_0->size_ == 0);
  FUNC_1(VAR_0->offset_length_ == ((void*)0));
  FUNC_1(VAR_1 > 0);
  VAR_0->offset_length_ =
      (uint32_t*)FUNC_0(VAR_1, sizeof(*VAR_0->offset_length_));
  if (VAR_0->offset_length_ == ((void*)0)) return 0;
  VAR_0->size_ = VAR_1;

  return 1;
}
