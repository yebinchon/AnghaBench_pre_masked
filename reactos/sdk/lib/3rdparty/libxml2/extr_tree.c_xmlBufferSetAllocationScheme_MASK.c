
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlBufferPtr ;
typedef scalar_t__ xmlBufferAllocationScheme ;
struct TYPE_3__ {scalar_t__ alloc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;

void
FUNC_1(xmlBufferPtr VAR_6,
                             xmlBufferAllocationScheme VAR_7) {
    if (VAR_6 == ((void*)0)) {




        return;
    }
    if ((VAR_6->alloc == VAR_3) ||
        (VAR_6->alloc == VAR_4)) return;
    if ((VAR_7 == VAR_0) ||
        (VAR_7 == VAR_1) ||
        (VAR_7 == VAR_2) ||
        (VAR_7 == VAR_3))
 VAR_6->alloc = VAR_7;
}
