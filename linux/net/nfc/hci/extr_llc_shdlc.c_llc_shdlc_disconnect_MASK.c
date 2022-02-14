
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llc_shdlc {int sm_work; int state_mutex; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct llc_shdlc *VAR_1)
{
 FUNC_2("\n");

 FUNC_0(&VAR_1->state_mutex);

 VAR_1->state = VAR_0;

 FUNC_1(&VAR_1->state_mutex);

 FUNC_3(&VAR_1->sm_work);
}
