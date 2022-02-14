
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int sds ;
struct TYPE_5__ {scalar_t__ encoding; int * ptr; } ;
typedef TYPE_1__ robj ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_6__ {scalar_t__ set_max_intset_entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int *,long long,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,long long*) ;
 int FUNC_7 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;

int FUNC_11(robj *VAR_5, sds VAR_6) {
    long long VAR_7;
    if (VAR_5->encoding == VAR_2) {
        dict *VAR_8 = VAR_5->ptr;
        dictEntry *VAR_9 = FUNC_1(VAR_8,VAR_6,((void*)0));
        if (VAR_9) {
            FUNC_2(VAR_8,VAR_9,FUNC_7(VAR_6));
            FUNC_3(VAR_8,VAR_9,((void*)0));
            return 1;
        }
    } else if (VAR_5->encoding == VAR_3) {
        if (FUNC_6(VAR_6,&VAR_7) == VAR_0) {
            uint8_t VAR_10 = 0;
            VAR_5->ptr = FUNC_4(VAR_5->ptr,VAR_7,&VAR_10);
            if (VAR_10) {


                if (FUNC_5(VAR_5->ptr) > VAR_4.set_max_intset_entries)
                    FUNC_10(VAR_5,VAR_2);
                return 1;
            }
        } else {

            FUNC_10(VAR_5,VAR_2);



            FUNC_8(FUNC_0(VAR_5->ptr,FUNC_7(VAR_6),((void*)0)) == VAR_1);
            return 1;
        }
    } else {
        FUNC_9("Unknown set encoding");
    }
    return 0;
}
