
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ data; scalar_t__ flags; scalar_t__ trans; scalar_t__ src_name; scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mnt; } ;


 TYPE_2__* FUNC_0 (struct common_audit_data*) ;
 int FUNC_1 (struct audit_buffer*,char*) ;
 int FUNC_2 (struct audit_buffer*,scalar_t__) ;
 int FUNC_3 (struct audit_buffer*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct audit_buffer *VAR_0, void *VAR_1)
{
 struct common_audit_data *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2)->mnt.type) {
  FUNC_1(VAR_0, " fstype=");
  FUNC_2(VAR_0, FUNC_0(VAR_2)->mnt.type);
 }
 if (FUNC_0(VAR_2)->mnt.src_name) {
  FUNC_1(VAR_0, " srcname=");
  FUNC_2(VAR_0, FUNC_0(VAR_2)->mnt.src_name);
 }
 if (FUNC_0(VAR_2)->mnt.trans) {
  FUNC_1(VAR_0, " trans=");
  FUNC_2(VAR_0, FUNC_0(VAR_2)->mnt.trans);
 }
 if (FUNC_0(VAR_2)->mnt.flags) {
  FUNC_1(VAR_0, " flags=\"");
  FUNC_3(VAR_0, FUNC_0(VAR_2)->mnt.flags);
  FUNC_1(VAR_0, "\"");
 }
 if (FUNC_0(VAR_2)->mnt.data) {
  FUNC_1(VAR_0, " options=");
  FUNC_2(VAR_0, FUNC_0(VAR_2)->mnt.data);
 }
}
