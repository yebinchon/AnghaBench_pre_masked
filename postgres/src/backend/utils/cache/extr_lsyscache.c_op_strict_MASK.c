
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RegProcedure ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

bool
FUNC_3(Oid VAR_2)
{
 RegProcedure VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == (RegProcedure) VAR_1)
  FUNC_0(VAR_0, "operator %u does not exist", VAR_2);

 return FUNC_1((Oid) VAR_3);
}
