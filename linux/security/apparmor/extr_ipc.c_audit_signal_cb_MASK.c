
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int request; int denied; size_t signal; int peer; int label; int unmappedsig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct audit_buffer*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (struct audit_buffer*,int) ;
 int FUNC_4 (int ) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_5(struct audit_buffer *VAR_7, void *VAR_8)
{
 struct common_audit_data *VAR_9 = VAR_8;

 if (FUNC_1(VAR_9)->request & VAR_0) {
  FUNC_2(VAR_7, " requested_mask=");
  FUNC_3(VAR_7, FUNC_1(VAR_9)->request);
  if (FUNC_1(VAR_9)->denied & VAR_0) {
   FUNC_2(VAR_7, " denied_mask=");
   FUNC_3(VAR_7, FUNC_1(VAR_9)->denied);
  }
 }
 if (FUNC_1(VAR_9)->signal == VAR_5)
  FUNC_2(VAR_7, "signal=unknown(%d)",
     FUNC_1(VAR_9)->unmappedsig);
 else if (FUNC_1(VAR_9)->signal < VAR_3)
  FUNC_2(VAR_7, " signal=%s", VAR_6[FUNC_1(VAR_9)->signal]);
 else
  FUNC_2(VAR_7, " signal=rtmin+%d",
     FUNC_1(VAR_9)->signal - VAR_4);
 FUNC_2(VAR_7, " peer=");
 FUNC_0(VAR_7, FUNC_4(FUNC_1(VAR_9)->label), FUNC_1(VAR_9)->peer,
   VAR_1, VAR_2);
}
