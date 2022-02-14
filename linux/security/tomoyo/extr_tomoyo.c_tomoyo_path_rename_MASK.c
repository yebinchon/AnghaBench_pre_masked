
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct path*,struct path*) ;

__attribute__((used)) static int FUNC_1(const struct path *VAR_1,
         struct dentry *VAR_2,
         const struct path *VAR_3,
         struct dentry *VAR_4)
{
 struct path VAR_5 = { .mnt = VAR_1->mnt, .dentry = VAR_2 };
 struct path VAR_6 = { .mnt = VAR_3->mnt, .dentry = VAR_4 };

 return FUNC_0(VAR_0, &VAR_5, &VAR_6);
}
