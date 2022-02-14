
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smp_chan {int security_timer; } ;
struct sk_buff {int dummy; } ;
struct l2cap_chan {TYPE_1__* conn; struct smp_chan* data; } ;
struct TYPE_2__ {int hcon; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct l2cap_chan*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct l2cap_chan *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 FUNC_0("chan %p", VAR_1);

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  struct smp_chan *VAR_4 = VAR_1->data;

  if (VAR_4)
   FUNC_1(&VAR_4->security_timer);

  FUNC_2(VAR_1->conn->hcon, VAR_0);
 }

 return VAR_3;
}
