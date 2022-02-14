
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; } ;
typedef TYPE_1__ RAnalFunction ;



__attribute__((used)) static int FUNC_0(const RAnalFunction *VAR_0, const RAnalFunction *VAR_1) {
 return VAR_0 && VAR_1 && VAR_0->addr && VAR_1->addr && VAR_0->addr > VAR_1->addr;
}
