
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct TYPE_3__ {int ctl_sock; } ;
struct net {TYPE_1__ sctp; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_4__ {struct sctp_endpoint const* ep; } ;


 int FUNC_0 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_1 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 TYPE_2__* FUNC_2 (int ) ;

enum sctp_disposition FUNC_3(
     struct net *VAR_0,
     const struct sctp_endpoint *VAR_1,
     const struct sctp_association *VAR_2,
     const union sctp_subtype VAR_3,
     void *VAR_4,
     struct sctp_cmd_seq *VAR_5)
{



 if (VAR_1 == FUNC_2(VAR_0->sctp.ctl_sock)->ep)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
