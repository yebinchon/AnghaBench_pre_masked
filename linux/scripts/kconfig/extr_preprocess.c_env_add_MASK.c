
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env {int node; void* value; void* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct env* FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2)
{
 struct env *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->name = FUNC_2(VAR_1);
 VAR_3->value = FUNC_2(VAR_2);

 FUNC_0(&VAR_3->node, &VAR_0);
}
