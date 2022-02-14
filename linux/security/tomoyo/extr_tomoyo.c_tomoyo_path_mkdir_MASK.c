
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct path*,int) ;

__attribute__((used)) static int FUNC_1(const struct path *VAR_2, struct dentry *VAR_3,
        umode_t VAR_4)
{
 struct path VAR_5 = { .mnt = VAR_2->mnt, .dentry = VAR_3 };

 return FUNC_0(VAR_1, &VAR_5,
           VAR_4 & VAR_0);
}
