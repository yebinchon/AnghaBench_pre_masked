
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(Relation VAR_1, Oid VAR_2, List **VAR_3)
{
 Oid VAR_4;


 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == VAR_0)
  return;

 *VAR_3 = FUNC_1(*VAR_3, VAR_4);
 FUNC_2(VAR_1, VAR_4, VAR_3);
}
