
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
typedef int kuid_t ;
struct TYPE_3__ {scalar_t__ target; int ouid; } ;
struct TYPE_4__ {int request; int denied; TYPE_1__ fs; scalar_t__ peer; int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audit_buffer*,int ,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct audit_buffer*,int) ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 int FUNC_4 (struct audit_buffer*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct audit_buffer *VAR_4, void *VAR_5)
{
 struct common_audit_data *VAR_6 = VAR_5;
 kuid_t VAR_7 = FUNC_5();

 if (FUNC_1(VAR_6)->request & VAR_0) {
  FUNC_3(VAR_4, " requested_mask=");
  FUNC_2(VAR_4, FUNC_1(VAR_6)->request);
 }
 if (FUNC_1(VAR_6)->denied & VAR_0) {
  FUNC_3(VAR_4, " denied_mask=");
  FUNC_2(VAR_4, FUNC_1(VAR_6)->denied);
 }
 if (FUNC_1(VAR_6)->request & VAR_0) {
  FUNC_3(VAR_4, " fsuid=%d",
     FUNC_6(&VAR_3, VAR_7));
  FUNC_3(VAR_4, " ouid=%d",
     FUNC_6(&VAR_3, FUNC_1(VAR_6)->fs.ouid));
 }

 if (FUNC_1(VAR_6)->peer) {
  FUNC_3(VAR_4, " target=");
  FUNC_0(VAR_4, FUNC_7(FUNC_1(VAR_6)->label), FUNC_1(VAR_6)->peer,
    VAR_1, VAR_2);
 } else if (FUNC_1(VAR_6)->fs.target) {
  FUNC_3(VAR_4, " target=");
  FUNC_4(VAR_4, FUNC_1(VAR_6)->fs.target);
 }
}
