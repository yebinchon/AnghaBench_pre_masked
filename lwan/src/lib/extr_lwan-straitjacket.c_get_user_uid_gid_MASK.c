
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_gid; int pw_uid; } ;
typedef int gid_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,struct passwd*,char*,size_t,struct passwd**) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (size_t) ;
 long FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_3, uid_t *VAR_4, gid_t *VAR_5)
{
    struct passwd VAR_6 = {};
    struct passwd *VAR_7;
    char *VAR_8;
    long VAR_9 = FUNC_5(VAR_1);
    int VAR_10;

    if (VAR_9 < 0) {



        VAR_9 = VAR_0;
    }

    VAR_8 = FUNC_4((size_t)VAR_9);
    if (!VAR_8) {
        FUNC_2("Could not allocate buffer for passwd struct");
        return 0;
    }

    VAR_10 = FUNC_1(VAR_3, &VAR_6, VAR_8, (size_t)VAR_9, &VAR_7);
    *VAR_4 = VAR_6.pw_uid;
    *VAR_5 = VAR_6.pw_gid;
    FUNC_0(VAR_8);

    if (VAR_7)
        return 1;

    if (!VAR_10) {
        FUNC_2("Username not found: %s", VAR_3);
    } else {
        VAR_2 = VAR_10;
        FUNC_3("Could not obtain uid/gid for user %s", VAR_3);
    }

    return 0;
}
