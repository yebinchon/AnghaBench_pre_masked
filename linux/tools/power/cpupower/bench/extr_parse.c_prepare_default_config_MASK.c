
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int sleep; int load; int sleep_step; int load_step; int cycles; int rounds; int output; int governor; scalar_t__ verbose; int prio; scalar_t__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct config* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct config*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

struct config *FUNC_4()
{
 struct config *VAR_3 = FUNC_1(sizeof(struct config));

 FUNC_0("loading defaults\n");

 VAR_3->sleep = 500000;
 VAR_3->load = 500000;
 VAR_3->sleep_step = 500000;
 VAR_3->load_step = 500000;
 VAR_3->cycles = 5;
 VAR_3->rounds = 50;
 VAR_3->cpu = 0;
 VAR_3->prio = VAR_1;
 VAR_3->verbose = 0;
 FUNC_3(VAR_3->governor, "ondemand", sizeof(VAR_3->governor));

 VAR_3->output = VAR_2;





 return VAR_3;
}
