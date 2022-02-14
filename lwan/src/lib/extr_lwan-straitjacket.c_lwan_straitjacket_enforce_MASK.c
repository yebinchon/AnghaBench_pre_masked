
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct lwan_straitjacket {scalar_t__ drop_capabilities; scalar_t__* user_name; scalar_t__ chroot_path; } ;
struct __user_cap_header_struct {int version; } ;
struct __user_cap_data_struct {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct __user_cap_header_struct*,struct __user_cap_data_struct*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__*) ;

void FUNC_10(const struct lwan_straitjacket *VAR_1)
{
    uid_t VAR_2 = 0;
    gid_t VAR_3 = 0;
    bool VAR_4 = 0;

    if (!VAR_1->user_name && !VAR_1->chroot_path)
        goto out;

    if (FUNC_5() != 0)
        FUNC_6("Straitjacket requires root privileges");

    if (VAR_1->user_name && *VAR_1->user_name) {
        if (!FUNC_4(VAR_1->user_name, &VAR_2, &VAR_3))
            FUNC_6("Unknown user: %s", VAR_1->user_name);
        VAR_4 = 1;
    }

    if (VAR_1->chroot_path) {
        FUNC_0();

        if (FUNC_3(VAR_1->chroot_path) < 0) {
            FUNC_7("Could not chroot() to %s",
                                        VAR_1->chroot_path);
        }

        if (FUNC_2("/") < 0)
            FUNC_7("Could not chdir() to /");

        FUNC_8("Jailed to %s", VAR_1->chroot_path);
    }

    if (VAR_4) {
        if (!FUNC_9(VAR_2, VAR_3, VAR_1->user_name))
            FUNC_6("Could not drop privileges to %s, aborting",
                                 VAR_1->user_name);
    }

out:
    if (VAR_1->drop_capabilities) {
        struct __user_cap_header_struct VAR_5 = {
            .version = VAR_0
        };
        struct __user_cap_data_struct VAR_6 = {};

        if (FUNC_1(&VAR_5, &VAR_6) < 0)
            FUNC_7("Could not drop capabilities");
    }
}
