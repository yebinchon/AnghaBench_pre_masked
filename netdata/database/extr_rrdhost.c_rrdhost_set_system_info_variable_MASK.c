
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdhost_system_info {void* container_detection; void* container; void* virt_detection; void* virtualization; void* architecture; void* kernel_version; void* kernel_name; void* os_detection; void* os_version_id; void* os_version; void* os_id_like; void* os_id; void* os_name; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*) ;

int FUNC_3(struct rrdhost_system_info *VAR_0, char *VAR_1, char *VAR_2) {
    int VAR_3 = 0;

    if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_NAME")){
        FUNC_0(VAR_0->os_name);
        VAR_0->os_name = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_ID")){
        FUNC_0(VAR_0->os_id);
        VAR_0->os_id = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_ID_LIKE")){
        FUNC_0(VAR_0->os_id_like);
        VAR_0->os_id_like = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_VERSION")){
        FUNC_0(VAR_0->os_version);
        VAR_0->os_version = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_VERSION_ID")){
        FUNC_0(VAR_0->os_version_id);
        VAR_0->os_version_id = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_OS_DETECTION")){
        FUNC_0(VAR_0->os_detection);
        VAR_0->os_detection = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_KERNEL_NAME")){
        FUNC_0(VAR_0->kernel_name);
        VAR_0->kernel_name = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_KERNEL_VERSION")){
        FUNC_0(VAR_0->kernel_version);
        VAR_0->kernel_version = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_ARCHITECTURE")){
        FUNC_0(VAR_0->architecture);
        VAR_0->architecture = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_VIRTUALIZATION")){
        FUNC_0(VAR_0->virtualization);
        VAR_0->virtualization = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_VIRT_DETECTION")){
        FUNC_0(VAR_0->virt_detection);
        VAR_0->virt_detection = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_CONTAINER")){
        FUNC_0(VAR_0->container);
        VAR_0->container = FUNC_2(VAR_2);
    }
    else if(!FUNC_1(VAR_1, "NETDATA_SYSTEM_CONTAINER_DETECTION")){
        FUNC_0(VAR_0->container_detection);
        VAR_0->container_detection = FUNC_2(VAR_2);
    }
    else {
        VAR_3 = 1;
    }

    return VAR_3;
}
