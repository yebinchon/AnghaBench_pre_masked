
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int class_size; } ;
struct TYPE_7__ {TYPE_2__* classes; TYPE_1__ header; } ;
struct TYPE_6__ {int class_id; } ;
typedef TYPE_3__ RBinDexObj ;



__attribute__((used)) static bool FUNC_0(RBinDexObj *VAR_0, int VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->header.class_size; VAR_2++) {
  if (VAR_1 == VAR_0->classes[VAR_2].class_id) {
   return 1;
  }
 }
 return 0;
}
