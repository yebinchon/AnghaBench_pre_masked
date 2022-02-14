
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union sctp_addr_param {TYPE_1__ p; } ;
typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_association {int dummy; } ;
struct sctp_af {int (* from_addr_param ) (union sctp_addr*,union sctp_addr_param*,int ,int ) ;} ;
struct sctp_addip_chunk {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 struct sctp_association* FUNC_0 (struct net*,union sctp_addr const*,union sctp_addr*,struct sctp_transport**) ;
 int FUNC_1 (int ) ;
 struct sctp_af* FUNC_2 (int ) ;
 int FUNC_3 (union sctp_addr*,union sctp_addr_param*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sctp_association *FUNC_5(
     struct net *VAR_0,
     struct sctp_chunkhdr *VAR_1,
     const union sctp_addr *VAR_2,
     __be16 VAR_3,
     struct sctp_transport **VAR_4)
{
 struct sctp_addip_chunk *VAR_5 = (struct sctp_addip_chunk *)VAR_1;
 struct sctp_af *VAR_6;
 union sctp_addr_param *VAR_7;
 union sctp_addr VAR_8;


 VAR_7 = (union sctp_addr_param *)(VAR_5 + 1);

 VAR_6 = FUNC_2(FUNC_1(VAR_7->p.type));
 if (FUNC_4(!VAR_6))
  return ((void*)0);

 VAR_6->from_addr_param(&VAR_8, VAR_7, VAR_3, 0);

 return FUNC_0(VAR_0, VAR_2, &VAR_8, VAR_4);
}
