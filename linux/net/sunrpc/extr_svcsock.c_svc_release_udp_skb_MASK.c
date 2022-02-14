
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct sk_buff* rq_xprt_ctxt; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,struct svc_rqst*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct svc_rqst *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->rq_xprt_ctxt;

 if (VAR_1) {
  VAR_0->rq_xprt_ctxt = ((void*)0);

  FUNC_1("svc: service %p, releasing skb %p\n", VAR_0, VAR_1);
  FUNC_0(VAR_1);
 }
}
