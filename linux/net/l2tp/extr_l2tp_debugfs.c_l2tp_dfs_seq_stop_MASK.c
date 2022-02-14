
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct l2tp_dfs_seq_data {int * tunnel; int * session; } ;


 struct l2tp_dfs_seq_data* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct l2tp_dfs_seq_data *VAR_3 = VAR_2;

 if (!VAR_3 || VAR_3 == VAR_0)
  return;




 if (VAR_3->session) {
  FUNC_0(VAR_3->session);
  VAR_3->session = ((void*)0);
 }
 if (VAR_3->tunnel) {
  FUNC_1(VAR_3->tunnel);
  VAR_3->tunnel = ((void*)0);
 }
}
