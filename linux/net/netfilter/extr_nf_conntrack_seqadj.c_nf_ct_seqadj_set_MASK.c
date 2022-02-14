
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_seqadj {scalar_t__ offset_before; scalar_t__ offset_after; int correction_pos; } ;
struct nf_conn_seqadj {struct nf_ct_seqadj* seq; } ;
struct nf_conn {int lock; int status; } ;
typedef scalar_t__ s32 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct nf_conn_seqadj* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct nf_conn *VAR_1, enum ip_conntrack_info VAR_2,
       __be32 VAR_3, s32 VAR_4)
{
 struct nf_conn_seqadj *VAR_5 = FUNC_3(VAR_1);
 enum ip_conntrack_dir VAR_6 = FUNC_0(VAR_2);
 struct nf_ct_seqadj *VAR_7;

 if (VAR_4 == 0)
  return 0;

 if (FUNC_8(!VAR_5)) {
  FUNC_1(1, "Missing nfct_seqadj_ext_add() setup call\n");
  return 0;
 }

 FUNC_5(VAR_0, &VAR_1->status);

 FUNC_6(&VAR_1->lock);
 VAR_7 = &VAR_5->seq[VAR_6];
 if (VAR_7->offset_before == VAR_7->offset_after ||
     FUNC_2(VAR_7->correction_pos, FUNC_4(VAR_3))) {
  VAR_7->correction_pos = FUNC_4(VAR_3);
  VAR_7->offset_before = VAR_7->offset_after;
  VAR_7->offset_after += VAR_4;
 }
 FUNC_7(&VAR_1->lock);
 return 0;
}
