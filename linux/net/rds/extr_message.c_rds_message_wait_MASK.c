
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_message {int m_flags; int m_flush_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct rds_message *VAR_1)
{
 FUNC_1(VAR_1->m_flush_wait,
   !FUNC_0(VAR_0, &VAR_1->m_flags));
}
