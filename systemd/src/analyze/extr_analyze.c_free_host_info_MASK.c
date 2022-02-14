
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_info {struct host_info* architecture; struct host_info* virtualization; struct host_info* os_pretty_name; struct host_info* kernel_version; struct host_info* kernel_release; struct host_info* kernel_name; struct host_info* hostname; } ;


 int FUNC_0 (struct host_info*) ;

__attribute__((used)) static void FUNC_1(struct host_info *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->hostname);
        FUNC_0(VAR_0->kernel_name);
        FUNC_0(VAR_0->kernel_release);
        FUNC_0(VAR_0->kernel_version);
        FUNC_0(VAR_0->os_pretty_name);
        FUNC_0(VAR_0->virtualization);
        FUNC_0(VAR_0->architecture);
        FUNC_0(VAR_0);
}
