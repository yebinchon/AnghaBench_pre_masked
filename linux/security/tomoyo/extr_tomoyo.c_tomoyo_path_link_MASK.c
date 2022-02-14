
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct path*,struct path*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, const struct path *VAR_2,
       struct dentry *VAR_3)
{
 struct path VAR_4 = { .mnt = VAR_2->mnt, .dentry = VAR_1 };
 struct path VAR_5 = { .mnt = VAR_2->mnt, .dentry = VAR_3 };

 return FUNC_0(VAR_0, &VAR_4, &VAR_5);
}
