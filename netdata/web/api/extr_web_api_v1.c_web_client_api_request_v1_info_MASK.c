
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_18__ {int contenttype; } ;
struct TYPE_17__ {char* program_version; char* machine_guid; TYPE_2__* system_info; } ;
struct TYPE_16__ {char* os_name; char* os_id; char* os_id_like; char* os_version; char* os_version_id; char* os_detection; char* kernel_name; char* kernel_version; char* architecture; char* virtualization; char* virt_detection; char* container; char* container_detection; } ;
typedef TYPE_3__ RRDHOST ;
typedef TYPE_4__ BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;

inline int FUNC_7(RRDHOST *VAR_4, struct web_client *VAR_5, char *VAR_6) {
    (void)VAR_6;
    if (!VAR_3) return VAR_1;

    BUFFER *VAR_7 = VAR_5->response.data;
    FUNC_0(VAR_7);
    VAR_7->contenttype = VAR_0;

    FUNC_3(VAR_7, "{\n");
    FUNC_2(VAR_7, "\t\"version\": \"%s\",\n", VAR_4->program_version);
    FUNC_2(VAR_7, "\t\"uid\": \"%s\",\n", VAR_4->machine_guid);

    FUNC_3(VAR_7, "\t\"mirrored_hosts\": [\n");
    FUNC_5(VAR_7);
    FUNC_3(VAR_7, "\t],\n");

    FUNC_3(VAR_7, "\t\"alarms\": {\n");
    FUNC_6(VAR_4, VAR_7);
    FUNC_3(VAR_7, "\t},\n");

    FUNC_2(VAR_7, "\t\"os_name\": %s,\n", (VAR_4->system_info->os_name) ? VAR_4->system_info->os_name : "\"\"");
    FUNC_2(VAR_7, "\t\"os_id\": \"%s\",\n", (VAR_4->system_info->os_id) ? VAR_4->system_info->os_id : "");
    FUNC_2(VAR_7, "\t\"os_id_like\": \"%s\",\n", (VAR_4->system_info->os_id_like) ? VAR_4->system_info->os_id_like : "");
    FUNC_2(VAR_7, "\t\"os_version\": \"%s\",\n", (VAR_4->system_info->os_version) ? VAR_4->system_info->os_version : "");
    FUNC_2(VAR_7, "\t\"os_version_id\": \"%s\",\n", (VAR_4->system_info->os_version_id) ? VAR_4->system_info->os_version_id : "");
    FUNC_2(VAR_7, "\t\"os_detection\": \"%s\",\n", (VAR_4->system_info->os_detection) ? VAR_4->system_info->os_detection : "");
    FUNC_2(VAR_7, "\t\"kernel_name\": \"%s\",\n", (VAR_4->system_info->kernel_name) ? VAR_4->system_info->kernel_name : "");
    FUNC_2(VAR_7, "\t\"kernel_version\": \"%s\",\n", (VAR_4->system_info->kernel_version) ? VAR_4->system_info->kernel_version : "");
    FUNC_2(VAR_7, "\t\"architecture\": \"%s\",\n", (VAR_4->system_info->architecture) ? VAR_4->system_info->architecture : "");
    FUNC_2(VAR_7, "\t\"virtualization\": \"%s\",\n", (VAR_4->system_info->virtualization) ? VAR_4->system_info->virtualization : "");
    FUNC_2(VAR_7, "\t\"virt_detection\": \"%s\",\n", (VAR_4->system_info->virt_detection) ? VAR_4->system_info->virt_detection : "");
    FUNC_2(VAR_7, "\t\"container\": \"%s\",\n", (VAR_4->system_info->container) ? VAR_4->system_info->container : "");
    FUNC_2(VAR_7, "\t\"container_detection\": \"%s\",\n", (VAR_4->system_info->container_detection) ? VAR_4->system_info->container_detection : "");

    FUNC_3(VAR_7, "\t\"collectors\": [");
    FUNC_4(VAR_4, VAR_7);
    FUNC_3(VAR_7, "\n\t]\n");

    FUNC_3(VAR_7, "}");
    FUNC_1(VAR_7);
    return VAR_2;
}
