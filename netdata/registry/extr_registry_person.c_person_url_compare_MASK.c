
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {TYPE_1__* url; } ;
struct TYPE_3__ {scalar_t__ hash; int url; } ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void *VAR_0, void *VAR_1) {
    register uint32_t VAR_2 = ((REGISTRY_PERSON_URL *)VAR_0)->url->hash;
    register uint32_t VAR_3 = ((REGISTRY_PERSON_URL *)VAR_1)->url->hash;

    if(VAR_2 < VAR_3) return -1;
    else if(VAR_2 > VAR_3) return 1;
    else return FUNC_0(((REGISTRY_PERSON_URL *)VAR_0)->url->url, ((REGISTRY_PERSON_URL *)VAR_1)->url->url);
}
