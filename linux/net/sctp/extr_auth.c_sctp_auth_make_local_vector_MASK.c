
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_random_param {int dummy; } ;
struct sctp_hmac_algo_param {int dummy; } ;
struct sctp_chunks_param {int dummy; } ;
struct sctp_auth_bytes {int dummy; } ;
struct TYPE_2__ {scalar_t__ auth_hmacs; scalar_t__ auth_chunks; scalar_t__ auth_random; } ;
struct sctp_association {TYPE_1__ c; } ;
typedef int gfp_t ;


 struct sctp_auth_bytes* FUNC_0 (struct sctp_random_param*,struct sctp_chunks_param*,struct sctp_hmac_algo_param*,int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_1(
        const struct sctp_association *VAR_0,
        gfp_t VAR_1)
{
 return FUNC_0(
   (struct sctp_random_param *)VAR_0->c.auth_random,
   (struct sctp_chunks_param *)VAR_0->c.auth_chunks,
   (struct sctp_hmac_algo_param *)VAR_0->c.auth_hmacs, VAR_1);
}
