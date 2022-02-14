
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int array; } ;
struct TYPE_6__ {char* proto; int protolen; long long len; int flags; int type; int ctx; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int,long long*) ;
 int FUNC_3 (int) ;

void FUNC_4(RedisModuleCallReply *VAR_4) {
    char *VAR_5 = VAR_4->proto;
    char *VAR_6 = FUNC_1(VAR_5+1,'\r');
    long long VAR_7, VAR_8;

    FUNC_2(VAR_5+1,VAR_6-VAR_5-1,&VAR_7);
    VAR_6 += 2;

    if (VAR_7 == -1) {
        VAR_4->protolen = VAR_6-VAR_5;
        VAR_4->type = VAR_3;
        return;
    }

    VAR_4->val.array = FUNC_3(sizeof(RedisModuleCallReply)*VAR_7);
    VAR_4->len = VAR_7;
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        RedisModuleCallReply *VAR_9 = VAR_4->val.array+VAR_8;
        VAR_9->flags = VAR_0 |
                     VAR_1;
        VAR_9->proto = VAR_6;
        VAR_9->ctx = VAR_4->ctx;
        FUNC_0(VAR_9);
        VAR_6 += VAR_9->protolen;
    }
    VAR_4->protolen = VAR_6-VAR_5;
    VAR_4->type = VAR_2;
}
