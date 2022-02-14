
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int * Name ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(Name VAR_2, Name VAR_3, Oid VAR_4)
{

 if (VAR_4 == VAR_0)
  return FUNC_2(FUNC_0(*VAR_2), FUNC_0(*VAR_3), VAR_1);


 return FUNC_3(FUNC_0(*VAR_2), FUNC_1(FUNC_0(*VAR_2)),
       FUNC_0(*VAR_3), FUNC_1(FUNC_0(*VAR_3)),
       VAR_4);
}
