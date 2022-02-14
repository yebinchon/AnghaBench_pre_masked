
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ color_cache_size_; int num_htree_groups_; TYPE_1__* htree_groups_; } ;
typedef TYPE_2__ VP8LMetadata ;
struct TYPE_7__ {scalar_t__ bits; } ;
struct TYPE_5__ {TYPE_3__** htrees; } ;
typedef TYPE_3__ HuffmanCode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0(const VP8LMetadata* const VAR_3) {
  int VAR_4;
  if (VAR_3->color_cache_size_ > 0) return 0;


  for (VAR_4 = 0; VAR_4 < VAR_3->num_htree_groups_; ++VAR_4) {
    HuffmanCode** const VAR_5 = VAR_3->htree_groups_[VAR_4].htrees;
    if (VAR_5[VAR_2][0].bits > 0) return 0;
    if (VAR_5[VAR_1][0].bits > 0) return 0;
    if (VAR_5[VAR_0][0].bits > 0) return 0;
  }
  return 1;
}
