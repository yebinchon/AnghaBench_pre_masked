
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct path_cond {int member_1; int member_0; } ;
struct path {int dentry; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char const*,struct path const*,struct dentry*,int ,struct path_cond*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const struct path *VAR_1,
         struct dentry *VAR_2, u32 VAR_3, umode_t VAR_4)
{
 struct path_cond VAR_5 = { FUNC_1(), VAR_4 };

 if (!FUNC_2(VAR_1->dentry))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
}
