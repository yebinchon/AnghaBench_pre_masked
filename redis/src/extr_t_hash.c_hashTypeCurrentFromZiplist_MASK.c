
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoding; int vptr; int fptr; } ;
typedef TYPE_1__ hashTypeIterator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char**,unsigned int*,long long*) ;

void FUNC_2(hashTypeIterator *VAR_2, int VAR_3,
                                unsigned char **VAR_4,
                                unsigned int *VAR_5,
                                long long *VAR_6)
{
    int VAR_7;

    FUNC_0(VAR_2->encoding == VAR_0);

    if (VAR_3 & VAR_1) {
        VAR_7 = FUNC_1(VAR_2->fptr, VAR_4, VAR_5, VAR_6);
        FUNC_0(VAR_7);
    } else {
        VAR_7 = FUNC_1(VAR_2->vptr, VAR_4, VAR_5, VAR_6);
        FUNC_0(VAR_7);
    }
}
