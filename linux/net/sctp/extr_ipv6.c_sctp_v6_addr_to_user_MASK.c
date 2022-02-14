
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_zero; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v4; TYPE_3__ sa; TYPE_2__ v6; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sctp_sock {scalar_t__ v4mapped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (union sctp_addr*) ;
 int FUNC_3 (union sctp_addr*) ;

__attribute__((used)) static int FUNC_4(struct sctp_sock *VAR_2, union sctp_addr *VAR_3)
{
 if (VAR_2->v4mapped) {
  if (VAR_3->sa.sa_family == VAR_0)
   FUNC_2(VAR_3);
 } else {
  if (VAR_3->sa.sa_family == VAR_1 &&
      FUNC_0(&VAR_3->v6.sin6_addr))
   FUNC_3(VAR_3);
 }

 if (VAR_3->sa.sa_family == VAR_0) {
  FUNC_1(VAR_3->v4.sin_zero, 0, sizeof(VAR_3->v4.sin_zero));
  return sizeof(struct sockaddr_in);
 }
 return sizeof(struct sockaddr_in6);
}
