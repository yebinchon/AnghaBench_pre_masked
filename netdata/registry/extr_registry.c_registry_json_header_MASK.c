
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_8__ {int contenttype; } ;
struct TYPE_7__ {int machine_guid; int registry_hostname; } ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char*,char const*,char const*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(RRDHOST *VAR_1, struct web_client *VAR_2, const char *VAR_3, const char *VAR_4) {
    FUNC_0(VAR_2->response.data);
    VAR_2->response.data->contenttype = VAR_0;
    FUNC_1(VAR_2->response.data, "{\n\t\"action\": \"%s\",\n\t\"status\": \"%s\",\n\t\"hostname\": \"%s\",\n\t\"machine_guid\": \"%s\"",
            VAR_3, VAR_4, VAR_1->registry_hostname, VAR_1->machine_guid);
}
