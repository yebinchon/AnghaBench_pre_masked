
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct l2cap_conn {TYPE_3__* hcon; } ;
struct device {int dummy; } ;
struct bnep_session {TYPE_2__* sock; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_7__ {struct device dev; } ;
struct TYPE_6__ {int sk; } ;
struct TYPE_5__ {struct l2cap_conn* conn; } ;


 TYPE_4__* FUNC_0 (int ) ;

__attribute__((used)) static struct device *FUNC_1(struct bnep_session *VAR_0)
{
 struct l2cap_conn *VAR_1 = FUNC_0(VAR_0->sock->sk)->chan->conn;

 if (!VAR_1 || !VAR_1->hcon)
  return ((void*)0);

 return &VAR_1->hcon->dev;
}
