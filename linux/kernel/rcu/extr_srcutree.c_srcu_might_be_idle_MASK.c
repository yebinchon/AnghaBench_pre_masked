
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {scalar_t__ srcu_last_gp_end; int srcu_gp_seq; int srcu_gp_seq_needed; int sda; } ;
struct srcu_data {int srcu_cblist; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 () ;
 struct srcu_data* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (unsigned long,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct srcu_struct *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 struct srcu_data *VAR_4;
 unsigned long VAR_5;


 FUNC_4(VAR_3);
 VAR_4 = FUNC_8(VAR_1->sda);
 if (FUNC_5(&VAR_4->srcu_cblist)) {
  FUNC_3(VAR_3);
  return 0;
 }
 FUNC_3(VAR_3);
 VAR_5 = FUNC_2();
 if (VAR_0 == 0 ||
     FUNC_9(VAR_5, VAR_1->srcu_last_gp_end,
          VAR_1->srcu_last_gp_end + VAR_0))
  return 0;


 VAR_2 = FUNC_6(&VAR_1->srcu_gp_seq);
 FUNC_7();
 if (FUNC_1(VAR_2, FUNC_0(VAR_1->srcu_gp_seq_needed)))
  return 0;
 FUNC_7();
 if (VAR_2 != FUNC_6(&VAR_1->srcu_gp_seq))
  return 0;
 return 1;
}
