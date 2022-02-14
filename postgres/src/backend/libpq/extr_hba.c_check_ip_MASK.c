
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {scalar_t__ ss_family; } ;
struct TYPE_4__ {TYPE_2__ addr; } ;
typedef TYPE_1__ SockAddr ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct sockaddr_storage*,struct sockaddr_storage*) ;

__attribute__((used)) static bool
FUNC_1(SockAddr *VAR_0, struct sockaddr *VAR_1, struct sockaddr *VAR_2)
{
 if (VAR_0->addr.ss_family == VAR_1->sa_family &&
  FUNC_0(&VAR_0->addr,
        (struct sockaddr_storage *) VAR_1,
        (struct sockaddr_storage *) VAR_2))
  return 1;
 return 0;
}
