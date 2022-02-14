
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int bufb ;
typedef int bufa ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,int,long) ;
 int FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(robj *VAR_2, robj *VAR_3, int VAR_4) {
    FUNC_4(((void*)0),VAR_2,VAR_2->type == VAR_0 && VAR_3->type == VAR_0);
    char VAR_5[128], VAR_6[128], *VAR_7, *VAR_8;
    size_t VAR_9, VAR_10, VAR_11;

    if (VAR_2 == VAR_3) return 0;
    if (FUNC_2(VAR_2)) {
        VAR_7 = VAR_2->ptr;
        VAR_9 = FUNC_3(VAR_7);
    } else {
        VAR_9 = FUNC_0(VAR_5,sizeof(VAR_5),(long) VAR_2->ptr);
        VAR_7 = VAR_5;
    }
    if (FUNC_2(VAR_3)) {
        VAR_8 = VAR_3->ptr;
        VAR_10 = FUNC_3(VAR_8);
    } else {
        VAR_10 = FUNC_0(VAR_6,sizeof(VAR_6),(long) VAR_3->ptr);
        VAR_8 = VAR_6;
    }
    if (VAR_4 & VAR_1) {
        return FUNC_5(VAR_7,VAR_8);
    } else {
        int VAR_12;

        VAR_11 = (VAR_9 < VAR_10) ? VAR_9 : VAR_10;
        VAR_12 = FUNC_1(VAR_7,VAR_8,VAR_11);
        if (VAR_12 == 0) return VAR_9-VAR_10;
        return VAR_12;
    }
}
