
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int rio ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;

ssize_t FUNC_5(rio *VAR_1, robj *VAR_2) {


    if (VAR_2->encoding == VAR_0) {
        return FUNC_0(VAR_1,(long)VAR_2->ptr);
    } else {
        FUNC_4(((void*)0),VAR_2,FUNC_2(VAR_2));
        return FUNC_1(VAR_1,VAR_2->ptr,FUNC_3(VAR_2->ptr));
    }
}
