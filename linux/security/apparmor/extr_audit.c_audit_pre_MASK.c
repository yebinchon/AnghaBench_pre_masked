
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_7__ {scalar_t__ hname; } ;
struct aa_profile {TYPE_2__ base; TYPE_3__* ns; } ;
struct aa_label {int dummy; } ;
struct TYPE_9__ {size_t type; scalar_t__ name; struct aa_label* label; scalar_t__ error; scalar_t__ info; scalar_t__ op; } ;
struct TYPE_6__ {scalar_t__ hname; } ;
struct TYPE_8__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct audit_buffer*,TYPE_3__*,struct aa_label*,int ,int ) ;
 TYPE_4__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (struct audit_buffer*,scalar_t__) ;
 int FUNC_4 (struct audit_buffer*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct aa_label*) ;
 struct aa_profile* FUNC_6 (struct aa_label*) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_7(struct audit_buffer *VAR_5, void *VAR_6)
{
 struct common_audit_data *VAR_7 = VAR_6;

 if (VAR_3) {
  FUNC_2(VAR_5, "apparmor=");
  FUNC_3(VAR_5, VAR_2[FUNC_1(VAR_7)->type]);
 }

 if (FUNC_1(VAR_7)->op) {
  FUNC_2(VAR_5, " operation=");
  FUNC_3(VAR_5, FUNC_1(VAR_7)->op);
 }

 if (FUNC_1(VAR_7)->info) {
  FUNC_2(VAR_5, " info=");
  FUNC_3(VAR_5, FUNC_1(VAR_7)->info);
  if (FUNC_1(VAR_7)->error)
   FUNC_2(VAR_5, " error=%d", FUNC_1(VAR_7)->error);
 }

 if (FUNC_1(VAR_7)->label) {
  struct aa_label *VAR_8 = FUNC_1(VAR_7)->label;

  if (FUNC_5(VAR_8)) {
   struct aa_profile *VAR_9 = FUNC_6(VAR_8);

   if (VAR_9->ns != VAR_4) {
    FUNC_2(VAR_5, " namespace=");
    FUNC_4(VAR_5,
             VAR_9->ns->base.hname);
   }
   FUNC_2(VAR_5, " profile=");
   FUNC_4(VAR_5, VAR_9->base.hname);
  } else {
   FUNC_2(VAR_5, " label=");
   FUNC_0(VAR_5, VAR_4, VAR_8, VAR_0,
     VAR_1);
  }
 }

 if (FUNC_1(VAR_7)->name) {
  FUNC_2(VAR_5, " name=");
  FUNC_4(VAR_5, FUNC_1(VAR_7)->name);
 }
}
