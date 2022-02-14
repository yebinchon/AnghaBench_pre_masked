
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ RedisModuleIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,size_t) ;
 size_t FUNC_1 (char*,int,long double,int ) ;

void FUNC_2(RedisModuleIO *VAR_2, long double VAR_3) {
    if (VAR_2->error) return;
    char VAR_4[VAR_1];


    size_t VAR_5 = FUNC_1(VAR_4,sizeof(VAR_4),VAR_3,VAR_0);
    FUNC_0(VAR_2,VAR_4,VAR_5+1);
}
