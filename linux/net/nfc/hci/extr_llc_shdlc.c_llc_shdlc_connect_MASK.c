
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llc_shdlc {int connect_result; int sm_work; int state_mutex; scalar_t__ connect_tries; int * connect_wq; int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct llc_shdlc *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_3("\n");

 FUNC_1(&VAR_2->state_mutex);

 VAR_2->state = VAR_0;
 VAR_2->connect_wq = &VAR_1;
 VAR_2->connect_tries = 0;
 VAR_2->connect_result = 1;

 FUNC_2(&VAR_2->state_mutex);

 FUNC_4(&VAR_2->sm_work);

 FUNC_5(VAR_1, VAR_2->connect_result != 1);

 return VAR_2->connect_result;
}
