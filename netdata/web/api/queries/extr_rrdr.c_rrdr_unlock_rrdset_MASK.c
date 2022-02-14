
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ has_st_lock; int st; } ;
typedef TYPE_1__ RRDR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) inline static void FUNC_4(RRDR *VAR_0) {
    if(FUNC_3(!VAR_0)) {
        FUNC_0("NULL value given!");
        return;
    }

    if(FUNC_1(VAR_0->has_st_lock)) {
        FUNC_2(VAR_0->st);
        VAR_0->has_st_lock = 0;
    }
}
