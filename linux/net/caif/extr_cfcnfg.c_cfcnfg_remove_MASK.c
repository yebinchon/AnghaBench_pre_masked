
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfcnfg {int ctrl; struct cfcnfg* mux; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfcnfg*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct cfcnfg *VAR_0)
{
 FUNC_2();
 if (VAR_0) {
  FUNC_3();

  FUNC_1(VAR_0->mux);
  FUNC_0(VAR_0->ctrl);
  FUNC_1(VAR_0);
 }
}
