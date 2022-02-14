
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_cmd_ident_info {int irk; } ;
struct smp_chan {int irk; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct l2cap_conn *VAR_2, struct sk_buff *VAR_3)
{
 struct smp_cmd_ident_info *VAR_4 = (void *) VAR_3->data;
 struct l2cap_chan *VAR_5 = VAR_2->smp;
 struct smp_chan *VAR_6 = VAR_5->data;

 FUNC_0("");

 if (VAR_3->len < sizeof(*VAR_4))
  return VAR_1;

 FUNC_1(VAR_6, VAR_0);

 FUNC_3(VAR_3, sizeof(*VAR_4));

 FUNC_2(VAR_6->irk, VAR_4->irk, 16);

 return 0;
}
