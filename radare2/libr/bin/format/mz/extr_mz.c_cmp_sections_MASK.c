
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vaddr; } ;
typedef TYPE_1__ RBinSection ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 const RBinSection *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;

 return VAR_2->vaddr - VAR_3->vaddr;
}
