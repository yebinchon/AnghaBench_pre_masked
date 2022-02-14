
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_atmsvc {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int local; int remote; } ;


 TYPE_1__* FUNC_0 (struct socket*) ;
 int FUNC_1 (struct sockaddr_atmsvc*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_0, struct sockaddr *VAR_1,
         int VAR_2)
{
 struct sockaddr_atmsvc *VAR_3;

 VAR_3 = (struct sockaddr_atmsvc *) VAR_1;
 FUNC_1(VAR_3, VAR_2 ? &FUNC_0(VAR_0)->remote : &FUNC_0(VAR_0)->local,
        sizeof(struct sockaddr_atmsvc));
 return sizeof(struct sockaddr_atmsvc);
}
