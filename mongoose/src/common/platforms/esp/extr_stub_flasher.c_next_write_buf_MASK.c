
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t bwi; TYPE_1__* bufs; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ len; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void) {
  VAR_1.bwi++;
  if (VAR_1.bwi == VAR_0) VAR_1.bwi = 0;
  VAR_1.bufs[VAR_1.bwi].len = 0;
  VAR_1.bufs[VAR_1.bwi].flags = 0;
}
