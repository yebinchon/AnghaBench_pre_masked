
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t ridx; char* buf; int pos; int len; void* reply; TYPE_1__* fn; TYPE_3__* rstack; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_3__ redisReadTask ;
struct TYPE_10__ {void* (* createString ) (TYPE_3__*,char*,long long) ;void* (* createNil ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,unsigned long,long long*) ;
 void* FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (TYPE_3__*,char*,long long) ;

__attribute__((used)) static int FUNC_7(redisReader *VAR_7) {
    redisReadTask *VAR_8 = &(VAR_7->rstack[VAR_7->ridx]);
    void *VAR_9 = ((void*)0);
    char *VAR_10, *VAR_11;
    long long VAR_12;
    unsigned long VAR_13;
    int VAR_14 = 0;

    VAR_10 = VAR_7->buf+VAR_7->pos;
    VAR_11 = FUNC_3(VAR_10,VAR_7->len-VAR_7->pos);
    if (VAR_11 != ((void*)0)) {
        VAR_10 = VAR_7->buf+VAR_7->pos;
        VAR_13 = VAR_11-(VAR_7->buf+VAR_7->pos)+2;

        if (FUNC_4(VAR_10, VAR_13 - 2, &VAR_12) == VAR_1) {
            FUNC_0(VAR_7,VAR_2,
                    "Bad bulk string length");
            return VAR_1;
        }

        if (VAR_12 < -1 || (VAR_0 > VAR_6 && VAR_12 > (long long)VAR_6)) {
            FUNC_0(VAR_7,VAR_2,
                    "Bulk string length out of range");
            return VAR_1;
        }

        if (VAR_12 == -1) {

            if (VAR_7->fn && VAR_7->fn->createNil)
                VAR_9 = VAR_7->fn->createNil(VAR_8);
            else
                VAR_9 = (void*)VAR_4;
            VAR_14 = 1;
        } else {

            VAR_13 += VAR_12+2;
            if (VAR_7->pos+VAR_13 <= VAR_7->len) {
                if ((VAR_8->type == VAR_5 && VAR_12 < 4) ||
                    (VAR_8->type == VAR_5 && VAR_11[5] != ':'))
                {
                    FUNC_0(VAR_7,VAR_2,
                            "Verbatim string 4 bytes of content type are "
                            "missing or incorrectly encoded.");
                    return VAR_1;
                }
                if (VAR_7->fn && VAR_7->fn->createString)
                    VAR_9 = VAR_7->fn->createString(VAR_8,VAR_11+2,VAR_12);
                else
                    VAR_9 = (void*)(long)VAR_8->type;
                VAR_14 = 1;
            }
        }


        if (VAR_14) {
            if (VAR_9 == ((void*)0)) {
                FUNC_1(VAR_7);
                return VAR_1;
            }

            VAR_7->pos += VAR_13;


            if (VAR_7->ridx == 0) VAR_7->reply = VAR_9;
            FUNC_2(VAR_7);
            return VAR_3;
        }
    }

    return VAR_1;
}
