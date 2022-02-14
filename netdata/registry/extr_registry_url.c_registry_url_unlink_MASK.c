
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int urls_memory; } ;
struct TYPE_7__ {char* url; int links; scalar_t__ len; } ;
typedef TYPE_1__ REGISTRY_URL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_5__ VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

void FUNC_4(REGISTRY_URL *VAR_2) {
    VAR_2->links--;
    if(!VAR_2->links) {
        FUNC_0(VAR_0, "Registry: registry_url_unlink('%s'): No more links for this URL", VAR_2->url);
        REGISTRY_URL *VAR_3 = FUNC_3(VAR_2);
        if(!VAR_3) {
            FUNC_1("INTERNAL ERROR: registry_url_unlink('%s'): cannot find url in index", VAR_2->url);
        }
        else {
            if(VAR_3 != VAR_2) {
                FUNC_1("INTERNAL ERROR: registry_url_unlink('%s'): deleted different url '%s'", VAR_2->url, VAR_3->url);
            }

            VAR_1.urls_memory -= sizeof(REGISTRY_URL) + VAR_3->len;
            FUNC_2(VAR_3);
        }
    }
    else
        FUNC_0(VAR_0, "Registry: registry_url_unlink('%s'): URL has %u links left", VAR_2->url, VAR_2->links);
}
