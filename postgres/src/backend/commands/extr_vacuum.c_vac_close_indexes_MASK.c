
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int LOCKMODE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(int VAR_0, Relation *VAR_1, LOCKMODE VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 while (VAR_0--)
 {
  Relation VAR_3 = VAR_1[VAR_0];

  FUNC_0(VAR_3, VAR_2);
 }
 FUNC_1(VAR_1);
}
