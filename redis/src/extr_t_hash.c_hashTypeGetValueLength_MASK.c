
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int * FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,unsigned char**,unsigned int*,long long*) ;
 unsigned int FUNC_2 (long long) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

size_t FUNC_5(robj *VAR_4, sds VAR_5) {
    size_t VAR_6 = 0;
    if (VAR_4->encoding == VAR_2) {
        unsigned char *VAR_7 = ((void*)0);
        unsigned int VAR_8 = VAR_3;
        long long VAR_9 = VAR_0;

        if (FUNC_1(VAR_4, VAR_5, &VAR_7, &VAR_8, &VAR_9) == 0)
            VAR_6 = VAR_7 ? VAR_8 : FUNC_2(VAR_9);
    } else if (VAR_4->encoding == VAR_1) {
        sds VAR_10;

        if ((VAR_10 = FUNC_0(VAR_4, VAR_5)) != ((void*)0))
            VAR_6 = FUNC_3(VAR_10);
    } else {
        FUNC_4("Unknown hash encoding");
    }
    return VAR_6;
}
