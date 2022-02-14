
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int hash_shift_; int hash_bits_; int * colors_; } ;
typedef TYPE_1__ VP8LColorCache ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

int FUNC_2(VP8LColorCache* const VAR_0, int VAR_1) {
  const int VAR_2 = 1 << VAR_1;
  FUNC_1(VAR_0 != ((void*)0));
  FUNC_1(VAR_1 > 0);
  VAR_0->colors_ = (uint32_t*)FUNC_0((uint64_t)VAR_2,
                                          sizeof(*VAR_0->colors_));
  if (VAR_0->colors_ == ((void*)0)) return 0;
  VAR_0->hash_shift_ = 32 - VAR_1;
  VAR_0->hash_bits_ = VAR_1;
  return 1;
}
