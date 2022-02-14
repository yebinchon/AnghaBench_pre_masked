
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct statfs {char* f_mntonname; char* f_fstypename; int f_flags; int f_blocks; char* f_mntfromname; int f_bsize; int f_bavail; int f_bfree; int f_files; int f_ffree; } ;
struct mount_point {int updated; int configured; int enabled; scalar_t__ do_space; scalar_t__ do_inodes; int collected; void* st_inodes; void* rd_inodes_used; void* rd_inodes_avail; void* st_space; void* rd_space_reserved; void* rd_space_used; void* rd_space_avail; } ;
typedef int collected_number ;
typedef int SIMPLE_PATTERN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,char*,int ) ;
 void* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 struct mount_point* FUNC_3 (char*) ;
 int FUNC_4 (struct statfs**,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_7 (void*,char*,char*,int,int,int ) ;
 int FUNC_8 (void*,void*,int ) ;
 void* FUNC_9 (char*,char*,int *,char*,char*,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int * FUNC_12 (int ,int *,int ) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int FUNC_14 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(int VAR_16, usec_t VAR_17) {
    (void)VAR_17;






    static int VAR_18 = -1;
    static int VAR_19 = -1, VAR_20 = -1;
    static SIMPLE_PATTERN *VAR_21 = ((void*)0);
    static SIMPLE_PATTERN *VAR_22 = ((void*)0);

    if (FUNC_15(VAR_18 == -1)) {
        VAR_18 = FUNC_1("plugin:freebsd:getmntinfo",
                                                              "enable new mount points detected at runtime",
                                                              VAR_0);

        VAR_19 = FUNC_1("plugin:freebsd:getmntinfo", "space usage for all disks", VAR_0);
        VAR_20 = FUNC_1("plugin:freebsd:getmntinfo", "inodes usage for all disks", VAR_0);

        VAR_21 = FUNC_12(
                FUNC_0("plugin:freebsd:getmntinfo", "exclude space metrics on paths",
                           "/proc/*")
                , ((void*)0)
                , VAR_13
        );

        VAR_22 = FUNC_12(
                FUNC_0("plugin:freebsd:getmntinfo", "exclude space metrics on filesystems",
                           "autofs procfs subfs devfs none")
                , ((void*)0)
                , VAR_13
        );
    }

    if (FUNC_5(VAR_19 || VAR_20)) {
        struct statfs *VAR_23;
        int VAR_24;


        if (FUNC_15(!(VAR_24 = FUNC_4(&VAR_23, VAR_7)))) {
            FUNC_2("FREEBSD: getmntinfo() failed");
            VAR_19 = 0;
            FUNC_2("DISABLED: disk_space.* charts");
            VAR_20 = 0;
            FUNC_2("DISABLED: disk_inodes.* charts");
            FUNC_2("DISABLED: getmntinfo module");
            return 1;
        } else {
            int VAR_25;

            VAR_14 = 0;

            for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
                char VAR_26[4096 + 1];

                struct mount_point *VAR_27 = FUNC_3(VAR_23[VAR_25].f_mntonname);
                VAR_27->updated = 1;
                VAR_14++;

                if (FUNC_15(!VAR_27->configured)) {
                    char VAR_28[4096 + 1];




                    VAR_27->configured = 1;

                    VAR_27->enabled = VAR_18;

                    if (FUNC_5(VAR_27->enabled))
                        VAR_27->enabled = !(FUNC_13(VAR_21, VAR_23[VAR_25].f_mntonname)
                                       || FUNC_13(VAR_22, VAR_23[VAR_25].f_fstypename));

                    FUNC_14(VAR_28, 4096, "%s:%s", "plugin:freebsd:getmntinfo", VAR_23[VAR_25].f_mntonname);
                    VAR_27->enabled = FUNC_1(VAR_28, "enabled", VAR_27->enabled);

                    if (FUNC_15(VAR_27->enabled == VAR_1))
                        continue;

                    VAR_27->do_space = FUNC_1(VAR_28, "space usage", VAR_19);
                    VAR_27->do_inodes = FUNC_1(VAR_28, "inodes usage", VAR_20);
                }

                if (FUNC_15(!VAR_27->enabled))
                    continue;

                if (FUNC_15(VAR_23[VAR_25].f_flags & VAR_8 && !VAR_27->collected))
                    continue;



                int VAR_29 = 0;

                if (VAR_27->do_space == VAR_2 || (VAR_27->do_space == VAR_0 &&
                                                          (VAR_23[VAR_25].f_blocks > 2 ||
                                                           VAR_15 == VAR_2))) {
                    if (FUNC_15(!VAR_27->st_space)) {
                        FUNC_14(VAR_26, 4096, "Disk Space Usage for %s [%s]",
                                  VAR_23[VAR_25].f_mntonname, VAR_23[VAR_25].f_mntfromname);
                        VAR_27->st_space = FUNC_9("disk_space",
                                                              VAR_23[VAR_25].f_mntonname,
                                                              ((void*)0),
                                                              VAR_23[VAR_25].f_mntonname,
                                                              "disk.space",
                                                              VAR_26,
                                                              "GiB",
                                                              "freebsd.plugin",
                                                              "getmntinfo",
                                                              VAR_10,
                                                              VAR_16,
                                                              VAR_11
                        );

                        VAR_27->rd_space_avail = FUNC_7(VAR_27->st_space, "avail", ((void*)0),
                                                          VAR_23[VAR_25].f_bsize, VAR_6, VAR_12);
                        VAR_27->rd_space_used = FUNC_7(VAR_27->st_space, "used", ((void*)0),
                                                          VAR_23[VAR_25].f_bsize, VAR_6, VAR_12);
                        VAR_27->rd_space_reserved = FUNC_7(VAR_27->st_space, "reserved_for_root", "reserved for root",
                                                          VAR_23[VAR_25].f_bsize, VAR_6, VAR_12);
                    } else
                        FUNC_11(VAR_27->st_space);

                    FUNC_8(VAR_27->st_space, VAR_27->rd_space_avail, (collected_number) VAR_23[VAR_25].f_bavail);
                    FUNC_8(VAR_27->st_space, VAR_27->rd_space_used, (collected_number) (VAR_23[VAR_25].f_blocks -
                                                                                                 VAR_23[VAR_25].f_bfree));
                    FUNC_8(VAR_27->st_space, VAR_27->rd_space_reserved, (collected_number) (VAR_23[VAR_25].f_bfree -
                                                                                                 VAR_23[VAR_25].f_bavail));
                    FUNC_10(VAR_27->st_space);

                    VAR_29++;
                }



                if (VAR_27->do_inodes == VAR_2 || (VAR_27->do_inodes == VAR_0 &&
                                                           (VAR_23[VAR_25].f_files > 1 ||
                                                            VAR_15 == VAR_2))) {
                    if (FUNC_15(!VAR_27->st_inodes)) {
                        FUNC_14(VAR_26, 4096, "Disk Files (inodes) Usage for %s [%s]",
                                  VAR_23[VAR_25].f_mntonname, VAR_23[VAR_25].f_mntfromname);
                        VAR_27->st_inodes = FUNC_9("disk_inodes",
                                                               VAR_23[VAR_25].f_mntonname,
                                                               ((void*)0),
                                                               VAR_23[VAR_25].f_mntonname,
                                                               "disk.inodes",
                                                               VAR_26,
                                                               "inodes",
                                                               "freebsd.plugin",
                                                               "getmntinfo",
                                                               VAR_9,
                                                               VAR_16,
                                                               VAR_11
                        );

                        VAR_27->rd_inodes_avail = FUNC_7(VAR_27->st_inodes, "avail", ((void*)0), 1, 1, VAR_12);
                        VAR_27->rd_inodes_used = FUNC_7(VAR_27->st_inodes, "used", ((void*)0), 1, 1, VAR_12);
                    } else
                        FUNC_11(VAR_27->st_inodes);

                    FUNC_8(VAR_27->st_inodes, VAR_27->rd_inodes_avail, (collected_number) VAR_23[VAR_25].f_ffree);
                    FUNC_8(VAR_27->st_inodes, VAR_27->rd_inodes_used, (collected_number) (VAR_23[VAR_25].f_files -
                                                                                                VAR_23[VAR_25].f_ffree));
                    FUNC_10(VAR_27->st_inodes);

                    VAR_29++;
                }

                if (FUNC_5(VAR_29))
                    VAR_27->collected++;
            }
        }
    } else {
        FUNC_2("DISABLED: getmntinfo module");
        return 1;
    }

    FUNC_6();

    return 0;
}
