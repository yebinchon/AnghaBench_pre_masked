
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ hashTypeIterator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,unsigned char**,unsigned int*,long long*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

void FUNC_4(hashTypeIterator *VAR_2, int VAR_3, unsigned char **VAR_4, unsigned int *VAR_5, long long *VAR_6) {
    if (VAR_2->encoding == VAR_1) {
        *VAR_4 = ((void*)0);
        FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    } else if (VAR_2->encoding == VAR_0) {
        sds VAR_7 = FUNC_0(VAR_2, VAR_3);
        *VAR_4 = (unsigned char*) VAR_7;
        *VAR_5 = FUNC_2(VAR_7);
    } else {
        FUNC_3("Unknown hash encoding");
    }
}
