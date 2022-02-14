
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_instance {int flags; int pd; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct padata_instance *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return;

 VAR_1->flags &= ~VAR_0;

 FUNC_3();

 FUNC_0();
 FUNC_1(VAR_1->pd);
 FUNC_2();
}
