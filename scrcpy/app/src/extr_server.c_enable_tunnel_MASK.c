
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {int tunnel_forward; int local_port; int serial; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct server *VAR_0) {
    if (FUNC_2(VAR_0->serial, VAR_0->local_port)) {
        return 1;
    }

    FUNC_0("'adb reverse' failed, fallback to 'adb forward'");
    VAR_0->tunnel_forward = 1;
    return FUNC_1(VAR_0->serial, VAR_0->local_port);
}
