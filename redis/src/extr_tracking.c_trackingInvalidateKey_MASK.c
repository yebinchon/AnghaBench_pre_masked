
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ sds ;
struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void FUNC_3(robj *VAR_3) {
    if (VAR_1 == ((void*)0) || VAR_2 == 0) return;

    sds VAR_4 = VAR_3->ptr;
    uint64_t VAR_5 = FUNC_0(0,
        (unsigned char*)VAR_4,FUNC_1(VAR_4))&(VAR_0-1);
    FUNC_2(VAR_5);
}
