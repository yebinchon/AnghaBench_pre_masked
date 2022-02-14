
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sockaddr *VAR_1)
{
    if (VAR_1->sa_family == VAR_0) {
        return FUNC_0(((struct sockaddr_in*)VAR_1)->sin_port);
    }

    return FUNC_0(((struct sockaddr_in6*)VAR_1)->sin6_port);
}
