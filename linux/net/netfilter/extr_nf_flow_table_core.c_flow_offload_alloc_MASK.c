
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_flow_route {TYPE_2__* tuple; } ;
struct TYPE_3__ {int use; } ;
struct nf_conn {int status; TYPE_1__ ct_general; } ;
struct flow_offload {int flags; } ;
struct flow_offload_entry {struct nf_conn* ct; struct flow_offload flow; } ;
struct TYPE_4__ {int dst; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct flow_offload*,struct nf_conn*,struct nf_flow_route*,size_t) ;
 int FUNC_4 (struct flow_offload_entry*) ;
 struct flow_offload_entry* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 scalar_t__ FUNC_8 (int) ;

struct flow_offload *
FUNC_9(struct nf_conn *VAR_7, struct nf_flow_route *VAR_8)
{
 struct flow_offload_entry *VAR_9;
 struct flow_offload *VAR_10;

 if (FUNC_8(FUNC_6(VAR_7) ||
     !FUNC_0(&VAR_7->ct_general.use)))
  return ((void*)0);

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  goto err_ct_refcnt;

 VAR_10 = &VAR_9->flow;

 if (!FUNC_1(VAR_8->tuple[VAR_0].dst))
  goto err_dst_cache_original;

 if (!FUNC_1(VAR_8->tuple[VAR_1].dst))
  goto err_dst_cache_reply;

 VAR_9->ct = VAR_7;

 FUNC_3(VAR_10, VAR_7, VAR_8, VAR_0);
 FUNC_3(VAR_10, VAR_7, VAR_8, VAR_1);

 if (VAR_7->status & VAR_6)
  VAR_10->flags |= VAR_3;
 if (VAR_7->status & VAR_5)
  VAR_10->flags |= VAR_2;

 return VAR_10;

err_dst_cache_reply:
 FUNC_2(VAR_8->tuple[VAR_0].dst);
err_dst_cache_original:
 FUNC_4(VAR_9);
err_ct_refcnt:
 FUNC_7(VAR_7);

 return ((void*)0);
}
