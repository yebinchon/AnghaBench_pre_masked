
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arrayLevel; } ;
typedef TYPE_1__ context ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void* VAR_0) {
    FUNC_0(((context*)VAR_0)->arrayLevel > 0);
    ((context*)VAR_0)->arrayLevel--;
    return 1;
}
