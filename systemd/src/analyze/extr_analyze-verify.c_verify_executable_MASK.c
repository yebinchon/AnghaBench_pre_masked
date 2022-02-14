
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_3__ {int path; } ;
typedef TYPE_1__ ExecCommand ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(Unit *VAR_2, ExecCommand *VAR_3) {
        if (!VAR_3)
                return 0;

        if (FUNC_0(VAR_3->path, VAR_0) < 0)
                return FUNC_1(VAR_2, VAR_1, "Command %s is not executable: %m", VAR_3->path);

        return 0;
}
