
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {struct cmd_results* error; } ;


 int FUNC_0 (struct cmd_results*) ;

void FUNC_1(struct cmd_results *VAR_0) {
 if (VAR_0->error) {
  FUNC_0(VAR_0->error);
 }
 FUNC_0(VAR_0);
}
