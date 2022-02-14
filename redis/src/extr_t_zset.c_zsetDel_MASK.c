
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dict; int zsl; } ;
typedef TYPE_1__ zset ;
typedef int sds ;
struct TYPE_8__ {scalar_t__ encoding; TYPE_1__* ptr; } ;
typedef TYPE_2__ robj ;
typedef int dictEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,double,int ,int *) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,unsigned char*) ;
 unsigned char* FUNC_9 (TYPE_1__*,int ,int *) ;

int FUNC_10(robj *VAR_2, sds VAR_3) {
    if (VAR_2->encoding == VAR_1) {
        unsigned char *VAR_4;

        if ((VAR_4 = FUNC_9(VAR_2->ptr,VAR_3,((void*)0))) != ((void*)0)) {
            VAR_2->ptr = FUNC_8(VAR_2->ptr,VAR_4);
            return 1;
        }
    } else if (VAR_2->encoding == VAR_0) {
        zset *VAR_5 = VAR_2->ptr;
        dictEntry *VAR_6;
        double VAR_7;

        VAR_6 = FUNC_3(VAR_5->dict,VAR_3);
        if (VAR_6 != ((void*)0)) {

            VAR_7 = *(double*)FUNC_1(VAR_6);






            FUNC_0(VAR_5->dict,VAR_6);


            int VAR_8 = FUNC_7(VAR_5->zsl,VAR_7,VAR_3,((void*)0));
            FUNC_5(VAR_8);

            if (FUNC_4(VAR_5->dict)) FUNC_2(VAR_5->dict);
            return 1;
        }
    } else {
        FUNC_6("Unknown sorted set encoding");
    }
    return 0;
}
