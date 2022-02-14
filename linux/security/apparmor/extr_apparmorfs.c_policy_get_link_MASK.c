
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; int mnt; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct aa_ns {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 struct aa_ns* FUNC_1 () ;
 int FUNC_2 (struct aa_ns*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct aa_ns*) ;

__attribute__((used)) static const char *FUNC_7(struct dentry *VAR_2,
       struct inode *VAR_3,
       struct delayed_call *VAR_4)
{
 struct aa_ns *VAR_5;
 struct path VAR_6;

 if (!VAR_2)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_1();
 VAR_6.mnt = FUNC_4(VAR_1);
 VAR_6.dentry = FUNC_3(FUNC_6(VAR_5));
 FUNC_5(&VAR_6);
 FUNC_2(VAR_5);

 return ((void*)0);
}
