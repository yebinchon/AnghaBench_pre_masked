
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_0 (char*,int ,long) ;
 long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

unsigned char *FUNC_3(robj *VAR_3, long *VAR_4, char *VAR_5) {
    FUNC_2(VAR_3->type == VAR_2);
    unsigned char *VAR_6 = ((void*)0);



    if (VAR_3 && VAR_3->encoding == VAR_1) {
        VAR_6 = (unsigned char*) VAR_5;
        if (VAR_4) *VAR_4 = FUNC_0(VAR_5,VAR_0,(long)VAR_3->ptr);
    } else if (VAR_3) {
        VAR_6 = (unsigned char*) VAR_3->ptr;
        if (VAR_4) *VAR_4 = FUNC_1(VAR_3->ptr);
    } else {
        if (VAR_4) *VAR_4 = 0;
    }
    return VAR_6;
}
