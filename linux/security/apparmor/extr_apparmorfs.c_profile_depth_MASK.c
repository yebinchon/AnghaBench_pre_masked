
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int parent; } ;


 struct aa_profile* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct aa_profile *VAR_0)
{
 int VAR_1 = 0;

 FUNC_1();
 for (VAR_1 = 0; VAR_0; VAR_0 = FUNC_0(VAR_0->parent))
  VAR_1++;
 FUNC_2();

 return VAR_1;
}
