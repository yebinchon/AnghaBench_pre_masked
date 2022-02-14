
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int person_urls; int guid; } ;
struct TYPE_7__ {TYPE_1__* url; } ;
struct TYPE_6__ {int url; int hash; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*) ;
 int FUNC_1 (int ,char*,int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;

inline REGISTRY_PERSON_URL *FUNC_5(REGISTRY_PERSON *VAR_1, const char *VAR_2) {
    FUNC_1(VAR_0, "Registry: registry_person_url_index_find('%s', '%s')", VAR_1->guid, VAR_2);

    char VAR_3[sizeof(REGISTRY_URL) + FUNC_4(VAR_2)];

    REGISTRY_URL *VAR_4 = (REGISTRY_URL *)&VAR_3;
    FUNC_3(VAR_4->url, VAR_2);
    VAR_4->hash = FUNC_2(VAR_4->url);

    REGISTRY_PERSON_URL VAR_5 = { .url = VAR_4 };

    REGISTRY_PERSON_URL *VAR_6 = (REGISTRY_PERSON_URL *)FUNC_0(&VAR_1->person_urls, (void *)&VAR_5);
    return VAR_6;
}
