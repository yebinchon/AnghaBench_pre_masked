
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mountinfo {char* mount_point; } ;
struct TYPE_2__ {int rrd_update_every; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 char* VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 void* FUNC_0 (char*,char*,char*) ;
 void* FUNC_1 (char*,char*,void*) ;
 void* FUNC_2 (char*,char*,void*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_45 ;
 struct mountinfo* FUNC_6 (struct mountinfo*,char*,char*) ;
 struct mountinfo* FUNC_7 (struct mountinfo*,char*,char*) ;
 int FUNC_8 (struct mountinfo*) ;
 struct mountinfo* FUNC_9 (int ) ;
 int VAR_46 ;
 int VAR_47 ;
 void* FUNC_10 (char*) ;
 void* FUNC_11 (void*,int *,int ) ;
 int FUNC_12 (char*,int ,char*,int ,...) ;
 int FUNC_13 (int ) ;
 void* VAR_48 ;
 int VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;

void FUNC_14() {
    VAR_49 = FUNC_13(VAR_7);

    VAR_4 = FUNC_10("Read");
    VAR_6 = FUNC_10("Write");
    VAR_51 = FUNC_10("user");
    VAR_48 = FUNC_10("system");

    VAR_37 = (int)FUNC_3("plugin:cgroups", "update every", VAR_45->rrd_update_every);
    if(VAR_37 < VAR_45->rrd_update_every)
        VAR_37 = VAR_45->rrd_update_every;

    VAR_9 = (int)FUNC_3("plugin:cgroups", "check for new cgroups every", (long long)VAR_9 * (long long)VAR_37);
    if(VAR_9 < VAR_37)
        VAR_9 = VAR_37;

    VAR_38 = FUNC_2("plugin:cgroups", "use unified cgroups", VAR_38);

    VAR_10 = (int)FUNC_3("plugin:cgroups", "containers priority", VAR_10);
    if(VAR_10 < 1)
        VAR_10 = VAR_3;

    VAR_20 = FUNC_2("plugin:cgroups", "enable cpuacct stat (total CPU)", VAR_20);
    VAR_21 = FUNC_2("plugin:cgroups", "enable cpuacct usage (per core CPU)", VAR_21);

    VAR_23 = FUNC_2("plugin:cgroups", "enable memory (used mem including cache)", VAR_23);
    VAR_22 = FUNC_2("plugin:cgroups", "enable detailed memory", VAR_22);
    VAR_24 = FUNC_2("plugin:cgroups", "enable memory limits fail count", VAR_24);
    VAR_26 = FUNC_2("plugin:cgroups", "enable swap memory", VAR_26);

    VAR_14 = FUNC_2("plugin:cgroups", "enable blkio bandwidth", VAR_14);
    VAR_16 = FUNC_2("plugin:cgroups", "enable blkio operations", VAR_16);
    VAR_18 = FUNC_2("plugin:cgroups", "enable blkio throttle bandwidth", VAR_18);
    VAR_19 = FUNC_2("plugin:cgroups", "enable blkio throttle operations", VAR_19);
    VAR_17 = FUNC_2("plugin:cgroups", "enable blkio queued operations", VAR_17);
    VAR_15 = FUNC_2("plugin:cgroups", "enable blkio merged operations", VAR_15);

    VAR_31 = (int)FUNC_3("plugin:cgroups", "recheck zero blkio every iterations", VAR_31);
    VAR_33 = (int)FUNC_3("plugin:cgroups", "recheck zero memory failcnt every iterations", VAR_33);
    VAR_32 = (int)FUNC_3("plugin:cgroups", "recheck zero detailed memory every iterations", VAR_32);

    VAR_27 = FUNC_1("plugin:cgroups", "enable systemd services", VAR_27);
    VAR_28 = FUNC_1("plugin:cgroups", "enable systemd services detailed memory", VAR_28);
    VAR_39 = FUNC_1("plugin:cgroups", "report used memory without cache", VAR_39);

    char VAR_52[VAR_2 + 1], *VAR_53;
    struct mountinfo *VAR_54, *VAR_55 = FUNC_9(0);
    if(!VAR_38) {
        VAR_54 = FUNC_7(VAR_55, "cgroup", "cpuacct");
        if(!VAR_54) VAR_54 = FUNC_6(VAR_55, "cgroup", "cpuacct");
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find cpuacct mountinfo. Assuming default: /sys/fs/cgroup/cpuacct");
            VAR_53 = "/sys/fs/cgroup/cpuacct";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_11 = FUNC_0("plugin:cgroups", "path to /sys/fs/cgroup/cpuacct", VAR_52);

        VAR_54 = FUNC_7(VAR_55, "cgroup", "cpuset");
        if(!VAR_54) VAR_54 = FUNC_6(VAR_55, "cgroup", "cpuset");
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find cpuset mountinfo. Assuming default: /sys/fs/cgroup/cpuset");
            VAR_53 = "/sys/fs/cgroup/cpuset";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_12 = FUNC_0("plugin:cgroups", "path to /sys/fs/cgroup/cpuset", VAR_52);

        VAR_54 = FUNC_7(VAR_55, "cgroup", "blkio");
        if(!VAR_54) VAR_54 = FUNC_6(VAR_55, "cgroup", "blkio");
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find blkio mountinfo. Assuming default: /sys/fs/cgroup/blkio");
            VAR_53 = "/sys/fs/cgroup/blkio";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_8 = FUNC_0("plugin:cgroups", "path to /sys/fs/cgroup/blkio", VAR_52);

        VAR_54 = FUNC_7(VAR_55, "cgroup", "memory");
        if(!VAR_54) VAR_54 = FUNC_6(VAR_55, "cgroup", "memory");
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find memory mountinfo. Assuming default: /sys/fs/cgroup/memory");
            VAR_53 = "/sys/fs/cgroup/memory";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_30 = FUNC_0("plugin:cgroups", "path to /sys/fs/cgroup/memory", VAR_52);

        VAR_54 = FUNC_7(VAR_55, "cgroup", "devices");
        if(!VAR_54) VAR_54 = FUNC_6(VAR_55, "cgroup", "devices");
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find devices mountinfo. Assuming default: /sys/fs/cgroup/devices");
            VAR_53 = "/sys/fs/cgroup/devices";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_13 = FUNC_0("plugin:cgroups", "path to /sys/fs/cgroup/devices", VAR_52);
    }
    else {

        VAR_21 =


        VAR_24 =



        VAR_18 =
        VAR_19 =
        VAR_15 =
        VAR_17 = VAR_0;
        VAR_35 = 0;
        VAR_28 = VAR_0;
        VAR_39 = VAR_0;


        VAR_54 = FUNC_7(VAR_55, "cgroup2", "rw");
        if(VAR_54) FUNC_4(VAR_1, "found unified cgroup root using super options, with path: '%s'", VAR_54->mount_point);
        if(!VAR_54) {
            VAR_54 = FUNC_6(VAR_55, "cgroup2", "cgroup");
            if(VAR_54) FUNC_4(VAR_1, "found unified cgroup root using mountsource info, with path: '%s'", VAR_54->mount_point);
        }
        if(!VAR_54) {
            FUNC_5("CGROUP: cannot find cgroup2 mountinfo. Assuming default: /sys/fs/cgroup");
            VAR_53 = "/sys/fs/cgroup";
        }
        else VAR_53 = VAR_54->mount_point;
        FUNC_12(VAR_52, VAR_2, "%s%s", VAR_46, VAR_53);
        VAR_36 = FUNC_0("plugin:cgroups", "path to unified cgroups", VAR_52);
        FUNC_4(VAR_1, "using cgroup root: '%s'", VAR_36);
    }

    VAR_34 = (int)FUNC_3("plugin:cgroups", "max cgroups to allow", VAR_34);
    VAR_29 = (int)FUNC_3("plugin:cgroups", "max cgroups depth to monitor", VAR_29);

    VAR_25 = FUNC_1("plugin:cgroups", "enable new cgroups detected at run time", VAR_25);

    VAR_43 = FUNC_11(
            FUNC_0("plugin:cgroups", "enable by default cgroups matching",


                    " !*/init.scope "
                    " !/system.slice/run-*.scope "
                    " *.scope "



                    " /machine.slice/*.service "



                    " !*/vcpu* "
                    " !*/emulator "
                    " !*.mount "
                    " !*.partition "
                    " !*.service "
                    " !*.socket "
                    " !*.slice "
                    " !*.swap "
                    " !*.user "
                    " !/ "
                    " !/docker "
                    " !/libvirt "
                    " !/lxc "
                    " !/lxc/*/* "
                    " !/machine "
                    " !/qemu "
                    " !/system "
                    " !/systemd "
                    " !/user "
                    " * "
            ), ((void*)0), VAR_5);

    VAR_42 = FUNC_11(
            FUNC_0("plugin:cgroups", "search for cgroups in subpaths matching",
                    " !*/init.scope "
                    " !*-qemu "
                    " !*.libvirt-qemu "
                    " !/init.scope "
                    " !/system "
                    " !/systemd "
                    " !/user "
                    " !/user.slice "
                    " !/lxc/*/* "
                    " * "
            ), ((void*)0), VAR_5);

    FUNC_12(VAR_52, VAR_2, "%s/cgroup-name.sh", VAR_47);
    VAR_41 = FUNC_0("plugin:cgroups", "script to get cgroup names", VAR_52);

    FUNC_12(VAR_52, VAR_2, "%s/cgroup-network", VAR_47);
    VAR_40 = FUNC_0("plugin:cgroups", "script to get cgroup network interfaces", VAR_52);

    VAR_44 = FUNC_11(
            FUNC_0("plugin:cgroups", "run script to rename cgroups matching",
                    " !/ "
                    " !*.mount "
                    " !*.socket "
                    " !*.partition "
                    " /machine.slice/*.service "
                    " !*.service "
                    " !*.slice "
                    " !*.swap "
                    " !*.user "
                    " !init.scope "
                    " !*.scope/vcpu* "
                    " !*.scope/emulator "
                    " *.scope "
                    " *docker* "
                    " *lxc* "
                    " *qemu* "
                    " *kubepods* "
                    " *.libvirt-qemu "
                    " * "
            ), ((void*)0), VAR_5);

    if(VAR_27) {
        VAR_50 = FUNC_11(
                FUNC_0("plugin:cgroups", "cgroups to match as systemd services",
                        " !/system.slice/*/*.service "
                        " /system.slice/*.service "
                ), ((void*)0), VAR_5);
    }

    FUNC_8(VAR_55);
}
