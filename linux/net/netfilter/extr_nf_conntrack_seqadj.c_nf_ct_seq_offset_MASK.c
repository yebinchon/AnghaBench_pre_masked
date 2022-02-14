
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_ct_seqadj {int offset_before; int offset_after; int correction_pos; } ;
struct nf_conn_seqadj {struct nf_ct_seqadj* seq; } ;
struct nf_conn {int dummy; } ;
typedef int s32 ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct nf_conn_seqadj* FUNC_1 (struct nf_conn const*) ;

s32 FUNC_2(const struct nf_conn *VAR_0,
       enum ip_conntrack_dir VAR_1,
       u32 VAR_2)
{
 struct nf_conn_seqadj *VAR_3 = FUNC_1(VAR_0);
 struct nf_ct_seqadj *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = &VAR_3->seq[VAR_1];
 return FUNC_0(VAR_2, VAR_4->correction_pos) ?
   VAR_4->offset_after : VAR_4->offset_before;
}
