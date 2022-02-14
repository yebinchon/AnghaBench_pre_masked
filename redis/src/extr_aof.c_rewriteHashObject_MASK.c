
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int rio ;
typedef int hashTypeIterator ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 long long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;

int FUNC_8(rio *VAR_4, robj *VAR_5, robj *VAR_6) {
    hashTypeIterator *VAR_7;
    long long VAR_8 = 0, VAR_9 = FUNC_1(VAR_6);

    VAR_7 = FUNC_0(VAR_6);
    while (FUNC_2(VAR_7) != VAR_1) {
        if (VAR_8 == 0) {
            int VAR_10 = (VAR_9 > VAR_0) ?
                VAR_0 : VAR_9;

            if (FUNC_4(VAR_4,'*',2+VAR_10*2) == 0) return 0;
            if (FUNC_6(VAR_4,"HMSET",5) == 0) return 0;
            if (FUNC_5(VAR_4,VAR_5) == 0) return 0;
        }

        if (FUNC_7(VAR_4, VAR_7, VAR_2) == 0) return 0;
        if (FUNC_7(VAR_4, VAR_7, VAR_3) == 0) return 0;
        if (++VAR_8 == VAR_0) VAR_8 = 0;
        VAR_9--;
    }

    FUNC_3(VAR_7);

    return 1;
}
