
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_lookup {char const* value; int member_3; int member_2; int member_1; int member_0; } ;
struct idmap_group {int gid; } ;
struct idmap_context {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int VAR_4 ;
 int FUNC_1 (struct idmap_context*,struct idmap_lookup*,struct idmap_group*) ;

int FUNC_2(
    struct idmap_context *VAR_5,
    const char *VAR_6,
    gid_t *VAR_7)
{
    struct idmap_lookup VAR_8 = { VAR_0,
        VAR_1, VAR_3, VAR_4 };
    struct idmap_group VAR_9;
    int VAR_10;

    FUNC_0(VAR_2, "--> nfs41_idmap_group_to_gid('%s')\n", VAR_6);

    VAR_8.value = VAR_6;


    VAR_10 = FUNC_1(VAR_5, &VAR_8, &VAR_9);
    if (VAR_10) {
        FUNC_0(VAR_2, "<-- nfs41_idmap_group_to_gid('%s') "
            "failed with %d\n", VAR_6, VAR_10);
        goto out;
    }

    *VAR_7 = VAR_9.gid;
    FUNC_0(VAR_2, "<-- nfs41_idmap_group_to_gid('%s') "
        "returning %u\n", VAR_6, VAR_9.gid);
out:
    return VAR_10;
}
