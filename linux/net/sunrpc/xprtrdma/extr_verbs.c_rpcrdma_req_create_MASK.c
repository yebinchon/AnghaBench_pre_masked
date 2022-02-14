
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ri_max_segs; } ;
struct rpcrdma_buffer {int rb_lock; int rb_allreqs; } ;
struct rpcrdma_xprt {TYPE_1__ rx_ia; struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_req {struct rpcrdma_req* rl_rdmabuf; struct rpcrdma_req* rl_sendbuf; int rl_all; int rl_registered; int rl_free_mrs; void* rl_recvbuf; int rl_hdrbuf; } ;
struct rpcrdma_regbuf {struct rpcrdma_regbuf* rl_rdmabuf; struct rpcrdma_regbuf* rl_sendbuf; int rl_all; int rl_registered; int rl_free_mrs; void* rl_recvbuf; int rl_hdrbuf; } ;
typedef int gfp_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct rpcrdma_req*) ;
 struct rpcrdma_req* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rpcrdma_req*) ;
 int FUNC_6 (struct rpcrdma_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_7 (size_t,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

struct rpcrdma_req *FUNC_11(struct rpcrdma_xprt *VAR_4, size_t VAR_5,
           gfp_t VAR_6)
{
 struct rpcrdma_buffer *VAR_7 = &VAR_4->rx_buf;
 struct rpcrdma_regbuf *VAR_8;
 struct rpcrdma_req *VAR_9;
 size_t VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_6);
 if (VAR_9 == ((void*)0))
  goto out1;


 VAR_10 = VAR_2 + 3 +
       VAR_4->rx_ia.ri_max_segs * VAR_3;
 VAR_10 *= sizeof(__be32);
 VAR_8 = FUNC_7(FUNC_1(VAR_10),
      VAR_1, VAR_6);
 if (!VAR_8)
  goto out2;
 VAR_9->rl_rdmabuf = VAR_8;
 FUNC_10(&VAR_9->rl_hdrbuf, FUNC_5(VAR_8), FUNC_6(VAR_8));

 VAR_9->rl_sendbuf = FUNC_7(VAR_5, VAR_1, VAR_6);
 if (!VAR_9->rl_sendbuf)
  goto out3;

 VAR_9->rl_recvbuf = FUNC_7(VAR_5, VAR_0, VAR_6);
 if (!VAR_9->rl_recvbuf)
  goto out4;

 FUNC_0(&VAR_9->rl_free_mrs);
 FUNC_0(&VAR_9->rl_registered);
 FUNC_8(&VAR_7->rb_lock);
 FUNC_4(&VAR_9->rl_all, &VAR_7->rb_allreqs);
 FUNC_9(&VAR_7->rb_lock);
 return VAR_9;

out4:
 FUNC_2(VAR_9->rl_sendbuf);
out3:
 FUNC_2(VAR_9->rl_rdmabuf);
out2:
 FUNC_2(VAR_9);
out1:
 return ((void*)0);
}
