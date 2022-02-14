
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int labels; } ;
struct sw_flow_key {TYPE_1__ ct; } ;
struct ovs_key_ct_labels {int* ct_labels_32; } ;
struct nf_conn_labels {scalar_t__ bits; } ;
struct nf_conn {scalar_t__ master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ovs_key_ct_labels const*) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ,struct nf_conn*) ;
 struct nf_conn_labels* FUNC_3 (scalar_t__) ;
 struct nf_conn_labels* FUNC_4 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_5(struct nf_conn *VAR_4, struct sw_flow_key *VAR_5,
         const struct ovs_key_ct_labels *VAR_6,
         const struct ovs_key_ct_labels *VAR_7)
{
 struct nf_conn_labels *VAR_8, *VAR_9;
 bool VAR_10 = FUNC_0(VAR_7);


 VAR_9 = VAR_4->master ? FUNC_3(VAR_4->master) : ((void*)0);

 if (!VAR_9 && !VAR_10)
  return 0;

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8)
  return -VAR_0;


 if (VAR_9)
  *VAR_8 = *VAR_9;

 if (VAR_10) {
  u32 *VAR_11 = (u32 *)VAR_8->bits;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
   VAR_11[VAR_12] = (VAR_11[VAR_12] & ~VAR_7->ct_labels_32[VAR_12]) |
    (VAR_6->ct_labels_32[VAR_12]
     & VAR_7->ct_labels_32[VAR_12]);
 }




 FUNC_2(VAR_1, VAR_4);

 FUNC_1(&VAR_5->ct.labels, VAR_8->bits, VAR_2);

 return 0;
}
