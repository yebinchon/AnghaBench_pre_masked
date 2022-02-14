
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_ct_seqadj {int dummy; } ;
struct nf_conn_seqadj {struct nf_ct_seqadj* seq; } ;
struct nf_conn {int status; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nf_ct_seqadj*,int ) ;
 struct nf_conn_seqadj* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct nf_conn *VAR_6)
{
 struct nf_conn_seqadj *VAR_7 = FUNC_1(VAR_6);
 struct nf_ct_seqadj *VAR_8;

 if (!(VAR_6->status & VAR_2) || !VAR_7)
  return 0;

 FUNC_2(&VAR_6->lock);
 VAR_8 = &VAR_7->seq[VAR_3];
 if (FUNC_0(VAR_5, VAR_8, VAR_0) == -1)
  goto err;

 VAR_8 = &VAR_7->seq[VAR_4];
 if (FUNC_0(VAR_5, VAR_8, VAR_1) == -1)
  goto err;

 FUNC_3(&VAR_6->lock);
 return 0;
err:
 FUNC_3(&VAR_6->lock);
 return -1;
}
