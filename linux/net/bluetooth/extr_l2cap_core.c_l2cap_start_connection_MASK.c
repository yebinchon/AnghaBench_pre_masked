
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l2cap_chan {TYPE_2__* conn; } ;
struct TYPE_4__ {TYPE_1__* hcon; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0("chan %p AMP capable: discover AMPs", VAR_1);
  FUNC_2(VAR_1);
 } else if (VAR_1->conn->hcon->type == VAR_0) {
  FUNC_3(VAR_1);
 } else {
  FUNC_4(VAR_1);
 }
}
