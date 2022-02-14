
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct svcxprt_rdma {int sc_snd_w_inv; } ;
struct svc_rdma_recv_ctxt {int rc_inv_rkey; scalar_t__* rc_recv_buf; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct svcxprt_rdma *VAR_2,
      struct svc_rdma_recv_ctxt *VAR_3)
{
 __be32 VAR_4, *VAR_5;
 u32 VAR_6, VAR_7;

 VAR_3->rc_inv_rkey = 0;

 if (!VAR_2->sc_snd_w_inv)
  return;

 VAR_4 = VAR_1;
 VAR_5 = VAR_3->rc_recv_buf;
 VAR_5 += VAR_0;


 while (*VAR_5++ != VAR_1) {
  VAR_5++;
  if (VAR_4 == VAR_1)
   VAR_4 = *VAR_5;
  else if (VAR_4 != *VAR_5)
   return;
  VAR_5 += 4;
 }


 while (*VAR_5++ != VAR_1) {
  VAR_7 = FUNC_1(VAR_5++);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_4 == VAR_1)
    VAR_4 = *VAR_5;
   else if (VAR_4 != *VAR_5)
    return;
   VAR_5 += 4;
  }
 }


 if (*VAR_5++ != VAR_1) {
  VAR_7 = FUNC_1(VAR_5++);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_4 == VAR_1)
    VAR_4 = *VAR_5;
   else if (VAR_4 != *VAR_5)
    return;
   VAR_5 += 4;
  }
 }

 VAR_3->rc_inv_rkey = FUNC_0(VAR_4);
}
