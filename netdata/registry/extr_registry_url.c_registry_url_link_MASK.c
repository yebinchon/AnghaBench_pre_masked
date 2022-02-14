
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int links; int url; } ;
typedef TYPE_1__ REGISTRY_URL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;

void FUNC_1(REGISTRY_URL *VAR_1) {
    VAR_1->links++;
    FUNC_0(VAR_0, "Registry: registry_url_link('%s'): URL has now %u links", VAR_1->url, VAR_1->links);
}
