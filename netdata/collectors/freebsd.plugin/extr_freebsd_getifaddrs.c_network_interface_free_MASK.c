
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_network_interface {struct cgroup_network_interface* name; int st_events; int st_drops; int st_errors; int st_packets; int st_bandwidth; } ;


 int FUNC_0 (struct cgroup_network_interface*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cgroup_network_interface *VAR_1) {
    if (FUNC_1(VAR_1->st_bandwidth))
        FUNC_2(VAR_1->st_bandwidth);
    if (FUNC_1(VAR_1->st_packets))
        FUNC_2(VAR_1->st_packets);
    if (FUNC_1(VAR_1->st_errors))
        FUNC_2(VAR_1->st_errors);
    if (FUNC_1(VAR_1->st_drops))
        FUNC_2(VAR_1->st_drops);
    if (FUNC_1(VAR_1->st_events))
        FUNC_2(VAR_1->st_events);

    VAR_0--;
    FUNC_0(VAR_1->name);
    FUNC_0(VAR_1);
}
