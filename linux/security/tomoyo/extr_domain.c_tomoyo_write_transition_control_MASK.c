
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tomoyo_transition_control {scalar_t__ const type; int is_last_name; void* program; void* domainname; int head; } ;
struct tomoyo_acl_param {char* data; TYPE_1__* ns; int * list; scalar_t__ is_delete; } ;
typedef int e ;
struct TYPE_2__ {int * policy_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 int VAR_6 ;
 int FUNC_6 (int *,int,struct tomoyo_acl_param*,int ) ;

int FUNC_7(struct tomoyo_acl_param *VAR_7,
        const u8 VAR_8)
{
 struct tomoyo_transition_control VAR_9 = { .type = VAR_8 };
 int VAR_10 = VAR_7->is_delete ? -VAR_1 : -VAR_2;
 char *VAR_11 = VAR_7->data;
 char *VAR_12 = FUNC_1(VAR_11, " from ");

 if (VAR_12) {
  *VAR_12 = '\0';
  VAR_12 += 6;
 } else if (VAR_8 == VAR_5 ||
     VAR_8 == VAR_4) {
  VAR_12 = VAR_11;
  VAR_11 = ((void*)0);
 }
 if (VAR_11 && FUNC_0(VAR_11, "any")) {
  if (!FUNC_3(VAR_11))
   return -VAR_0;
  VAR_9.program = FUNC_4(VAR_11);
  if (!VAR_9.program)
   goto out;
 }
 if (VAR_12 && FUNC_0(VAR_12, "any")) {
  if (!FUNC_2(VAR_12)) {
   if (!FUNC_3(VAR_12))
    goto out;
   VAR_9.is_last_name = 1;
  }
  VAR_9.domainname = FUNC_4(VAR_12);
  if (!VAR_9.domainname)
   goto out;
 }
 VAR_7->list = &VAR_7->ns->policy_list[VAR_3];
 VAR_10 = FUNC_6(&VAR_9.head, sizeof(VAR_9), VAR_7,
         VAR_6);
out:
 FUNC_5(VAR_9.domainname);
 FUNC_5(VAR_9.program);
 return VAR_10;
}
