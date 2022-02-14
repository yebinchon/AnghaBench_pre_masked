
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {struct sctp_association* asoc; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;


 struct sctp_transport* FUNC_0 (struct net*,union sctp_addr const*,union sctp_addr const*) ;

__attribute__((used)) static struct sctp_association *FUNC_1(
     struct net *VAR_0,
     const union sctp_addr *VAR_1,
     const union sctp_addr *VAR_2,
     struct sctp_transport **VAR_3)
{
 struct sctp_transport *VAR_4;
 struct sctp_association *VAR_5 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  goto out;

 VAR_5 = VAR_4->asoc;
 *VAR_3 = VAR_4;

out:
 return VAR_5;
}
