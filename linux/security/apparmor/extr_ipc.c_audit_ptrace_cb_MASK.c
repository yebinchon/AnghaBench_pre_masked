
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int request; int denied; int peer; int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audit_buffer*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct audit_buffer*,char*) ;
 int FUNC_3 (struct audit_buffer*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct audit_buffer *VAR_3, void *VAR_4)
{
 struct common_audit_data *VAR_5 = VAR_4;

 if (FUNC_1(VAR_5)->request & VAR_0) {
  FUNC_2(VAR_3, " requested_mask=");
  FUNC_3(VAR_3, FUNC_1(VAR_5)->request);

  if (FUNC_1(VAR_5)->denied & VAR_0) {
   FUNC_2(VAR_3, " denied_mask=");
   FUNC_3(VAR_3, FUNC_1(VAR_5)->denied);
  }
 }
 FUNC_2(VAR_3, " peer=");
 FUNC_0(VAR_3, FUNC_4(FUNC_1(VAR_5)->label), FUNC_1(VAR_5)->peer,
   VAR_1, VAR_2);
}
