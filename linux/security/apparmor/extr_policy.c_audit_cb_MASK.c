
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ ns; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 TYPE_2__* FUNC_0 (struct common_audit_data*) ;
 int FUNC_1 (struct audit_buffer*,char*) ;
 int FUNC_2 (struct audit_buffer*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct audit_buffer *VAR_0, void *VAR_1)
{
 struct common_audit_data *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2)->iface.ns) {
  FUNC_1(VAR_0, " ns=");
  FUNC_2(VAR_0, FUNC_0(VAR_2)->iface.ns);
 }
}
