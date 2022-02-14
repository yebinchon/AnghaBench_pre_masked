
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {size_t ridx; void* reply; TYPE_1__* fn; TYPE_3__* rstack; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_16__ {scalar_t__ type; } ;
typedef TYPE_3__ redisReadTask ;
typedef int buf ;
struct TYPE_14__ {void* (* createString ) (TYPE_3__*,char*,int) ;void* (* createBool ) (TYPE_3__*,int) ;void* (* createNil ) (TYPE_3__*) ;void* (* createDouble ) (TYPE_3__*,double,char*,int) ;void* (* createInteger ) (TYPE_3__*,long long) ;} ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,int,long long*) ;
 double FUNC_8 (char*,char**) ;
 void* FUNC_9 (TYPE_3__*,long long) ;
 void* FUNC_10 (TYPE_3__*,double,char*,int) ;
 void* FUNC_11 (TYPE_3__*) ;
 void* FUNC_12 (TYPE_3__*,int) ;
 void* FUNC_13 (TYPE_3__*,char*,int) ;

__attribute__((used)) static int FUNC_14(redisReader *VAR_8) {
    redisReadTask *VAR_9 = &(VAR_8->rstack[VAR_8->ridx]);
    void *VAR_10;
    char *VAR_11;
    int VAR_12;

    if ((VAR_11 = FUNC_5(VAR_8,&VAR_12)) != ((void*)0)) {
        if (VAR_9->type == VAR_6) {
            if (VAR_8->fn && VAR_8->fn->createInteger) {
                long long VAR_13;
                if (FUNC_7(VAR_11, VAR_12, &VAR_13) == VAR_1) {
                    FUNC_0(VAR_8,VAR_2,
                            "Bad integer value");
                    return VAR_1;
                }
                VAR_10 = VAR_8->fn->createInteger(VAR_9,VAR_13);
            } else {
                VAR_10 = (void*)VAR_6;
            }
        } else if (VAR_9->type == VAR_5) {
            if (VAR_8->fn && VAR_8->fn->createDouble) {
                char VAR_14[326], *VAR_15;
                double VAR_16;

                if ((size_t)VAR_12 >= sizeof(VAR_14)) {
                    FUNC_0(VAR_8,VAR_2,
                            "Double value is too large");
                    return VAR_1;
                }

                FUNC_3(VAR_14,VAR_11,VAR_12);
                VAR_14[VAR_12] = '\0';

                if (FUNC_6(VAR_14,",inf") == 0) {
                    VAR_16 = VAR_0;
                } else if (FUNC_6(VAR_14,",-inf") == 0) {
                    VAR_16 = -VAR_0;
                } else {
                    VAR_16 = FUNC_8((char*)VAR_14,&VAR_15);
                    if (VAR_14[0] == '\0' || VAR_15[0] != '\0' || FUNC_2(VAR_16)) {
                        FUNC_0(VAR_8,VAR_2,
                                "Bad double value");
                        return VAR_1;
                    }
                }
                VAR_10 = VAR_8->fn->createDouble(VAR_9,VAR_16,VAR_14,VAR_12);
            } else {
                VAR_10 = (void*)VAR_5;
            }
        } else if (VAR_9->type == VAR_7) {
            if (VAR_8->fn && VAR_8->fn->createNil)
                VAR_10 = VAR_8->fn->createNil(VAR_9);
            else
                VAR_10 = (void*)VAR_7;
        } else if (VAR_9->type == VAR_4) {
            int VAR_17 = VAR_11[0] == 't' || VAR_11[0] == 'T';
            if (VAR_8->fn && VAR_8->fn->createBool)
                VAR_10 = VAR_8->fn->createBool(VAR_9,VAR_17);
            else
                VAR_10 = (void*)VAR_4;
        } else {

            if (VAR_8->fn && VAR_8->fn->createString)
                VAR_10 = VAR_8->fn->createString(VAR_9,VAR_11,VAR_12);
            else
                VAR_10 = (void*)(size_t)(VAR_9->type);
        }

        if (VAR_10 == ((void*)0)) {
            FUNC_1(VAR_8);
            return VAR_1;
        }


        if (VAR_8->ridx == 0) VAR_8->reply = VAR_10;
        FUNC_4(VAR_8);
        return VAR_3;
    }

    return VAR_1;
}
