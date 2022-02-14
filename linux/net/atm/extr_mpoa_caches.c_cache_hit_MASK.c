
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mpc_p1; } ;
struct mpoa_client {int mps_ctrl_addr; TYPE_2__* dev; TYPE_1__ parameters; } ;
struct TYPE_10__ {int in_dst_ip; } ;
struct TYPE_9__ {TYPE_4__ in_info; } ;
struct k_message {int qos; TYPE_3__ content; int MPS_ctrl; void* type; } ;
struct atm_mpoa_qos {int qos; } ;
struct TYPE_11__ {scalar_t__ count; scalar_t__ entry_state; void* reply_wait; TYPE_4__ ctrl_info; int * shortcut; } ;
typedef TYPE_5__ in_cache_entry ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 struct atm_mpoa_qos* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int *) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct k_message*,struct mpoa_client*) ;

__attribute__((used)) static int FUNC_5(in_cache_entry *VAR_8, struct mpoa_client *VAR_9)
{
 struct atm_mpoa_qos *VAR_10;
 struct k_message VAR_11;

 VAR_8->count++;
 if (VAR_8->entry_state == VAR_4 && VAR_8->shortcut != ((void*)0))
  return VAR_6;

 if (VAR_8->entry_state == VAR_3) {
  if (VAR_8->count > VAR_9->parameters.mpc_p1) {
   VAR_11.type = VAR_7;
   VAR_11.content.in_info = VAR_8->ctrl_info;
   FUNC_3(VAR_11.MPS_ctrl, VAR_9->mps_ctrl_addr, VAR_0);
   VAR_10 = FUNC_0(VAR_8->ctrl_info.in_dst_ip);
   if (VAR_10 != ((void*)0))
    VAR_11.qos = VAR_10->qos;
   FUNC_4(&VAR_11, VAR_9);
   VAR_8->reply_wait = FUNC_2();
   VAR_8->entry_state = VAR_5;
  }
  if (VAR_8->shortcut != ((void*)0))
   return VAR_6;
  return VAR_1;
 }

 if (VAR_8->entry_state == VAR_5 && VAR_8->shortcut != ((void*)0))
  return VAR_6;

 if (VAR_8->count > VAR_9->parameters.mpc_p1 &&
     VAR_8->entry_state == VAR_2) {
  FUNC_1("(%s) threshold exceeded for ip %pI4, sending MPOA res req\n",
   VAR_9->dev->name, &VAR_8->ctrl_info.in_dst_ip);
  VAR_8->entry_state = VAR_5;
  VAR_11.type = VAR_7;
  FUNC_3(VAR_11.MPS_ctrl, VAR_9->mps_ctrl_addr, VAR_0);
  VAR_11.content.in_info = VAR_8->ctrl_info;
  VAR_10 = FUNC_0(VAR_8->ctrl_info.in_dst_ip);
  if (VAR_10 != ((void*)0))
   VAR_11.qos = VAR_10->qos;
  FUNC_4(&VAR_11, VAR_9);
  VAR_8->reply_wait = FUNC_2();
 }

 return VAR_1;
}
