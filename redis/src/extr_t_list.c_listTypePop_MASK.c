
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (long long) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,unsigned char**,int *,long long*,int ) ;
 int FUNC_2 (char*) ;

robj *FUNC_3(robj *VAR_5, int VAR_6) {
    long long VAR_7;
    robj *VAR_8 = ((void*)0);

    int VAR_9 = VAR_6 == VAR_0 ? VAR_2 : VAR_3;
    if (VAR_5->encoding == VAR_1) {
        if (FUNC_1(VAR_5->ptr, VAR_9, (unsigned char **)&VAR_8,
                               ((void*)0), &VAR_7, VAR_4)) {
            if (!VAR_8)
                VAR_8 = FUNC_0(VAR_7);
        }
    } else {
        FUNC_2("Unknown list encoding");
    }
    return VAR_8;
}
