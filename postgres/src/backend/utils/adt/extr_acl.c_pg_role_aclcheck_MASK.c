
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int AclResult ;
typedef int AclMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static AclResult
FUNC_4(Oid VAR_4, Oid VAR_5, AclMode VAR_6)
{
 if (VAR_6 & FUNC_0(VAR_2))
 {





  if (FUNC_2(VAR_5, VAR_4))
   return VAR_1;
 }
 if (VAR_6 & VAR_2)
 {
  if (FUNC_3(VAR_5, VAR_4))
   return VAR_1;
 }
 if (VAR_6 & VAR_3)
 {
  if (FUNC_1(VAR_5, VAR_4))
   return VAR_1;
 }
 return VAR_0;
}
