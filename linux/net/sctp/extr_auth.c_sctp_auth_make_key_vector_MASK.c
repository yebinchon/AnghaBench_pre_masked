
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct sctp_random_param {TYPE_1__ param_hdr; } ;
struct sctp_hmac_algo_param {TYPE_1__ param_hdr; } ;
struct sctp_chunks_param {TYPE_1__ param_hdr; } ;
struct sctp_auth_bytes {scalar_t__ data; } ;
typedef int gfp_t ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (scalar_t__,struct sctp_random_param*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sctp_auth_bytes* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_3(
   struct sctp_random_param *VAR_0,
   struct sctp_chunks_param *VAR_1,
   struct sctp_hmac_algo_param *VAR_2,
   gfp_t VAR_3)
{
 struct sctp_auth_bytes *VAR_4;
 __u32 VAR_5;
 __u32 VAR_6 = 0;
 __u16 VAR_7, VAR_8, VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_0->param_hdr.length);
 VAR_8 = FUNC_1(VAR_2->param_hdr.length);
 if (VAR_1)
  VAR_9 = FUNC_1(VAR_1->param_hdr.length);

 VAR_5 = VAR_7 + VAR_8 + VAR_9;

 VAR_4 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(VAR_4->data, VAR_0, VAR_7);
 VAR_6 += VAR_7;

 if (VAR_1) {
  FUNC_0(VAR_4->data + VAR_6, VAR_1, VAR_9);
  VAR_6 += VAR_9;
 }

 FUNC_0(VAR_4->data + VAR_6, VAR_2, VAR_8);

 return VAR_4;
}
