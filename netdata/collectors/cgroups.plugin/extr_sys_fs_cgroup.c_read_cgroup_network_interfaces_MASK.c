
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_network_interface {void* container_device; void* host_device; struct cgroup_network_interface* next; } ;
struct cgroup {int options; int chart_id; int id; struct cgroup_network_interface* interfaces; int chart_title; } ;
typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cgroup_network_interface* FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*,int ,...) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (char*,int ,void*,void*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (char*,int *) ;
 int FUNC_7 (void*,void*,int ) ;
 int FUNC_8 (char*,int ,char*,int ,int ,int ) ;
 void* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static inline void FUNC_11(struct cgroup *VAR_6) {
    FUNC_1(VAR_2, "looking for the network interfaces of cgroup '%s' with chart id '%s' and title '%s'", VAR_6->id, VAR_6->chart_id, VAR_6->chart_title);

    pid_t VAR_7;
    char VAR_8[VAR_0 + 1];

    if(!(VAR_6->options & VAR_1)) {
        FUNC_8(VAR_8, VAR_0, "exec %s --cgroup '%s%s'", VAR_5, VAR_3, VAR_6->id);
    }
    else {
        FUNC_8(VAR_8, VAR_0, "exec %s --cgroup '%s%s'", VAR_5, VAR_4, VAR_6->id);
    }

    FUNC_1(VAR_2, "executing command '%s' for cgroup '%s'", VAR_8, VAR_6->id);
    FILE *VAR_9 = FUNC_6(VAR_8, &VAR_7);
    if(!VAR_9) {
        FUNC_2("CGROUP: cannot popen(\"%s\", \"r\").", VAR_8);
        return;
    }

    char *VAR_10;
    char VAR_11[VAR_0 + 1];
    while((VAR_10 = FUNC_3(VAR_11, VAR_0, VAR_9))) {
        FUNC_10(VAR_10);

        if(*VAR_10 && *VAR_10 != '\n') {
            char *VAR_12 = VAR_10;
            while(*VAR_12 && *VAR_12 != ' ') VAR_12++;
            if(*VAR_12 == ' ') {
                *VAR_12 = '\0';
                VAR_12++;
            }

            if(!*VAR_10) {
                FUNC_2("CGROUP: empty host interface returned by script");
                continue;
            }

            if(!*VAR_12) {
                FUNC_2("CGROUP: empty guest interface returned by script");
                continue;
            }

            struct cgroup_network_interface *VAR_13 = FUNC_0(1, sizeof(struct cgroup_network_interface));
            VAR_13->host_device = FUNC_9(VAR_10);
            VAR_13->container_device = FUNC_9(VAR_12);
            VAR_13->next = VAR_6->interfaces;
            VAR_6->interfaces = VAR_13;

            FUNC_4("CGROUP: cgroup '%s' has network interface '%s' as '%s'", VAR_6->id, VAR_13->host_device, VAR_13->container_device);


            FUNC_7(VAR_13->host_device, VAR_13->container_device, VAR_6->chart_id);
        }
    }

    FUNC_5(VAR_9, VAR_7);

}
