
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {int encoding; int ptr; } ;
typedef TYPE_1__ robj ;
typedef int hashTypeIterator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(robj *VAR_9, int VAR_10) {
    FUNC_6(VAR_9->encoding == VAR_4);

    if (VAR_10 == VAR_4) {


    } else if (VAR_10 == VAR_3) {
        hashTypeIterator *VAR_11;
        VAR_7 *VAR_7;
        int VAR_12;

        VAR_11 = FUNC_3(VAR_9);
        VAR_7 = FUNC_1(&VAR_8, ((void*)0));

        while (FUNC_4(VAR_11) != VAR_0) {
            sds VAR_13, VAR_14;

            VAR_13 = FUNC_2(VAR_11,VAR_5);
            VAR_14 = FUNC_2(VAR_11,VAR_6);
            VAR_12 = FUNC_0(VAR_7, VAR_13, VAR_14);
            if (VAR_12 != VAR_1) {
                FUNC_7(VAR_2,"ziplist with dup elements dump",
                    VAR_9->ptr,FUNC_10(VAR_9->ptr));
                FUNC_8("Ziplist corruption detected");
            }
        }
        FUNC_5(VAR_11);
        FUNC_9(VAR_9->ptr);
        VAR_9->encoding = VAR_3;
        VAR_9->ptr = VAR_7;
    } else {
        FUNC_8("Unknown hash encoding");
    }
}
