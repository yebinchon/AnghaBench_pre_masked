
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_6__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
typedef int rio ;
typedef int int64_t ;
typedef int dictIterator ;
typedef int dictEntry ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int *,char,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 long long FUNC_11 (TYPE_1__*) ;

int FUNC_12(rio *VAR_3, robj *VAR_4, robj *VAR_5) {
    long long VAR_6 = 0, VAR_7 = FUNC_11(VAR_5);

    if (VAR_5->encoding == VAR_2) {
        int VAR_8 = 0;
        int64_t VAR_9;

        while(FUNC_4(VAR_5->ptr,VAR_8++,&VAR_9)) {
            if (VAR_6 == 0) {
                int VAR_10 = (VAR_7 > VAR_0) ?
                    VAR_0 : VAR_7;

                if (FUNC_5(VAR_3,'*',2+VAR_10) == 0) return 0;
                if (FUNC_8(VAR_3,"SADD",4) == 0) return 0;
                if (FUNC_7(VAR_3,VAR_4) == 0) return 0;
            }
            if (FUNC_6(VAR_3,VAR_9) == 0) return 0;
            if (++VAR_6 == VAR_0) VAR_6 = 0;
            VAR_7--;
        }
    } else if (VAR_5->encoding == VAR_1) {
        dictIterator *VAR_11 = FUNC_0(VAR_5->ptr);
        dictEntry *VAR_12;

        while((VAR_12 = FUNC_2(VAR_11)) != ((void*)0)) {
            sds VAR_13 = FUNC_1(VAR_12);
            if (VAR_6 == 0) {
                int VAR_14 = (VAR_7 > VAR_0) ?
                    VAR_0 : VAR_7;

                if (FUNC_5(VAR_3,'*',2+VAR_14) == 0) return 0;
                if (FUNC_8(VAR_3,"SADD",4) == 0) return 0;
                if (FUNC_7(VAR_3,VAR_4) == 0) return 0;
            }
            if (FUNC_8(VAR_3,VAR_13,FUNC_9(VAR_13)) == 0) return 0;
            if (++VAR_6 == VAR_0) VAR_6 = 0;
            VAR_7--;
        }
        FUNC_3(VAR_11);
    } else {
        FUNC_10("Unknown set encoding");
    }
    return 1;
}
