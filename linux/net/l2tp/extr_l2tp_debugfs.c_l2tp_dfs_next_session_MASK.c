
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_dfs_seq_data {scalar_t__ session_idx; int * session; int tunnel; } ;


 int FUNC_0 (struct l2tp_dfs_seq_data*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct l2tp_dfs_seq_data *VAR_0)
{

 if (VAR_0->session)
  FUNC_1(VAR_0->session);

 VAR_0->session = FUNC_2(VAR_0->tunnel, VAR_0->session_idx);
 VAR_0->session_idx++;

 if (VAR_0->session == ((void*)0)) {
  VAR_0->session_idx = 0;
  FUNC_0(VAR_0);
 }

}
