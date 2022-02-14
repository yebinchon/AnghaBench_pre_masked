
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct idmap_user {int username; } ;
struct idmap_lookup {void const* value; int member_3; int member_2; int member_1; int member_0; } ;
struct idmap_context {int dummy; } ;
typedef scalar_t__ UINT_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,size_t,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (struct idmap_context*,struct idmap_lookup*,struct idmap_user*) ;
 int VAR_5 ;

int FUNC_5(
    struct idmap_context *VAR_6,
    uid_t VAR_7,
    char *VAR_8,
    size_t VAR_9)
{
    UINT_PTR VAR_10 = VAR_7;
    struct idmap_lookup VAR_11 = { VAR_0, VAR_1, VAR_4, VAR_5 };
    struct idmap_user VAR_12;
    int VAR_13;

    FUNC_2(VAR_3, "--> nfs41_idmap_uid_to_name(%u)\n", VAR_7);

    VAR_11.value = (const void*)VAR_10;


    VAR_13 = FUNC_4(VAR_6, &VAR_11, &VAR_12);
    if (VAR_13) {
        FUNC_2(VAR_3, "<-- nfs41_idmap_uid_to_name(%u) "
            "failed with %d\n", VAR_7, VAR_13);
        goto out;
    }

    if (FUNC_0(FUNC_1(VAR_8, VAR_9, VAR_12.username))) {
        VAR_13 = VAR_2;
        FUNC_3("username buffer overflow: '%s' > %u\n",
            VAR_12.username, VAR_9);
        goto out;
    }

    FUNC_2(VAR_3, "<-- nfs41_idmap_uid_to_name(%u) "
        "returning '%s'\n", VAR_7, VAR_8);
out:
    return VAR_13;
}
