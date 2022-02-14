
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bbs; } ;
typedef TYPE_1__ RAnalFunction ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1) {
 const RAnalFunction *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4 = (int)FUNC_0 (VAR_2->bbs);
 int VAR_5 = (int)FUNC_0 (VAR_3->bbs);
 return (VAR_4 > VAR_5)? -1: (VAR_4 < VAR_5)? 1 : 0;
}
