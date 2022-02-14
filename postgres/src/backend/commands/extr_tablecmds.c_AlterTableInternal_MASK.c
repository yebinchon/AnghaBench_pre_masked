
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int LOCKMODE ;


 int FUNC_0 (int *,int ,int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(Oid VAR_0, List *VAR_1, bool VAR_2)
{
 Relation VAR_3;
 LOCKMODE VAR_4 = FUNC_1(VAR_1);

 VAR_3 = FUNC_3(VAR_0, VAR_4);

 FUNC_2(VAR_0);

 FUNC_0(((void*)0), VAR_3, VAR_1, VAR_2, VAR_4);
}
