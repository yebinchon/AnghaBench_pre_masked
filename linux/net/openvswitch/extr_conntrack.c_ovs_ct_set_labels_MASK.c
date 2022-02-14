
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int labels; } ;
struct sw_flow_key {TYPE_1__ ct; } ;
struct ovs_key_ct_labels {int ct_labels_32; } ;
struct nf_conn_labels {int bits; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct nf_conn*,int ,int ,int ) ;
 struct nf_conn_labels* FUNC_2 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_3, struct sw_flow_key *VAR_4,
        const struct ovs_key_ct_labels *VAR_5,
        const struct ovs_key_ct_labels *VAR_6)
{
 struct nf_conn_labels *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3, VAR_5->ct_labels_32,
        VAR_6->ct_labels_32,
        VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_0(&VAR_4->ct.labels, VAR_7->bits, VAR_1);

 return 0;
}
