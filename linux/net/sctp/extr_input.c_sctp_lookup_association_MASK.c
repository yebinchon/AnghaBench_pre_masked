
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;


 struct sctp_association* FUNC_0 (struct net*,union sctp_addr const*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static
struct sctp_association *FUNC_3(struct net *VAR_0,
       const union sctp_addr *VAR_1,
       const union sctp_addr *VAR_2,
       struct sctp_transport **VAR_3)
{
 struct sctp_association *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2();

 return VAR_4;
}
