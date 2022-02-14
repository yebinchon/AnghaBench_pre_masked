
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Operator ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int ,int ,int,int) ;
 int FUNC_2 (int *) ;

Oid
FUNC_3(List *VAR_1, Oid VAR_2, Oid VAR_3, bool VAR_4)
{
 Operator VAR_5;
 Oid VAR_6;

 VAR_5 = FUNC_1(((void*)0), VAR_1, VAR_2, VAR_3, VAR_4, -1);
 if (VAR_5 != ((void*)0))
 {
  VAR_6 = FUNC_2(VAR_5);
  FUNC_0(VAR_5);
  return VAR_6;
 }
 return VAR_0;
}
