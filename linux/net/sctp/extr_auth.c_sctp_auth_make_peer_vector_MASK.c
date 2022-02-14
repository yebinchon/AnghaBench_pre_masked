
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_auth_bytes {int dummy; } ;
struct TYPE_2__ {int peer_hmacs; int peer_chunks; int peer_random; } ;
struct sctp_association {TYPE_1__ peer; } ;
typedef int gfp_t ;


 struct sctp_auth_bytes* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_1(
        const struct sctp_association *VAR_0,
        gfp_t VAR_1)
{
 return FUNC_0(VAR_0->peer.peer_random,
      VAR_0->peer.peer_chunks,
      VAR_0->peer.peer_hmacs,
      VAR_1);
}
