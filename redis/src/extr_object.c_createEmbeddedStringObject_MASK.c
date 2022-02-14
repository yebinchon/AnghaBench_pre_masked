
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdshdr8 {size_t len; size_t alloc; char* buf; int flags; } ;
struct TYPE_5__ {int refcount; int lru; struct sdshdr8* ptr; int encoding; int type; } ;
typedef TYPE_1__ robj ;
struct TYPE_6__ {int maxmemory_policy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,int ,size_t) ;
 TYPE_3__ VAR_6 ;
 TYPE_1__* FUNC_4 (int) ;

robj *FUNC_5(const char *VAR_7, size_t VAR_8) {
    robj *VAR_9 = FUNC_4(sizeof(robj)+sizeof(struct sdshdr8)+VAR_8+1);
    struct sdshdr8 *VAR_10 = (void*)(VAR_9+1);

    VAR_9->type = VAR_3;
    VAR_9->encoding = VAR_2;
    VAR_9->ptr = VAR_10+1;
    VAR_9->refcount = 1;
    if (VAR_6.maxmemory_policy & VAR_1) {
        VAR_9->lru = (FUNC_0()<<8) | VAR_0;
    } else {
        VAR_9->lru = FUNC_1();
    }

    VAR_10->len = VAR_8;
    VAR_10->alloc = VAR_8;
    VAR_10->flags = VAR_5;
    if (VAR_7 == VAR_4)
        VAR_10->buf[VAR_8] = '\0';
    else if (VAR_7) {
        FUNC_2(VAR_10->buf,VAR_7,VAR_8);
        VAR_10->buf[VAR_8] = '\0';
    } else {
        FUNC_3(VAR_10->buf,0,VAR_8+1);
    }
    return VAR_9;
}
