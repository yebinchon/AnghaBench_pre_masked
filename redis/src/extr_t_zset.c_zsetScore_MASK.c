
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dict; } ;
typedef TYPE_1__ zset ;
typedef int sds ;
struct TYPE_6__ {scalar_t__ encoding; TYPE_1__* ptr; } ;
typedef TYPE_2__ robj ;
typedef int dictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_1__*,int ,double*) ;

int FUNC_4(robj *VAR_4, sds VAR_5, double *VAR_6) {
    if (!VAR_4 || !VAR_5) return VAR_0;

    if (VAR_4->encoding == VAR_3) {
        if (FUNC_3(VAR_4->ptr, VAR_5, VAR_6) == ((void*)0)) return VAR_0;
    } else if (VAR_4->encoding == VAR_2) {
        zset *VAR_7 = VAR_4->ptr;
        dictEntry *VAR_8 = FUNC_0(VAR_7->dict, VAR_5);
        if (VAR_8 == ((void*)0)) return VAR_0;
        *VAR_6 = *(double*)FUNC_1(VAR_8);
    } else {
        FUNC_2("Unknown sorted set encoding");
    }
    return VAR_1;
}
