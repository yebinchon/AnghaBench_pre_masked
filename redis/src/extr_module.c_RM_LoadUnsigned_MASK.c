
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int ver; int rio; scalar_t__ error; } ;
typedef TYPE_1__ RedisModuleIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,scalar_t__*) ;

uint64_t FUNC_3(RedisModuleIO *VAR_1) {
    if (VAR_1->error) return 0;
    if (VAR_1->ver == 2) {
        uint64_t VAR_2 = FUNC_1(VAR_1->rio,((void*)0));
        if (VAR_2 != VAR_0) goto loaderr;
    }
    uint64_t VAR_3;
    int VAR_4 = FUNC_2(VAR_1->rio, ((void*)0), &VAR_3);
    if (VAR_4 == -1) goto loaderr;
    return VAR_3;

loaderr:
    FUNC_0(VAR_1);
    return 0;
}
