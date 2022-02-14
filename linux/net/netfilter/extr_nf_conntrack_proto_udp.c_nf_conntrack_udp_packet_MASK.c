
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;
struct TYPE_3__ {scalar_t__ stream_ts; } ;
struct TYPE_4__ {TYPE_1__ udp; } ;
struct nf_conn {int status; TYPE_2__ proto; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*,int,struct sk_buff*,unsigned int) ;
 unsigned int* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,unsigned int,struct nf_hook_state const*) ;
 unsigned int* FUNC_9 (int ) ;

int FUNC_10(struct nf_conn *VAR_8,
       struct sk_buff *VAR_9,
       unsigned int VAR_10,
       enum ip_conntrack_info VAR_11,
       const struct nf_hook_state *VAR_12)
{
 unsigned int *VAR_13;

 if (FUNC_8(VAR_9, VAR_10, VAR_12))
  return -VAR_4;

 VAR_13 = FUNC_4(VAR_8);
 if (!VAR_13)
  VAR_13 = FUNC_9(FUNC_2(VAR_8));

 if (!FUNC_1(VAR_8))
  VAR_8->proto.udp.stream_ts = 2 * VAR_0 + VAR_7;




 if (FUNC_6(VAR_3, &VAR_8->status)) {
  unsigned long VAR_14 = VAR_13[VAR_6];


  if (FUNC_7(VAR_7, VAR_8->proto.udp.stream_ts))
   VAR_14 = VAR_13[VAR_5];

  FUNC_3(VAR_8, VAR_11, VAR_9, VAR_14);


  if (!FUNC_5(VAR_2, &VAR_8->status))
   FUNC_0(VAR_1, VAR_8);
 } else {
  FUNC_3(VAR_8, VAR_11, VAR_9,
       VAR_13[VAR_6]);
 }
 return VAR_4;
}
