
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_3__ {size_t rlim; int max; } ;
struct TYPE_4__ {scalar_t__ peer; int label; TYPE_1__ rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*,int ,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4(struct audit_buffer *VAR_3, void *VAR_4)
{
 struct common_audit_data *VAR_5 = VAR_4;

 FUNC_2(VAR_3, " rlimit=%s value=%lu",
    VAR_2[FUNC_1(VAR_5)->rlim.rlim], FUNC_1(VAR_5)->rlim.max);
 if (FUNC_1(VAR_5)->peer) {
  FUNC_2(VAR_3, " peer=");
  FUNC_0(VAR_3, FUNC_3(FUNC_1(VAR_5)->label), FUNC_1(VAR_5)->peer,
    VAR_0, VAR_1);
 }
}
