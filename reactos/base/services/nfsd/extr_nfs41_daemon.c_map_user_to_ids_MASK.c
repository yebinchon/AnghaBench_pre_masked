
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int nfs41_idmapper ;
typedef int gid_t ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int *,char*,int *,int *) ;

__attribute__((used)) static int FUNC_5(nfs41_idmapper *VAR_4, uid_t *VAR_5, gid_t *VAR_6)
{
    char VAR_7[VAR_1 + 1];
    DWORD VAR_8 = VAR_1 + 1;
    int VAR_9 = VAR_0;

    if (!FUNC_1(VAR_7, &VAR_8)) {
        VAR_9 = FUNC_0();
        FUNC_3("GetUserName() failed with %d\n", VAR_9);
        goto out;
    }
    FUNC_2(1, "map_user_to_ids: mapping user %s\n", VAR_7);

    if (FUNC_4(VAR_4, VAR_7, VAR_5, VAR_6)) {

        *VAR_5 = VAR_3;
        *VAR_6 = VAR_2;
    }
out:
    return VAR_9;
}
