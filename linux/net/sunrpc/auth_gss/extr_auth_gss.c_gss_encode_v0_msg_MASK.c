
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int uid ;
struct user_namespace {int dummy; } ;
struct TYPE_2__ {int len; int data; } ;
struct gss_upcall_msg {TYPE_1__ msg; int databuf; int uid; } ;
struct cred {struct user_namespace* user_ns; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static void FUNC_3(struct gss_upcall_msg *VAR_0,
         const struct cred *VAR_1)
{
 struct user_namespace *VAR_2 = VAR_1->user_ns;

 uid_t VAR_3 = FUNC_1(VAR_2, VAR_0->uid);
 FUNC_2(VAR_0->databuf, &VAR_3, sizeof(VAR_3));
 VAR_0->msg.data = VAR_0->databuf;
 VAR_0->msg.len = sizeof(VAR_3);

 FUNC_0(sizeof(VAR_3) > sizeof(VAR_0->databuf));
}
