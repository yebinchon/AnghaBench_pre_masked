
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int in_port_t ;




 int FUNC_0 (int ) ;

in_port_t
FUNC_1(struct sockaddr *VAR_0)
{
    struct sockaddr_in *VAR_1;




    switch (VAR_0->sa_family) {
    default:
        VAR_1 = (struct sockaddr_in *) VAR_0;
        return FUNC_0(VAR_1->sin_port);
    }
}
