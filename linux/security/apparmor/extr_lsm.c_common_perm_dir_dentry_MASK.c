
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path_cond {int dummy; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char const*,struct path*,int ,struct path_cond*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const struct path *VAR_1,
      struct dentry *VAR_2, u32 VAR_3,
      struct path_cond *VAR_4)
{
 struct path VAR_5 = { .mnt = VAR_1->mnt, .dentry = VAR_2 };

 return FUNC_0(VAR_0, &VAR_5, VAR_3, VAR_4);
}
