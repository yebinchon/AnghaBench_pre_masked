
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* sds ;
typedef int rio ;
struct TYPE_5__ {scalar_t__ encoding; } ;
typedef TYPE_1__ hashTypeIterator ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,unsigned char**,unsigned int*,long long*) ;
 int FUNC_2 (int *,long long) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 unsigned int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(rio *VAR_4, hashTypeIterator *VAR_5, int VAR_6) {
    if (VAR_5->encoding == VAR_2) {
        unsigned char *VAR_7 = ((void*)0);
        unsigned int VAR_8 = VAR_3;
        long long VAR_9 = VAR_0;

        FUNC_1(VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9);
        if (VAR_7)
            return FUNC_3(VAR_4, (char*)VAR_7, VAR_8);
        else
            return FUNC_2(VAR_4, VAR_9);
    } else if (VAR_5->encoding == VAR_1) {
        sds VAR_10 = FUNC_0(VAR_5, VAR_6);
        return FUNC_3(VAR_4, VAR_10, FUNC_4(VAR_10));
    }

    FUNC_5("Unknown hash encoding");
    return 0;
}
