
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sctp_endpoint*) ;
 int FUNC_1 (struct sctp_endpoint*) ;
 struct sctp_endpoint* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sctp_endpoint*,struct sock*,int ) ;

struct sctp_endpoint *FUNC_4(struct sock *VAR_0, gfp_t VAR_1)
{
 struct sctp_endpoint *VAR_2;


 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  goto fail;

 if (!FUNC_3(VAR_2, VAR_0, VAR_1))
  goto fail_init;

 FUNC_0(VAR_2);
 return VAR_2;

fail_init:
 FUNC_1(VAR_2);
fail:
 return ((void*)0);
}
