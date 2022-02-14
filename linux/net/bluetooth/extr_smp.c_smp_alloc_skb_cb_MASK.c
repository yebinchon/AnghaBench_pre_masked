
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int priority; } ;
struct l2cap_chan {int dummy; } ;
struct TYPE_3__ {struct l2cap_chan* chan; } ;
struct TYPE_4__ {TYPE_1__ l2cap; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct l2cap_chan *VAR_3,
     unsigned long VAR_4,
     unsigned long VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_2(VAR_4 + VAR_5, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->priority = VAR_2;
 FUNC_1(VAR_7)->l2cap.chan = VAR_3;

 return VAR_7;
}
