
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct net {int dummy; } ;
typedef int loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (struct net*) ;
 void* FUNC_1 (void*) ;
 struct net* FUNC_2 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_1);

 ++*VAR_3;

 return VAR_2 == VAR_0 ?
  FUNC_0(VAR_4) : FUNC_1(VAR_2);
}
