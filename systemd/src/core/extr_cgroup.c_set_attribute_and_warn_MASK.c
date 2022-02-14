
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* cgroup_path; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int,char*,int ,char*,int,char const*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4) {
        int VAR_5;

        VAR_5 = FUNC_1(VAR_2, VAR_1->cgroup_path, VAR_3, VAR_4);
        if (VAR_5 < 0)
                FUNC_3(VAR_1, FUNC_0(VAR_5), VAR_5, "Failed to set '%s' attribute on '%s' to '%.*s': %m",
                              FUNC_5(VAR_3), FUNC_2(VAR_1->cgroup_path) ? "/" : VAR_1->cgroup_path, (int) FUNC_4(VAR_4, VAR_0), VAR_4);

        return VAR_5;
}
