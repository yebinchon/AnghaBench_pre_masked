
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {int dummy; } ;
struct cache_detail {struct dentry* pipefs; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,char const*,int ,struct cache_detail*) ;

int FUNC_3(struct dentry *VAR_0,
     const char *VAR_1, umode_t VAR_2,
     struct cache_detail *VAR_3)
{
 struct dentry *VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_3->pipefs = VAR_4;
 return 0;
}
