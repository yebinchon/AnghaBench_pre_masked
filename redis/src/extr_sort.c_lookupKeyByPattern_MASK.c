
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_16__ {char* ptr; scalar_t__ type; } ;
typedef TYPE_1__ robj ;
typedef int redisDb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char*,char*) ;

robj *FUNC_11(redisDb *VAR_2, robj *VAR_3, robj *VAR_4, int VAR_5) {
    char *VAR_6, *VAR_7, *VAR_8;
    sds VAR_9, VAR_10;
    robj *VAR_11, *VAR_12 = ((void*)0), *VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17;



    VAR_9 = VAR_3->ptr;
    if (VAR_9[0] == '#' && VAR_9[1] == '\0') {
        FUNC_4(VAR_4);
        return VAR_4;
    }




    VAR_4 = FUNC_2(VAR_4);
    VAR_10 = VAR_4->ptr;



    VAR_6 = FUNC_9(VAR_9,'*');
    if (!VAR_6) {
        FUNC_1(VAR_4);
        return ((void*)0);
    }


    if ((VAR_7 = FUNC_10(VAR_6+1, "->")) != ((void*)0) && *(VAR_7+2) != '\0') {
        VAR_17 = FUNC_8(VAR_9)-(VAR_7-VAR_9)-2;
        VAR_12 = FUNC_0(VAR_7+2,VAR_17);
    } else {
        VAR_17 = 0;
    }


    VAR_14 = VAR_6-VAR_9;
    VAR_15 = FUNC_8(VAR_10);
    VAR_16 = FUNC_8(VAR_9)-(VAR_14+1)-(VAR_17 ? VAR_17+2 : 0);
    VAR_11 = FUNC_0(((void*)0),VAR_14+VAR_15+VAR_16);
    VAR_8 = VAR_11->ptr;
    FUNC_7(VAR_8,VAR_9,VAR_14);
    FUNC_7(VAR_8+VAR_14,VAR_10,VAR_15);
    FUNC_7(VAR_8+VAR_14+VAR_15,VAR_6+1,VAR_16);
    FUNC_1(VAR_4);


    if (!VAR_5)
        VAR_13 = FUNC_5(VAR_2,VAR_11);
    else
        VAR_13 = FUNC_6(VAR_2,VAR_11);
    if (VAR_13 == ((void*)0)) goto noobj;

    if (VAR_12) {
        if (VAR_13->type != VAR_0) goto noobj;



        VAR_13 = FUNC_3(VAR_13, VAR_12->ptr);
    } else {
        if (VAR_13->type != VAR_1) goto noobj;



        FUNC_4(VAR_13);
    }
    FUNC_1(VAR_11);
    if (VAR_12) FUNC_1(VAR_12);
    return VAR_13;

noobj:
    FUNC_1(VAR_11);
    if (VAR_17) FUNC_1(VAR_12);
    return ((void*)0);
}
