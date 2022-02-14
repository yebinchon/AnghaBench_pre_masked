
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_uid; scalar_t__ st_gid; int st_mode; } ;
typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,struct stat*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, uid_t VAR_1, gid_t VAR_2) {
    if(VAR_0 == -1) return;

    struct stat VAR_3;

    if(FUNC_3(VAR_0, &VAR_3) == -1) {
        FUNC_1("Cannot fstat() fd %d", VAR_0);
        return;
    }

    if((VAR_3.st_uid != VAR_1 || VAR_3.st_gid != VAR_2) && FUNC_0(VAR_3.st_mode)) {
        if(FUNC_2(VAR_0, VAR_1, VAR_2) == -1)
            FUNC_1("Cannot fchown() fd %d.", VAR_0);
    }
}
