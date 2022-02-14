
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {int serial; int local_port; scalar_t__ tunnel_forward; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct server *VAR_0) {
    if (VAR_0->tunnel_forward) {
        return FUNC_0(VAR_0->serial, VAR_0->local_port);
    }
    return FUNC_1(VAR_0->serial);
}
