
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdhost_system_info {struct rrdhost_system_info* container_detection; struct rrdhost_system_info* container; struct rrdhost_system_info* virt_detection; struct rrdhost_system_info* virtualization; struct rrdhost_system_info* architecture; struct rrdhost_system_info* kernel_version; struct rrdhost_system_info* kernel_name; struct rrdhost_system_info* os_detection; struct rrdhost_system_info* os_version_id; struct rrdhost_system_info* os_version; struct rrdhost_system_info* os_id_like; struct rrdhost_system_info* os_id; struct rrdhost_system_info* os_name; } ;


 int FUNC_0 (struct rrdhost_system_info*) ;
 int FUNC_1 (char*,struct rrdhost_system_info*) ;
 scalar_t__ FUNC_2 (struct rrdhost_system_info*) ;

void FUNC_3(struct rrdhost_system_info *VAR_0) {
    FUNC_1("SYSTEM_INFO: free %p", VAR_0);

    if(FUNC_2(VAR_0)) {
        FUNC_0(VAR_0->os_name);
        FUNC_0(VAR_0->os_id);
        FUNC_0(VAR_0->os_id_like);
        FUNC_0(VAR_0->os_version);
        FUNC_0(VAR_0->os_version_id);
        FUNC_0(VAR_0->os_detection);
        FUNC_0(VAR_0->kernel_name);
        FUNC_0(VAR_0->kernel_version);
        FUNC_0(VAR_0->architecture);
        FUNC_0(VAR_0->virtualization);
        FUNC_0(VAR_0->virt_detection);
        FUNC_0(VAR_0->container);
        FUNC_0(VAR_0->container_detection);
        FUNC_0(VAR_0);
    }
}
