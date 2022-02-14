
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct context_0 {int uid_gid_chroot_set; int platform_state_user; int platform_state_group; scalar_t__ uid_gid_specified; } ;
struct TYPE_2__ {char const* selinux_context; scalar_t__ memstats_fn; scalar_t__ chroot_dir; } ;
struct context {scalar_t__ first_time; TYPE_1__ options; struct context_0* c0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct context *VAR_2, bool VAR_3)
{
    static const char VAR_4[] = "will be delayed because of --client, --pull, or --up-delay";
    struct context_0 *VAR_5 = VAR_2->c0;

    if (VAR_5 && !VAR_5->uid_gid_chroot_set)
    {

        if (VAR_2->options.chroot_dir)
        {
            if (VAR_3)
            {
                FUNC_2(VAR_2->options.chroot_dir);
            }
            else if (VAR_2->first_time)
            {
                FUNC_0(VAR_1, "NOTE: chroot %s", VAR_4);
            }
        }


        if (VAR_5->uid_gid_specified)
        {
            if (VAR_3)
            {
                FUNC_3(&VAR_5->platform_state_group);
                FUNC_4(&VAR_5->platform_state_user);
            }
            else if (VAR_2->first_time)
            {
                FUNC_0(VAR_1, "NOTE: UID/GID downgrade %s", VAR_4);
            }
        }
        if (VAR_3)
        {
            VAR_5->uid_gid_chroot_set = 1;
        }
    }
}
