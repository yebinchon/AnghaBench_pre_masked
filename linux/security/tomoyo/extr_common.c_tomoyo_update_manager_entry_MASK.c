
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_manager {scalar_t__ manager; int head; } ;
struct tomoyo_acl_param {int const is_delete; int * list; } ;
typedef int e ;
struct TYPE_2__ {int * policy_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (int *,int,struct tomoyo_acl_param*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6,
           const bool VAR_7)
{
 struct tomoyo_manager VAR_8 = { };
 struct tomoyo_acl_param VAR_9 = {

  .is_delete = VAR_7,
  .list = &VAR_4.policy_list[VAR_3],
 };
 int VAR_10 = VAR_7 ? -VAR_1 : -VAR_2;

 if (!FUNC_0(VAR_6) &&
     !FUNC_1(VAR_6))
  return -VAR_0;
 VAR_8.manager = FUNC_2(VAR_6);
 if (VAR_8.manager) {
  VAR_10 = FUNC_4(&VAR_8.head, sizeof(VAR_8), &VAR_9,
          VAR_5);
  FUNC_3(VAR_8.manager);
 }
 return VAR_10;
}
