
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct net*,union sctp_addr const*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_1 (struct sctp_transport*) ;

bool FUNC_2(struct net *VAR_0,
     const union sctp_addr *VAR_1,
     const union sctp_addr *VAR_2)
{
 struct sctp_transport *VAR_3;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3)) {
  FUNC_1(VAR_3);
  return 1;
 }

 return 0;
}
