
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_conn {TYPE_1__* hcon; } ;
struct l2cap_chan {int sec_level; struct l2cap_conn* conn; } ;
typedef int __u8 ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(struct l2cap_chan *VAR_1, bool VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_1->conn;
 __u8 VAR_4;

 if (VAR_3->hcon->type == VAR_0)
  return FUNC_2(VAR_3->hcon, VAR_1->sec_level);

 VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3->hcon, VAR_1->sec_level, VAR_4,
     VAR_2);
}
