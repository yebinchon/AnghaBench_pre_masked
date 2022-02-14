
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_seqadj {scalar_t__ offset_after; scalar_t__ offset_before; } ;
struct nf_conn_seqadj {struct nf_ct_seqadj* seq; } ;
struct nf_conn {int status; } ;
typedef scalar_t__ s32 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct nf_conn_seqadj* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct nf_conn *VAR_1, enum ip_conntrack_info VAR_2,
        s32 VAR_3)
{
 enum ip_conntrack_dir VAR_4 = FUNC_0(VAR_2);
 struct nf_conn_seqadj *VAR_5;
 struct nf_ct_seqadj *VAR_6;

 if (VAR_3 == 0)
  return 0;

 FUNC_2(VAR_0, &VAR_1->status);

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = &VAR_5->seq[VAR_4];
 VAR_6->offset_before = VAR_3;
 VAR_6->offset_after = VAR_3;
 return 0;
}
