
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {int spaces; } ;
typedef TYPE_1__ RSpaces ;
typedef TYPE_2__ RBIter ;


 TYPE_2__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(RSpaces *VAR_0) {
 RBIter VAR_1 = FUNC_0 (VAR_0->spaces);
 return VAR_1.len == 0;
}
