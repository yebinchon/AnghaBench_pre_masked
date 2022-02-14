
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int ) ;

uint16_t
FUNC_1 (const struct sockaddr *VAR_0)
{
    switch (VAR_0->sa_family) {
    case 129: {
        struct sockaddr_in *VAR_1 = (struct sockaddr_in *) VAR_0;
        return FUNC_0(VAR_1->sin_port);
    }







    default:
        return 0;
    }
    return 0;
}
