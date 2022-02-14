
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct TYPE_2__ {int type; } ;


 TYPE_1__* FUNC_0 (struct common_audit_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct common_audit_data*,int ,void (*) (struct audit_buffer*,void*)) ;

void FUNC_2(int VAR_1, struct common_audit_data *VAR_2,
    void (*VAR_3) (struct audit_buffer *, void *))
{
 FUNC_0(VAR_2)->type = VAR_1;
 FUNC_1(VAR_2, VAR_0, VAR_3);
}
