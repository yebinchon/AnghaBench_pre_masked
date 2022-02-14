
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {scalar_t__ vsize; scalar_t__ vaddr; } ;
typedef TYPE_1__ RBinSection ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(RBinSection *VAR_1, ut64 VAR_2) {
 if (!VAR_1 || VAR_2 == VAR_0) {
  return 0;
 }
 ut64 VAR_3 = VAR_1->vaddr;
 ut64 VAR_4 = VAR_3 + VAR_1->vsize;
 return FUNC_0 (VAR_3, VAR_2, VAR_4);
}
