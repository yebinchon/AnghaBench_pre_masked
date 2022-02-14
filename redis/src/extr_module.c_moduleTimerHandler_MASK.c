
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void aeEventLoop ;
struct TYPE_12__ {int key_len; scalar_t__ key; TYPE_2__* data; } ;
typedef TYPE_1__ raxIterator ;
typedef int expiretime ;
struct TYPE_14__ {int client; int module; } ;
struct TYPE_13__ {int data; int (* callback ) (TYPE_3__*,int ) ;int dbid; int module; } ;
typedef TYPE_2__ RedisModuleTimer ;
typedef TYPE_3__ RedisModuleCtx ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,unsigned char*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char*,int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (TYPE_2__*) ;

int FUNC_14(struct aeEventLoop *VAR_4, long long VAR_5, void *VAR_6) {
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);


    raxIterator VAR_7;
    FUNC_8(&VAR_7,VAR_2);
    uint64_t VAR_8 = FUNC_12();
    long long VAR_9 = 0;
    while(1) {
        FUNC_6(&VAR_7,"^",((void*)0),0);
        if (!FUNC_4(&VAR_7)) break;
        uint64_t VAR_10;
        FUNC_1(&VAR_10,VAR_7.key,sizeof(VAR_10));
        VAR_10 = FUNC_3(VAR_10);
        if (VAR_8 >= VAR_10) {
            RedisModuleTimer *VAR_11 = VAR_7.data;
            RedisModuleCtx VAR_12 = VAR_1;

            VAR_12.module = VAR_11->module;
            VAR_12.client = VAR_3;
            FUNC_10(VAR_12.client, VAR_11->dbid);
            VAR_11->callback(&VAR_12,VAR_11->data);
            FUNC_2(&VAR_12);
            FUNC_5(VAR_2,(unsigned char*)VAR_7.key,VAR_7.key_len,((void*)0));
            FUNC_13(VAR_11);
        } else {
            VAR_9 = (VAR_10-VAR_8)/1000;
            break;
        }
    }
    FUNC_9(&VAR_7);


    if (VAR_9 <= 0) VAR_9 = 1;
    return (FUNC_7(VAR_2) > 0) ? VAR_9 : VAR_0;
}
