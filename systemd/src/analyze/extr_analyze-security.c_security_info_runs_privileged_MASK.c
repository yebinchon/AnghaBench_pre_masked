
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_info {int user; scalar_t__ dynamic_user; } ;


 scalar_t__ FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct security_info const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct security_info *VAR_0) {
        FUNC_1(VAR_0);

        if (FUNC_0(VAR_0->user, "0", "root"))
                return 1;

        if (VAR_0->dynamic_user)
                return 0;

        return FUNC_2(VAR_0->user);
}
