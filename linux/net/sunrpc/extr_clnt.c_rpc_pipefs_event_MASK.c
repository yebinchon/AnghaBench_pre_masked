
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fs_info; } ;
struct rpc_clnt {int dummy; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (struct rpc_clnt*,unsigned long,struct super_block*) ;
 struct rpc_clnt* FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_0, unsigned long VAR_1,
       void *VAR_2)
{
 struct super_block *VAR_3 = VAR_2;
 struct rpc_clnt *VAR_4;
 int VAR_5 = 0;

 while ((VAR_4 = FUNC_1(VAR_3->s_fs_info, VAR_1))) {
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_3);
  if (VAR_5)
   break;
 }
 return VAR_5;
}
