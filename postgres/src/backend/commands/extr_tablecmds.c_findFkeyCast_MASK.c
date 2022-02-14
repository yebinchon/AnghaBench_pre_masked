
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef scalar_t__ CoercionPathType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static CoercionPathType
FUNC_2(Oid VAR_5, Oid VAR_6, Oid *VAR_7)
{
 CoercionPathType VAR_8;

 if (VAR_5 == VAR_6)
 {
  VAR_8 = VAR_2;
  *VAR_7 = VAR_4;
 }
 else
 {
  VAR_8 = FUNC_1(VAR_5, VAR_6,
         VAR_0, VAR_7);
  if (VAR_8 == VAR_1)

   FUNC_0(VAR_3, "could not find cast from %u to %u",
     VAR_6, VAR_5);
 }

 return VAR_8;
}
