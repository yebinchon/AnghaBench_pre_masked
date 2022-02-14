
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_count_; scalar_t__ value_; } ;
typedef TYPE_1__ HuffmanTree ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void* VAR_0, const void* VAR_1) {
  const HuffmanTree* const VAR_2 = (const HuffmanTree*)VAR_0;
  const HuffmanTree* const VAR_3 = (const HuffmanTree*)VAR_1;
  if (VAR_2->total_count_ > VAR_3->total_count_) {
    return -1;
  } else if (VAR_2->total_count_ < VAR_3->total_count_) {
    return 1;
  } else {
    FUNC_0(VAR_2->value_ != VAR_3->value_);
    return (VAR_2->value_ < VAR_3->value_) ? -1 : 1;
  }
}
