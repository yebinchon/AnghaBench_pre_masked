
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tomoyo_mount_acl {int flags; int fs_type; int dir_name; int dev_name; TYPE_1__ head; } ;
struct tomoyo_acl_param {int dummy; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tomoyo_acl_param*,int *) ;
 int FUNC_1 (struct tomoyo_acl_param*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int,struct tomoyo_acl_param*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct tomoyo_acl_param *VAR_3)
{
 struct tomoyo_mount_acl VAR_4 = { .head.type = VAR_1 };
 int VAR_5;

 if (!FUNC_0(VAR_3, &VAR_4.dev_name) ||
     !FUNC_0(VAR_3, &VAR_4.dir_name) ||
     !FUNC_0(VAR_3, &VAR_4.fs_type) ||
     !FUNC_1(VAR_3, &VAR_4.flags))
  VAR_5 = -VAR_0;
 else
  VAR_5 = FUNC_4(&VAR_4.head, sizeof(VAR_4), VAR_3,
          VAR_2, ((void*)0));
 FUNC_2(&VAR_4.dev_name);
 FUNC_2(&VAR_4.dir_name);
 FUNC_2(&VAR_4.fs_type);
 FUNC_3(&VAR_4.flags);
 return VAR_5;
}
