
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int offset; int current; int * zi; } ;
typedef TYPE_1__ quicklistIter ;
struct TYPE_7__ {int offset; int node; } ;
typedef TYPE_2__ quicklistEntry ;
typedef int quicklist ;


 TYPE_1__* FUNC_0 (int const*,int const) ;
 scalar_t__ FUNC_1 (int const*,long long const,TYPE_2__*) ;

quicklistIter *FUNC_2(const quicklist *VAR_0,
                                         const int VAR_1,
                                         const long long VAR_2) {
    quicklistEntry VAR_3;

    if (FUNC_1(VAR_0, VAR_2, &VAR_3)) {
        quicklistIter *VAR_4 = FUNC_0(VAR_0, VAR_1);
        VAR_4->zi = ((void*)0);
        VAR_4->current = VAR_3.node;
        VAR_4->offset = VAR_3.offset;
        return VAR_4;
    } else {
        return ((void*)0);
    }
}
