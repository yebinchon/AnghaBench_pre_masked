
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_zero; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct sockaddr_in {int dummy; } ;
struct sctp_sock {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sctp_sock *VAR_0, union sctp_addr *VAR_1)
{

 FUNC_0(VAR_1->v4.sin_zero, 0, sizeof(VAR_1->v4.sin_zero));
 return sizeof(struct sockaddr_in);
}
