
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {int peer; int label; scalar_t__ denied; scalar_t__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct audit_buffer*,scalar_t__,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct audit_buffer*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 (struct common_audit_data*) ;
 int FUNC_3 (struct audit_buffer*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct audit_buffer *VAR_6, void *VAR_7)
{
 struct common_audit_data *VAR_8 = VAR_7;

 if (FUNC_2(VAR_8)->request) {
  FUNC_3(VAR_6, " requested_mask=");
  FUNC_0(VAR_6, FUNC_2(VAR_8)->request, VAR_4,
       VAR_2, VAR_5,
       VAR_3);
 }
 if (FUNC_2(VAR_8)->denied) {
  FUNC_3(VAR_6, "denied_mask=");
  FUNC_0(VAR_6, FUNC_2(VAR_8)->denied, VAR_4,
       VAR_2, VAR_5,
       VAR_3);
 }
 FUNC_3(VAR_6, " peer=");
 FUNC_1(VAR_6, FUNC_4(FUNC_2(VAR_8)->label), FUNC_2(VAR_8)->peer,
          VAR_0, VAR_1);
}
