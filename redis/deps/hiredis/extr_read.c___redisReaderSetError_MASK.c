
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ridx; int err; char* errstr; int len; int pos; int * buf; int * reply; TYPE_1__* fn; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_4__ {int (* freeObject ) (int *) ;} ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(redisReader *VAR_0, int VAR_1, const char *VAR_2) {
    size_t VAR_3;

    if (VAR_0->reply != ((void*)0) && VAR_0->fn && VAR_0->fn->freeObject) {
        VAR_0->fn->freeObject(VAR_0->reply);
        VAR_0->reply = ((void*)0);
    }


    FUNC_1(VAR_0->buf);
    VAR_0->buf = ((void*)0);
    VAR_0->pos = VAR_0->len = 0;


    VAR_0->ridx = -1;


    VAR_0->err = VAR_1;
    VAR_3 = FUNC_2(VAR_2);
    VAR_3 = VAR_3 < (sizeof(VAR_0->errstr)-1) ? VAR_3 : (sizeof(VAR_0->errstr)-1);
    FUNC_0(VAR_0->errstr,VAR_2,VAR_3);
    VAR_0->errstr[VAR_3] = '\0';
}
