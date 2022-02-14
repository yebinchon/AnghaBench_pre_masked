
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sctp_transport*) ;
 int FUNC_1 (struct sctp_transport*) ;
 struct sctp_transport* FUNC_2 (int,int ) ;
 int FUNC_3 (struct net*,struct sctp_transport*,union sctp_addr const*,int ) ;

struct sctp_transport *FUNC_4(struct net *VAR_0,
       const union sctp_addr *VAR_1,
       gfp_t VAR_2)
{
 struct sctp_transport *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  goto fail;

 if (!FUNC_3(VAR_0, VAR_3, VAR_1, VAR_2))
  goto fail_init;

 FUNC_0(VAR_3);

 return VAR_3;

fail_init:
 FUNC_1(VAR_3);

fail:
 return ((void*)0);
}
