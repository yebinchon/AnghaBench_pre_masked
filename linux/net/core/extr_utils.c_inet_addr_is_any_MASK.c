
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,scalar_t__) ;

bool FUNC_3(struct sockaddr *VAR_4)
{
 if (VAR_4->sa_family == VAR_1) {
  struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_4;
  const struct sockaddr_in6 VAR_6 =
   { .sin6_addr = VAR_2 };

  if (!FUNC_1(VAR_5->sin6_addr.s6_addr,
       VAR_6.sin6_addr.s6_addr, 16))
   return 1;
 } else if (VAR_4->sa_family == VAR_0) {
  struct sockaddr_in *VAR_7 = (struct sockaddr_in *)VAR_4;

  if (VAR_7->sin_addr.s_addr == FUNC_0(VAR_3))
   return 1;
 } else {
  FUNC_2("unexpected address family %u\n", VAR_4->sa_family);
 }

 return 0;
}
