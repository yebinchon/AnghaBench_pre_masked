
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfire_chip {struct comm_runtime* comm; } ;
struct comm_runtime {int receiver; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sfire_chip *VAR_0)
{
 struct comm_runtime *VAR_1 = VAR_0->comm;

 if (VAR_1)
  FUNC_0(&VAR_1->receiver);
}
