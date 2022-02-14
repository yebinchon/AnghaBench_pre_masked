
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_st_lock; int st; } ;
typedef TYPE_1__ RRDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) inline static void FUNC_3(RRDR *VAR_0) {
    if(FUNC_2(!VAR_0)) {
        FUNC_0("NULL value given!");
        return;
    }

    FUNC_1(VAR_0->st);
    VAR_0->has_st_lock = 1;
}
