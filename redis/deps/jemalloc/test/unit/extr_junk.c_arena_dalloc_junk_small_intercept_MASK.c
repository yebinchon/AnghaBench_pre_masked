
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t reg_size; } ;
typedef TYPE_1__ bin_info_t ;


 int VAR_0 ;
 int FUNC_0 (void*,TYPE_1__ const*) ;
 int FUNC_1 (int ,int ,char*,size_t,size_t) ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, const bin_info_t *VAR_4) {
 size_t VAR_5;

 FUNC_0(VAR_3, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4->reg_size; VAR_5++) {
  FUNC_1(((uint8_t *)VAR_3)[VAR_5], VAR_0,
      "Missing junk fill for byte %zu/%zu of deallocated region",
      VAR_5, VAR_4->reg_size);
 }
 if (VAR_3 == VAR_2) {
  VAR_1 = 1;
 }
}
