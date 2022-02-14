
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_network_interface {scalar_t__ container_device; scalar_t__ host_device; struct cgroup_network_interface* next; } ;
struct cgroup {struct cgroup_network_interface* interfaces; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct cgroup *VAR_0) {
    while(VAR_0->interfaces) {
        struct cgroup_network_interface *VAR_1 = VAR_0->interfaces;
        VAR_0->interfaces = VAR_1->next;


        FUNC_1(VAR_1->host_device);

        FUNC_0((void *)VAR_1->host_device);
        FUNC_0((void *)VAR_1->container_device);
        FUNC_0((void *)VAR_1);
    }
}
