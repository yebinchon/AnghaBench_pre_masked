
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef enum sctp_scope { ____Placeholder_sctp_scope } sctp_scope ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_association*) ;
 struct sctp_association* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,struct sctp_association*) ;
 int FUNC_4 (struct sctp_association*,struct sctp_endpoint const*,struct sock const*,int,int ) ;

struct sctp_association *FUNC_5(const struct sctp_endpoint *VAR_1,
           const struct sock *VAR_2,
           enum sctp_scope VAR_3, gfp_t VAR_4)
{
 struct sctp_association *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  goto fail;

 if (!FUNC_4(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4))
  goto fail_init;

 FUNC_0(VAR_0);

 FUNC_3("Created asoc %p\n", VAR_5);

 return VAR_5;

fail_init:
 FUNC_1(VAR_5);
fail:
 return ((void*)0);
}
