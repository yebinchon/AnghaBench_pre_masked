
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,unsigned char**,unsigned int*,long long*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

int FUNC_4(robj *VAR_4, sds VAR_5, unsigned char **VAR_6, unsigned int *VAR_7, long long *VAR_8) {
    if (VAR_4->encoding == VAR_3) {
        *VAR_6 = ((void*)0);
        if (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8) == 0)
            return VAR_1;
    } else if (VAR_4->encoding == VAR_2) {
        sds VAR_9;
        if ((VAR_9 = FUNC_0(VAR_4, VAR_5)) != ((void*)0)) {
            *VAR_6 = (unsigned char*) VAR_9;
            *VAR_7 = FUNC_2(VAR_9);
            return VAR_1;
        }
    } else {
        FUNC_3("Unknown hash encoding");
    }
    return VAR_0;
}
