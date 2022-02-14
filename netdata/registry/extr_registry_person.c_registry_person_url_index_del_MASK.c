
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int avl ;
struct TYPE_9__ {int guid; int person_urls; } ;
struct TYPE_8__ {TYPE_1__* url; } ;
struct TYPE_7__ {char* url; } ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (char*,int ,char*,...) ;

inline REGISTRY_PERSON_URL *FUNC_3(REGISTRY_PERSON *VAR_1, REGISTRY_PERSON_URL *VAR_2) {
    FUNC_1(VAR_0, "Registry: registry_person_url_index_del('%s', '%s')", VAR_1->guid, VAR_2->url->url);
    REGISTRY_PERSON_URL *VAR_3 = (REGISTRY_PERSON_URL *)FUNC_0(&(VAR_1->person_urls), (avl *)(VAR_2));
    if(!VAR_3)
        FUNC_2("Registry: registry_person_url_index_del('%s', '%s') deleted nothing", VAR_1->guid, VAR_2->url->url);
    else if(VAR_3 != VAR_2)
        FUNC_2("Registry: registry_person_url_index_del('%s', '%s') deleted wrong URL '%s'", VAR_1->guid, VAR_2->url->url, VAR_3->url->url);

    return VAR_3;
}
