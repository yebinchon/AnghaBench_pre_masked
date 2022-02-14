
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path_cond {int member_1; int member_0; } ;
struct path {int dentry; } ;
struct TYPE_2__ {int i_mode; int i_uid; } ;


 int FUNC_0 (char const*,struct path const*,int ,struct path_cond*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const struct path *VAR_1, u32 VAR_2)
{
 struct path_cond VAR_3 = { FUNC_1(VAR_1->dentry)->i_uid,
      FUNC_1(VAR_1->dentry)->i_mode
 };

 if (!FUNC_2(VAR_1->dentry))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
}
