
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {scalar_t__ addr; } ;
typedef int RBNode ;
typedef TYPE_1__ RAnalFunction ;


 TYPE_1__* FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const RBNode *VAR_1, void *VAR_2) {
 const RAnalFunction *VAR_3 = (const RAnalFunction *)VAR_0;
 const RAnalFunction *VAR_4 = FUNC_0 (VAR_1);
 ut64 VAR_5 = VAR_3->addr, VAR_6 = VAR_4->addr;
 if (VAR_5 != VAR_6) {
  return VAR_5 < VAR_6 ? -1 : 1;
 }
 return 0;
}
