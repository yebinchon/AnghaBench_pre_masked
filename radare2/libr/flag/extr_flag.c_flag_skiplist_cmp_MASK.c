
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ off; } ;
typedef TYPE_1__ RFlagsAtOffset ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 const RFlagsAtOffset *VAR_2 = (RFlagsAtOffset *)VAR_0, *VAR_3 = (RFlagsAtOffset *)VAR_1;
 if (VAR_2->off == VAR_3->off) {
  return 0;
 }
 return VAR_2->off < VAR_3->off? -1: 1;
}
