
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 struct qstr FUNC_0 (unsigned char const*,int ) ;
 struct dentry* FUNC_1 (int ,struct qstr*) ;
 int FUNC_2 (unsigned char const*) ;

struct dentry *FUNC_3(const struct super_block *VAR_0,
          const unsigned char *VAR_1)
{
 struct qstr VAR_2 = FUNC_0(VAR_1, FUNC_2(VAR_1));
 return FUNC_1(VAR_0->s_root, &VAR_2);
}
