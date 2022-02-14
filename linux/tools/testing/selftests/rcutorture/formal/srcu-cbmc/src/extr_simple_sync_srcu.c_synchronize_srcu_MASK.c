
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int completed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct srcu_struct*) ;
 int FUNC_3 (struct srcu_struct*,int,int const) ;

void FUNC_4(struct srcu_struct *VAR_0)
{
 int VAR_1;




 const int VAR_2 = 1;

 FUNC_1();



 VAR_1 = 1 ^ (VAR_0->completed & 1);



 FUNC_0(FUNC_3(VAR_0, VAR_1, VAR_2));

 FUNC_2(VAR_0);

 FUNC_0(FUNC_3(VAR_0, VAR_1^1, VAR_2));
}
