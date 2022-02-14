
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_ctx {int options; int open; int locally_initiated; int ctx_flags; int lifetime; int targ_name; int src_name; int mech; int need_release; int state; int exported_context_token; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_7(struct xdr_stream *VAR_1,
   struct gssx_ctx *VAR_2)
{
 __be32 *VAR_3;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_1, &VAR_2->exported_context_token);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_1, &VAR_2->state);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_1, &VAR_2->need_release);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_1, &VAR_2->mech);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_1, &VAR_2->src_name);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_1, &VAR_2->targ_name);
 if (VAR_4)
  return VAR_4;


 VAR_3 = FUNC_6(VAR_1, 8+8);
 if (FUNC_4(VAR_3 == ((void*)0)))
  return -VAR_0;
 VAR_3 = FUNC_5(VAR_3, &VAR_2->lifetime);


 VAR_3 = FUNC_5(VAR_3, &VAR_2->ctx_flags);


 VAR_4 = FUNC_1(VAR_1, &VAR_2->locally_initiated);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_1, &VAR_2->open);
 if (VAR_4)
  return VAR_4;



 VAR_4 = FUNC_0(VAR_1, &VAR_2->options);

 return VAR_4;
}
