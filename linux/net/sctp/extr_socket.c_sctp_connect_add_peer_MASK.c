
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_endpoint {TYPE_1__ base; } ;
struct sctp_association {scalar_t__ state; struct sctp_endpoint* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct sctp_transport* FUNC_0 (struct sctp_association*,union sctp_addr*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sctp_endpoint*,union sctp_addr*) ;
 struct sctp_association* FUNC_2 (struct sctp_endpoint*,union sctp_addr*,struct sctp_transport**) ;
 int FUNC_3 (int ,union sctp_addr*,int) ;

__attribute__((used)) static int FUNC_4(struct sctp_association *VAR_7,
     union sctp_addr *VAR_8, int VAR_9)
{
 struct sctp_endpoint *VAR_10 = VAR_7->ep;
 struct sctp_association *VAR_11;
 struct sctp_transport *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_10->base.sk, VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_2(VAR_10, VAR_8, &VAR_12);
 if (VAR_11 && VAR_11 != VAR_7)
  return VAR_11->state >= VAR_5 ? -VAR_2
           : -VAR_1;

 if (FUNC_1(VAR_10, VAR_8))
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_4, VAR_6);
 if (!VAR_12)
  return -VAR_3;

 return 0;
}
