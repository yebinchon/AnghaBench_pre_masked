
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int setTypeIterator ;
typedef int sds ;
struct TYPE_5__ {scalar_t__ type; int encoding; int * ptr; } ;
typedef TYPE_1__ robj ;
typedef int int64_t ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int * FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(robj *VAR_5, int VAR_6) {
    setTypeIterator *VAR_7;
    FUNC_6(((void*)0),VAR_5,VAR_5->type == VAR_3 &&
                             VAR_5->encoding == VAR_2);

    if (VAR_6 == VAR_1) {
        int64_t VAR_8;
        dict *VAR_9 = FUNC_1(&VAR_4,((void*)0));
        sds VAR_10;


        FUNC_2(VAR_9,FUNC_3(VAR_5->ptr));


        VAR_7 = FUNC_8(VAR_5);
        while (FUNC_9(VAR_7,&VAR_10,&VAR_8) != -1) {
            VAR_10 = FUNC_4(VAR_8);
            FUNC_5(FUNC_0(VAR_9,VAR_10,((void*)0)) == VAR_0);
        }
        FUNC_10(VAR_7);

        VAR_5->encoding = VAR_1;
        FUNC_11(VAR_5->ptr);
        VAR_5->ptr = VAR_9;
    } else {
        FUNC_7("Unsupported set conversion");
    }
}
