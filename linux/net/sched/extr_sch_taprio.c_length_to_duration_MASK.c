
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int picos_per_byte; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct taprio_sched *VAR_0, int VAR_1)
{
 return FUNC_1(VAR_1 * FUNC_0(&VAR_0->picos_per_byte), 1000);
}
