
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; } ;
struct TYPE_5__ {char* proto; int protolen; long long len; int type; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int,long long*) ;

void FUNC_2(RedisModuleCallReply *VAR_2) {
    char *VAR_3 = VAR_2->proto;
    char *VAR_4 = FUNC_0(VAR_3+1,'\r');
    long long VAR_5;

    FUNC_1(VAR_3+1,VAR_4-VAR_3-1,&VAR_5);
    if (VAR_5 == -1) {
        VAR_2->protolen = VAR_4-VAR_3+2;
        VAR_2->type = VAR_0;
    } else {
        VAR_2->val.str = VAR_4+2;
        VAR_2->len = VAR_5;
        VAR_2->protolen = VAR_4-VAR_3+2+VAR_5+2;
        VAR_2->type = VAR_1;
    }
}
