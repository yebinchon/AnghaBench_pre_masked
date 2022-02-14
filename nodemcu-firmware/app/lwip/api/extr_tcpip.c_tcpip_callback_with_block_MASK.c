
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
typedef int tcpip_callback_fn ;
struct TYPE_4__ {void* ctx; int function; } ;
struct TYPE_3__ {TYPE_2__ cb; } ;
struct tcpip_msg {TYPE_1__ msg; int type; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct tcpip_msg*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct tcpip_msg*) ;
 scalar_t__ FUNC_3 (int *,struct tcpip_msg*) ;
 scalar_t__ FUNC_4 (int *) ;

err_t
FUNC_5(tcpip_callback_fn VAR_6, void *VAR_7, u8_t VAR_8)
{
  struct tcpip_msg *VAR_9;

  if (FUNC_4(&VAR_5)) {
    VAR_9 = (struct tcpip_msg *)FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0)) {
      return VAR_0;
    }

    VAR_9->type = VAR_4;
    VAR_9->msg.cb.function = VAR_6;
    VAR_9->msg.cb.ctx = VAR_7;
    if (VAR_8) {
      FUNC_2(&VAR_5, VAR_9);
    } else {
      if (FUNC_3(&VAR_5, VAR_9) != VAR_1) {
        FUNC_0(VAR_3, VAR_9);
        return VAR_0;
      }
    }
    return VAR_1;
  }
  return VAR_2;
}
