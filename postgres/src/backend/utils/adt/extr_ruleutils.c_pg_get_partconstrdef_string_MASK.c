
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 int * FUNC_0 (char*,int ) ;
 char* FUNC_1 (int *,int *,int,int) ;
 int * FUNC_2 (int ) ;

char *
FUNC_3(Oid VAR_0, char *VAR_1)
{
 Expr *VAR_2;
 List *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_0);

 return FUNC_1((Node *) VAR_2, VAR_3, 1, 0);
}
