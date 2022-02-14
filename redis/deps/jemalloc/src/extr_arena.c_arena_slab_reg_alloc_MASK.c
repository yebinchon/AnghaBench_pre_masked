
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int extent_t ;
struct TYPE_5__ {size_t reg_size; int bitmap_info; } ;
typedef TYPE_1__ bin_info_t ;
struct TYPE_6__ {int bitmap; } ;
typedef TYPE_2__ arena_slab_data_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 size_t FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static void *
FUNC_7(extent_t *VAR_0, const bin_info_t *VAR_1) {
 void *VAR_2;
 arena_slab_data_t *VAR_3 = FUNC_6(VAR_0);
 size_t VAR_4;

 FUNC_0(FUNC_5(VAR_0) > 0);
 FUNC_0(!FUNC_1(VAR_3->bitmap, &VAR_1->bitmap_info));

 VAR_4 = FUNC_2(VAR_3->bitmap, &VAR_1->bitmap_info);
 VAR_2 = (void *)((uintptr_t)FUNC_3(VAR_0) +
     (uintptr_t)(VAR_1->reg_size * VAR_4));
 FUNC_4(VAR_0);
 return VAR_2;
}
