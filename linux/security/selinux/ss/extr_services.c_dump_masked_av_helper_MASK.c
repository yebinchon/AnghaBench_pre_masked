
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perm_datum {int value; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, void *VAR_2)
{
 struct perm_datum *VAR_3 = VAR_1;
 char **VAR_4 = VAR_2;

 FUNC_0(VAR_3->value < 1 || VAR_3->value > 32);

 VAR_4[VAR_3->value - 1] = (char *)VAR_0;

 return 0;
}
