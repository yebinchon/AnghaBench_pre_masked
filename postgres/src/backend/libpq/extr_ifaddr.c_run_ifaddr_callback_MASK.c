
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int (* PgIfAddrCallback ) (struct sockaddr*,struct sockaddr*,void*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sockaddr_storage*,int *,scalar_t__) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,void*) ;

__attribute__((used)) static void
FUNC_3(PgIfAddrCallback VAR_3, void *VAR_4,
     struct sockaddr *VAR_5, struct sockaddr *VAR_6)
{
 struct sockaddr_storage VAR_7;

 if (!VAR_5)
  return;


 if (VAR_6)
 {
  if (VAR_6->sa_family != VAR_5->sa_family)
  {
   VAR_6 = ((void*)0);
  }
  else if (VAR_6->sa_family == VAR_0)
  {
   if (((struct sockaddr_in *) VAR_6)->sin_addr.s_addr == VAR_2)
    VAR_6 = ((void*)0);
  }







 }


 if (!VAR_6)
 {
  FUNC_1(&VAR_7, ((void*)0), VAR_5->sa_family);
  VAR_6 = (struct sockaddr *) &VAR_7;
 }

 (*VAR_3) (VAR_5, VAR_6, VAR_4);
}
