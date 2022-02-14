
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_aggregator {TYPE_2__* aggregated_name; TYPE_2__* original_name; int head; } ;
struct tomoyo_acl_param {TYPE_1__* ns; int * list; scalar_t__ is_delete; } ;
typedef int e ;
struct TYPE_4__ {scalar_t__ is_patterned; } ;
struct TYPE_3__ {int * policy_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (struct tomoyo_acl_param*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int,struct tomoyo_acl_param*,int ) ;

int FUNC_6(struct tomoyo_acl_param *VAR_5)
{
 struct tomoyo_aggregator VAR_6 = { };
 int VAR_7 = VAR_5->is_delete ? -VAR_1 : -VAR_2;
 const char *VAR_8 = FUNC_4(VAR_5);
 const char *VAR_9 = FUNC_4(VAR_5);

 if (!FUNC_1(VAR_8) ||
     !FUNC_0(VAR_9))
  return -VAR_0;
 VAR_6.original_name = FUNC_2(VAR_8);
 VAR_6.aggregated_name = FUNC_2(VAR_9);
 if (!VAR_6.original_name || !VAR_6.aggregated_name ||
     VAR_6.aggregated_name->is_patterned)
  goto out;
 VAR_5->list = &VAR_5->ns->policy_list[VAR_3];
 VAR_7 = FUNC_5(&VAR_6.head, sizeof(VAR_6), VAR_5,
         VAR_4);
out:
 FUNC_3(VAR_6.original_name);
 FUNC_3(VAR_6.aggregated_name);
 return VAR_7;
}
