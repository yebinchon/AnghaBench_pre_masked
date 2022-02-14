
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; } ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,char const*,void const*,size_t) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct dentry *VAR_0, const char *VAR_1,
        const void *VAR_2, size_t VAR_3)
{
 if (!FUNC_0() || (!FUNC_1(VAR_1)
      && !FUNC_4(VAR_1)))
  return;

 FUNC_2(VAR_0->d_inode);

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
