
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct TYPE_2__ {void* length; int type; } ;
struct sctp_hmac_algo_param {TYPE_1__ param_hdr; void** hmac_ids; } ;
struct sctp_endpoint {struct sctp_hmac_algo_param* auth_chunk_list; struct sctp_hmac_algo_param* auth_hmacs_list; } ;
struct sctp_chunks_param {TYPE_1__ param_hdr; void** hmac_ids; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sctp_hmac_algo_param*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct sctp_endpoint*,int ) ;
 scalar_t__ FUNC_4 (struct sctp_hmac_algo_param*,int ,int ) ;

int FUNC_5(struct sctp_endpoint *VAR_7, gfp_t VAR_8)
{
 int VAR_9 = -VAR_0;





 if (!VAR_7->auth_hmacs_list) {
  struct sctp_hmac_algo_param *VAR_10;

  VAR_10 = FUNC_2(FUNC_4(VAR_10, VAR_6,
       VAR_2), VAR_8);
  if (!VAR_10)
   goto nomem;





  VAR_10->param_hdr.type = VAR_5;
  VAR_10->param_hdr.length =
    FUNC_0(sizeof(struct sctp_paramhdr) + 2);
  VAR_10->hmac_ids[0] = FUNC_0(VAR_1);
  VAR_7->auth_hmacs_list = VAR_10;
 }

 if (!VAR_7->auth_chunk_list) {
  struct sctp_chunks_param *VAR_11;

  VAR_11 = FUNC_2(sizeof(*VAR_11) +
          VAR_3, VAR_8);
  if (!VAR_11)
   goto nomem;

  VAR_11->param_hdr.type = VAR_4;
  VAR_11->param_hdr.length =
    FUNC_0(sizeof(struct sctp_paramhdr));
  VAR_7->auth_chunk_list = VAR_11;
 }




 VAR_9 = FUNC_3(VAR_7, VAR_8);
 if (VAR_9)
  goto nomem;

 return 0;

nomem:

 FUNC_1(VAR_7->auth_hmacs_list);
 FUNC_1(VAR_7->auth_chunk_list);
 VAR_7->auth_hmacs_list = ((void*)0);
 VAR_7->auth_chunk_list = ((void*)0);
 return VAR_9;
}
