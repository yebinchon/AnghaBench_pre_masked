
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* net; } ;
struct common_audit_data {TYPE_2__ u; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_7__ {size_t type; int protocol; } ;
struct TYPE_8__ {int request; int denied; scalar_t__ peer; int label; TYPE_3__ net; } ;
struct TYPE_5__ {size_t family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audit_buffer*,int,int *,int ,int ,int) ;
 int FUNC_1 (struct audit_buffer*,int ,scalar_t__,int ,int ) ;
 TYPE_4__* FUNC_2 (struct common_audit_data*) ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 int FUNC_4 (struct audit_buffer*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

void FUNC_6(struct audit_buffer *VAR_6, void *VAR_7)
{
 struct common_audit_data *VAR_8 = VAR_7;

 FUNC_3(VAR_6, " family=");
 if (VAR_3[VAR_8->u.net->family])
  FUNC_4(VAR_6, VAR_3[VAR_8->u.net->family]);
 else
  FUNC_3(VAR_6, "\"unknown(%d)\"", VAR_8->u.net->family);
 FUNC_3(VAR_6, " sock_type=");
 if (VAR_5[FUNC_2(VAR_8)->net.type])
  FUNC_4(VAR_6, VAR_5[FUNC_2(VAR_8)->net.type]);
 else
  FUNC_3(VAR_6, "\"unknown(%d)\"", FUNC_2(VAR_8)->net.type);
 FUNC_3(VAR_6, " protocol=%d", FUNC_2(VAR_8)->net.protocol);

 if (FUNC_2(VAR_8)->request & VAR_2) {
  FUNC_3(VAR_6, " requested_mask=");
  FUNC_0(VAR_6, FUNC_2(VAR_8)->request, ((void*)0), 0,
       VAR_4, VAR_2);

  if (FUNC_2(VAR_8)->denied & VAR_2) {
   FUNC_3(VAR_6, " denied_mask=");
   FUNC_0(VAR_6, FUNC_2(VAR_8)->denied, ((void*)0), 0,
        VAR_4, VAR_2);
  }
 }
 if (FUNC_2(VAR_8)->peer) {
  FUNC_3(VAR_6, " peer=");
  FUNC_1(VAR_6, FUNC_5(FUNC_2(VAR_8)->label), FUNC_2(VAR_8)->peer,
    VAR_0, VAR_1);
 }
}
