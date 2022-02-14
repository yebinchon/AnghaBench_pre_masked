
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int owner; int charset; struct nls_table* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nls_table* VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct nls_table *FUNC_4(char *VAR_2)
{
 struct nls_table *VAR_3;
 FUNC_1(&VAR_0);
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
  if (! FUNC_0(VAR_3->charset, VAR_2))
   break;
 if (VAR_3 && !FUNC_3(VAR_3->owner))
  VAR_3 = ((void*)0);
 FUNC_2(&VAR_0);
 return VAR_3;
}
