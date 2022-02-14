
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tomoyo_task_acl {scalar_t__ domainname; TYPE_1__ head; } ;
struct tomoyo_acl_param {int data; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tomoyo_acl_param*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int,struct tomoyo_acl_param*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct tomoyo_acl_param *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (FUNC_2(&VAR_3->data, "manual_domain_transition ")) {
  struct tomoyo_task_acl VAR_5 = {
   .head.type = VAR_1,
   .domainname = FUNC_0(VAR_3),
  };

  if (VAR_5.domainname)
   VAR_4 = FUNC_3(&VAR_5.head, sizeof(VAR_5), VAR_3,
           VAR_2,
           ((void*)0));
  FUNC_1(VAR_5.domainname);
 }
 return VAR_4;
}
