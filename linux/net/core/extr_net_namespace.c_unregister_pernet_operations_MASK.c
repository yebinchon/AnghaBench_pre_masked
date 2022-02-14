
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int * id; } ;


 int FUNC_0 (struct pernet_operations*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct pernet_operations *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2();
 if (VAR_1->id)
  FUNC_1(&VAR_0, *VAR_1->id);
}
