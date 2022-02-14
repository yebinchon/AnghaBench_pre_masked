
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RegProcedure ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static Oid
FUNC_4(List *VAR_1,
      Oid VAR_2,
      Oid VAR_3,
      bool *VAR_4)
{
 Oid VAR_5;
 RegProcedure VAR_6;

 VAR_5 = FUNC_0(((void*)0), VAR_1,
           VAR_2, VAR_3,
           1, -1);
 if (!FUNC_1(VAR_5))
 {
  *VAR_4 = 0;
  return VAR_0;
 }

 VAR_6 = FUNC_3(VAR_5);
 *VAR_4 = FUNC_2(VAR_6);

 return VAR_5;
}
