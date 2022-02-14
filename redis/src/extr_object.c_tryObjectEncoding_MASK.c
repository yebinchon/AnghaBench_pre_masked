
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* sds ;
struct TYPE_13__ {scalar_t__ type; int refcount; scalar_t__ encoding; void* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_15__ {scalar_t__ maxmemory; int maxmemory_policy; } ;
struct TYPE_14__ {TYPE_1__** integers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_0 (void*,size_t) ;
 TYPE_1__* FUNC_1 (long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*) ;
 size_t FUNC_6 (void*) ;
 TYPE_7__ VAR_7 ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 TYPE_5__ VAR_8 ;
 scalar_t__ FUNC_8 (void*,size_t,long*) ;
 int FUNC_9 (TYPE_1__*) ;

robj *FUNC_10(robj *VAR_9) {
    long VAR_10;
    sds VAR_11 = VAR_9->ptr;
    size_t VAR_12;





    FUNC_7(((void*)0),VAR_9,VAR_9->type == VAR_6);




    if (!FUNC_4(VAR_9)) return VAR_9;




     if (VAR_9->refcount > 1) return VAR_9;




    VAR_12 = FUNC_6(VAR_11);
    if (VAR_12 <= 20 && FUNC_8(VAR_11,VAR_12,&VAR_10)) {




        if ((VAR_7.maxmemory == 0 ||
            !(VAR_7.maxmemory_policy & VAR_0)) &&
            VAR_10 >= 0 &&
            VAR_10 < VAR_5)
        {
            FUNC_2(VAR_9);
            FUNC_3(VAR_8.integers[VAR_10]);
            return VAR_8.integers[VAR_10];
        } else {
            if (VAR_9->encoding == VAR_4) {
                FUNC_5(VAR_9->ptr);
                VAR_9->encoding = VAR_3;
                VAR_9->ptr = (void*) VAR_10;
                return VAR_9;
            } else if (VAR_9->encoding == VAR_1) {
                FUNC_2(VAR_9);
                return FUNC_1(VAR_10);
            }
        }
    }





    if (VAR_12 <= VAR_2) {
        robj *VAR_13;

        if (VAR_9->encoding == VAR_1) return VAR_9;
        VAR_13 = FUNC_0(VAR_11,FUNC_6(VAR_11));
        FUNC_2(VAR_9);
        return VAR_13;
    }
    FUNC_9(VAR_9);


    return VAR_9;
}
