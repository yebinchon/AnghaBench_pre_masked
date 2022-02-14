
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* __val; } ;
struct statfs {TYPE_1__ f_fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct statfs*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, char **VAR_3) {





    struct statfs VAR_4;




    if (FUNC_0(VAR_2, &VAR_4) == -1) {
        if(VAR_3) *VAR_3 = "failed to statfs()";
        return -1;
    }

    if(VAR_4.f_fsid.__val[0] != 0 || VAR_4.f_fsid.__val[1] != 0) {
        VAR_1 = VAR_0;
        if(VAR_3) *VAR_3 = "is not a virtual file system";
        return -1;
    }


    return 0;
}
