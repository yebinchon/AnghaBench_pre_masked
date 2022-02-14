
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smp_csrk {int val; int type; } ;
struct smp_cmd_sign_info {int csrk; } ;
struct smp_chan {struct smp_csrk* csrk; int remote_key_dist; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct TYPE_2__ {scalar_t__ sec_level; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct smp_csrk* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct smp_chan*) ;

__attribute__((used)) static int FUNC_5(struct l2cap_conn *VAR_6, struct sk_buff *VAR_7)
{
 struct smp_cmd_sign_info *VAR_8 = (void *) VAR_7->data;
 struct l2cap_chan *VAR_9 = VAR_6->smp;
 struct smp_chan *VAR_10 = VAR_9->data;
 struct smp_csrk *VAR_11;

 FUNC_0("conn %p", VAR_6);

 if (VAR_7->len < sizeof(*VAR_8))
  return VAR_5;


 VAR_10->remote_key_dist &= ~VAR_4;

 FUNC_3(VAR_7, sizeof(*VAR_8));

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (VAR_11) {
  if (VAR_6->hcon->sec_level > VAR_0)
   VAR_11->type = VAR_2;
  else
   VAR_11->type = VAR_3;
  FUNC_2(VAR_11->val, VAR_8->csrk, sizeof(VAR_11->val));
 }
 VAR_10->csrk = VAR_11;
 FUNC_4(VAR_10);

 return 0;
}
