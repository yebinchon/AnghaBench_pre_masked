
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ll; } ;
struct TYPE_5__ {char* proto; int protolen; int type; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int,int *) ;

void FUNC_2(RedisModuleCallReply *VAR_1) {
    char *VAR_2 = VAR_1->proto;
    char *VAR_3 = FUNC_0(VAR_2+1,'\r');

    FUNC_1(VAR_2+1,VAR_3-VAR_2-1,&VAR_1->val.ll);
    VAR_1->protolen = VAR_3-VAR_2+2;
    VAR_1->type = VAR_0;
}
