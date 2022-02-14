
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct p9_trans_rdma {scalar_t__ port; scalar_t__ sq_depth; scalar_t__ rq_depth; scalar_t__ timeout; scalar_t__ privport; } ;
struct p9_client {struct p9_trans_rdma* trans; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, struct p9_client *VAR_5)
{
 struct p9_trans_rdma *VAR_6 = VAR_5->trans;

 if (VAR_6->port != VAR_0)
  FUNC_0(VAR_4, ",port=%u", VAR_6->port);
 if (VAR_6->sq_depth != VAR_2)
  FUNC_0(VAR_4, ",sq=%u", VAR_6->sq_depth);
 if (VAR_6->rq_depth != VAR_1)
  FUNC_0(VAR_4, ",rq=%u", VAR_6->rq_depth);
 if (VAR_6->timeout != VAR_3)
  FUNC_0(VAR_4, ",timeout=%lu", VAR_6->timeout);
 if (VAR_6->privport)
  FUNC_1(VAR_4, ",privport");
 return 0;
}
