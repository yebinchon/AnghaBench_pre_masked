
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ quicklist ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,unsigned char**,unsigned int*,long long*,int ) ;

int FUNC_1(quicklist *VAR_1, int VAR_2, unsigned char **VAR_3,
                 unsigned int *VAR_4, long long *VAR_5) {
    unsigned char *VAR_6;
    unsigned int VAR_7;
    long long VAR_8;
    if (VAR_1->count == 0)
        return 0;
    int VAR_9 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_7, &VAR_8,
                                 VAR_0);
    if (VAR_3)
        *VAR_3 = VAR_6;
    if (VAR_5)
        *VAR_5 = VAR_8;
    if (VAR_4)
        *VAR_4 = VAR_7;
    return VAR_9;
}
