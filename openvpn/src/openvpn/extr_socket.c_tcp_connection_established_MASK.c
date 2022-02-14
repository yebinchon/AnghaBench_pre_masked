
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket_actual {int dummy; } ;
struct gc_arena {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct link_socket_actual const*,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(const struct link_socket_actual *VAR_1)
{
    struct gc_arena VAR_2 = FUNC_1();
    FUNC_2(VAR_0, "TCP connection established with %s",
        FUNC_3(VAR_1, &VAR_2));
    FUNC_0(&VAR_2);
}
