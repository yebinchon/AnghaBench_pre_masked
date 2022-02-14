
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash_family; int family; } ;
typedef TYPE_1__ RRDFAMILY ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    if(((RRDFAMILY *)VAR_0)->hash_family < ((RRDFAMILY *)VAR_1)->hash_family) return -1;
    else if(((RRDFAMILY *)VAR_0)->hash_family > ((RRDFAMILY *)VAR_1)->hash_family) return 1;
    else return FUNC_0(((RRDFAMILY *)VAR_0)->family, ((RRDFAMILY *)VAR_1)->family);
}
