
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; void* ptr; } ;
typedef TYPE_1__ robj ;
typedef int llstr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 size_t FUNC_1 (char*,int,long) ;
 size_t FUNC_2 (void*) ;

void FUNC_3(robj *VAR_2) {
    char VAR_3[VAR_0];
    void *VAR_4;
    size_t VAR_5;

    if (VAR_2->encoding == VAR_1) {
        VAR_5 = FUNC_1(VAR_3,sizeof(VAR_3),(long)VAR_2->ptr);
        VAR_4 = VAR_3;
    } else {
        VAR_5 = FUNC_2(VAR_2->ptr);
        VAR_4 = VAR_2->ptr;
    }
    FUNC_0(VAR_4,VAR_5);
}
