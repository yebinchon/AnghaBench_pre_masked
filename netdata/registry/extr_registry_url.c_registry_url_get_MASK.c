
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int avl ;
struct TYPE_9__ {size_t max_url_length; int urls_memory; int urls_count; int registry_urls_root_index; } ;
struct TYPE_8__ {char* url; void* hash; scalar_t__ links; void* len; } ;
typedef TYPE_1__ REGISTRY_URL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_5__ VAR_1 ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,void*) ;

REGISTRY_URL *FUNC_8(const char *VAR_2, size_t VAR_3) {

    if(VAR_3 > VAR_1.max_url_length)
        VAR_3 = VAR_1.max_url_length;

    FUNC_2(VAR_0, "Registry: registry_url_get('%s', %zu)", VAR_2, VAR_3);

    char VAR_4[sizeof(REGISTRY_URL) + VAR_3];
    REGISTRY_URL *VAR_5 = (REGISTRY_URL *)&VAR_4[0];
    VAR_5->len = (uint16_t)VAR_3;
    FUNC_7(VAR_5->url, VAR_2, VAR_5->len);
    VAR_5->hash = FUNC_6(VAR_5->url);

    REGISTRY_URL *VAR_6 = (REGISTRY_URL *)FUNC_0(&(VAR_1.registry_urls_root_index), (avl *)VAR_5);
    if(!VAR_6) {
        FUNC_2(VAR_0, "Registry: registry_url_get('%s', %zu): allocating %zu bytes", VAR_2, VAR_3, sizeof(REGISTRY_URL) + VAR_3);
        VAR_6 = FUNC_1(1, sizeof(REGISTRY_URL) + VAR_3);



        VAR_6->len = (uint16_t)VAR_3;
        FUNC_7(VAR_6->url, VAR_2, VAR_6->len);
        VAR_6->links = 0;
        VAR_6->hash = FUNC_6(VAR_6->url);

        VAR_1.urls_memory += sizeof(REGISTRY_URL) + VAR_3;

        FUNC_2(VAR_0, "Registry: registry_url_get('%s'): indexing it", VAR_2);
        VAR_5 = FUNC_5(VAR_6);
        if(VAR_5 != VAR_6) {
            FUNC_3("INTERNAL ERROR: registry_url_get(): url '%s' already exists in the registry as '%s'", VAR_6->url, VAR_5->url);
            FUNC_4(VAR_6);
            VAR_6 = VAR_5;
        }
        else
            VAR_1.urls_count++;
    }

    return VAR_6;
}
