
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int url; } ;
typedef TYPE_1__ REGISTRY_URL ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    if(((REGISTRY_URL *)VAR_0)->hash < ((REGISTRY_URL *)VAR_1)->hash) return -1;
    else if(((REGISTRY_URL *)VAR_0)->hash > ((REGISTRY_URL *)VAR_1)->hash) return 1;
    else return FUNC_0(((REGISTRY_URL *)VAR_0)->url, ((REGISTRY_URL *)VAR_1)->url);
}
