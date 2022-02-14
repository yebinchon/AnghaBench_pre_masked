
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ encoding; int * ptr; } ;
typedef TYPE_1__ robj ;
typedef int rio ;
typedef int quicklistIter ;
struct TYPE_9__ {int sz; int longval; scalar_t__ value; } ;
typedef TYPE_2__ quicklistEntry ;
typedef int quicklist ;


 int VAR_0 ;
 long long VAR_1 ;
 scalar_t__ VAR_2 ;
 long long FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(rio *VAR_3, robj *VAR_4, robj *VAR_5) {
    long long VAR_6 = 0, VAR_7 = FUNC_0(VAR_5);

    if (VAR_5->encoding == VAR_2) {
        quicklist *VAR_8 = VAR_5->ptr;
        quicklistIter *VAR_9 = FUNC_1(VAR_8, VAR_0);
        quicklistEntry VAR_10;

        while (FUNC_2(VAR_9,&VAR_10)) {
            if (VAR_6 == 0) {
                int VAR_11 = (VAR_7 > VAR_1) ?
                    VAR_1 : VAR_7;
                if (FUNC_4(VAR_3,'*',2+VAR_11) == 0) return 0;
                if (FUNC_7(VAR_3,"RPUSH",5) == 0) return 0;
                if (FUNC_6(VAR_3,VAR_4) == 0) return 0;
            }

            if (VAR_10.value) {
                if (FUNC_7(VAR_3,(char*)VAR_10.value,VAR_10.sz) == 0) return 0;
            } else {
                if (FUNC_5(VAR_3,VAR_10.longval) == 0) return 0;
            }
            if (++VAR_6 == VAR_1) VAR_6 = 0;
            VAR_7--;
        }
        FUNC_3(VAR_9);
    } else {
        FUNC_8("Unknown list encoding");
    }
    return 1;
}
