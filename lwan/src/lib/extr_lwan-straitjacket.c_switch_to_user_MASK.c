
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,char const*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(uid_t VAR_0, gid_t VAR_1, const char *VAR_2)
{
    uid_t VAR_3, VAR_4, VAR_5;
    gid_t VAR_6, VAR_7, VAR_8;

    FUNC_3("Dropping privileges to UID %d, GID %d (%s)",
        VAR_0, VAR_1, VAR_2);

    if (FUNC_4(VAR_1, VAR_1, VAR_1) < 0)
        return 0;




    if (FUNC_2(VAR_2, VAR_1) < 0)
        return 0;

    if (FUNC_5(VAR_0, VAR_0, VAR_0) < 0)
        return 0;

    if (FUNC_1(&VAR_3, &VAR_4, &VAR_5) < 0)
        return 0;
    if (VAR_3 != VAR_4 || VAR_4 != VAR_5 || VAR_5 != VAR_0)
        return 0;

    if (FUNC_0(&VAR_6, &VAR_7, &VAR_8) < 0)
        return 0;
    if (VAR_6 != VAR_7 || VAR_7 != VAR_8 || VAR_8 != VAR_1)
        return 0;

    return 1;
}
