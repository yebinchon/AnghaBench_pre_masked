
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_chunks; int auth_capable; } ;
struct sctp_association {TYPE_1__ peer; } ;
typedef enum sctp_cid { ____Placeholder_sctp_cid } sctp_cid ;


 int FUNC_0 (int,int ) ;

int FUNC_1(enum sctp_cid VAR_0, const struct sctp_association *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (!VAR_1->peer.auth_capable)
  return 0;

 return FUNC_0(VAR_0, VAR_1->peer.peer_chunks);
}
