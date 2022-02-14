
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct role_datum {int types; int dominates; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1, void *VAR_2)
{
 struct role_datum *VAR_3;

 FUNC_1(VAR_0);
 if (VAR_1) {
  VAR_3 = VAR_1;
  FUNC_0(&VAR_3->dominates);
  FUNC_0(&VAR_3->types);
 }
 FUNC_1(VAR_1);
 return 0;
}
