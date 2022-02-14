
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t cap; } ;
struct common_audit_data {TYPE_1__ u; } ;
struct audit_buffer {int dummy; } ;


 int FUNC_0 (struct audit_buffer*,char*) ;
 int FUNC_1 (struct audit_buffer*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(struct audit_buffer *VAR_1, void *VAR_2)
{
 struct common_audit_data *VAR_3 = VAR_2;

 FUNC_0(VAR_1, " capname=");
 FUNC_1(VAR_1, VAR_0[VAR_3->u.cap]);
}
