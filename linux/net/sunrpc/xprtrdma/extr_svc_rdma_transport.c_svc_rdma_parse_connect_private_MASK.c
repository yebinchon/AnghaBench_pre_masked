
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxprt_rdma {int sc_snd_w_inv; } ;
struct rpcrdma_connect_private {scalar_t__ cp_magic; scalar_t__ cp_version; int cp_flags; int cp_recv_size; int cp_send_size; } ;
struct rdma_conn_param {struct rpcrdma_connect_private* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct svcxprt_rdma *VAR_3,
          struct rdma_conn_param *VAR_4)
{
 const struct rpcrdma_connect_private *VAR_5 = VAR_4->private_data;

 if (VAR_5 &&
     VAR_5->cp_magic == VAR_2 &&
     VAR_5->cp_version == VAR_1) {
  VAR_3->sc_snd_w_inv = VAR_5->cp_flags &
     VAR_0;

  FUNC_0("svcrdma: client send_size %u, recv_size %u "
   "remote inv %ssupported\n",
   FUNC_1(VAR_5->cp_send_size),
   FUNC_1(VAR_5->cp_recv_size),
   VAR_3->sc_snd_w_inv ? "" : "un");
 }
}
