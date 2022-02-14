
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {struct sctp_association* asoc; } ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ bind_addr; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sctp_transport* FUNC_2 (struct sctp_endpoint const*,union sctp_addr const*) ;

struct sctp_association *FUNC_3(
 const struct sctp_endpoint *VAR_0,
 const union sctp_addr *VAR_1,
 struct sctp_transport **VAR_2)
{
 struct sctp_association *VAR_3 = ((void*)0);
 struct sctp_transport *VAR_4;

 *VAR_2 = ((void*)0);




 if (!VAR_0->base.bind_addr.port)
  return ((void*)0);

 FUNC_0();
 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
  goto out;

 *VAR_2 = VAR_4;
 VAR_3 = VAR_4->asoc;
out:
 FUNC_1();
 return VAR_3;
}
