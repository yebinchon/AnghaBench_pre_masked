
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int ver; int rio; scalar_t__ error; } ;
typedef TYPE_1__ RedisModuleIO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,int ,size_t*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void *FUNC_3(RedisModuleIO *VAR_3, int VAR_4, size_t *VAR_5) {
    if (VAR_3->error) return ((void*)0);
    if (VAR_3->ver == 2) {
        uint64_t VAR_6 = FUNC_2(VAR_3->rio,((void*)0));
        if (VAR_6 != VAR_2) goto loaderr;
    }
    void *VAR_7 = FUNC_1(VAR_3->rio,
              VAR_4 ? VAR_1 : VAR_0, VAR_5);
    if (VAR_7 == ((void*)0)) goto loaderr;
    return VAR_7;

loaderr:
    FUNC_0(VAR_3);
    return ((void*)0);
}
