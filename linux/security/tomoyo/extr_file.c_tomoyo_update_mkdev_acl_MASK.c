
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; } ;
struct tomoyo_mkdev_acl {int minor; int major; int mode; int name; TYPE_1__ head; int const perm; } ;
struct tomoyo_acl_param {int dummy; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tomoyo_acl_param*,int *) ;
 int FUNC_1 (struct tomoyo_acl_param*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int,struct tomoyo_acl_param*,int ,int ) ;

__attribute__((used)) static int FUNC_5(const u8 VAR_4,
       struct tomoyo_acl_param *VAR_5)
{
 struct tomoyo_mkdev_acl VAR_6 = {
  .head.type = VAR_1,
  .perm = VAR_4
 };
 int VAR_7;

 if (!FUNC_0(VAR_5, &VAR_6.name) ||
     !FUNC_1(VAR_5, &VAR_6.mode) ||
     !FUNC_1(VAR_5, &VAR_6.major) ||
     !FUNC_1(VAR_5, &VAR_6.minor))
  VAR_7 = -VAR_0;
 else
  VAR_7 = FUNC_4(&VAR_6.head, sizeof(VAR_6), VAR_5,
          VAR_3,
          VAR_2);
 FUNC_2(&VAR_6.name);
 FUNC_3(&VAR_6.mode);
 FUNC_3(&VAR_6.major);
 FUNC_3(&VAR_6.minor);
 return VAR_7;
}
