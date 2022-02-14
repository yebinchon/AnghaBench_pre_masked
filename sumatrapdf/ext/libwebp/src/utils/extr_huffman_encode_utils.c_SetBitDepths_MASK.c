
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t pool_index_left_; size_t pool_index_right_; size_t value_; } ;
typedef TYPE_1__ HuffmanTree ;



__attribute__((used)) static void FUNC_0(const HuffmanTree* const VAR_0,
                         const HuffmanTree* const VAR_1,
                         uint8_t* const VAR_2, int VAR_3) {
  if (VAR_0->pool_index_left_ >= 0) {
    FUNC_0(&VAR_1[VAR_0->pool_index_left_], VAR_1, VAR_2, VAR_3 + 1);
    FUNC_0(&VAR_1[VAR_0->pool_index_right_], VAR_1, VAR_2, VAR_3 + 1);
  } else {
    VAR_2[VAR_0->value_] = VAR_3;
  }
}
