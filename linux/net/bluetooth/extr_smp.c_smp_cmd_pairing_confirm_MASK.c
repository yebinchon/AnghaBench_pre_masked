
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {int flags; int prnd; int pcnf; } ;
struct sk_buff {int len; int data; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct TYPE_2__ {scalar_t__ out; } ;


 int FUNC_0 (char*,struct l2cap_conn*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smp_chan*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct smp_chan*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct smp_chan*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct smp_chan*) ;
 int FUNC_9 (struct l2cap_conn*,int ,int,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static u8 FUNC_11(struct l2cap_conn *VAR_6, struct sk_buff *VAR_7)
{
 struct l2cap_chan *VAR_8 = VAR_6->smp;
 struct smp_chan *VAR_9 = VAR_8->data;

 FUNC_0("conn %p %s", VAR_6, VAR_6->hcon->out ? "master" : "slave");

 if (VAR_7->len < sizeof(VAR_9->pcnf))
  return VAR_5;

 FUNC_4(VAR_9->pcnf, VAR_7->data, sizeof(VAR_9->pcnf));
 FUNC_7(VAR_7, sizeof(VAR_9->pcnf));

 if (FUNC_10(VAR_3, &VAR_9->flags)) {
  int VAR_10;


  if (FUNC_10(VAR_2, &VAR_9->flags))
   return FUNC_5(VAR_9);

  FUNC_1("Unexpected SMP Pairing Confirm");

  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_6->hcon->out) {
  FUNC_9(VAR_6, VAR_0, sizeof(VAR_9->prnd),
        VAR_9->prnd);
  FUNC_2(VAR_9, VAR_0);
  return 0;
 }

 if (FUNC_10(VAR_4, &VAR_9->flags))
  return FUNC_8(VAR_9);

 FUNC_6(VAR_1, &VAR_9->flags);

 return 0;
}
