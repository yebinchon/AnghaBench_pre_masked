
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Bitmapset ;
typedef scalar_t__ AttrNumber ;
typedef int AclMode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_5(Oid VAR_5, Oid VAR_6, Bitmapset *VAR_7,
        AclMode VAR_8)
{
 int VAR_9 = -1;






 if (FUNC_0(VAR_7))
 {
  if (FUNC_4(VAR_5, VAR_6, VAR_8,
           VAR_1) != VAR_0)
   return 0;
 }

 while ((VAR_9 = FUNC_1(VAR_7, VAR_9)) >= 0)
 {

  AttrNumber VAR_10 = VAR_9 + VAR_3;

  if (VAR_10 == VAR_4)
  {

   FUNC_2(VAR_2, "whole-row update is not implemented");
  }
  else
  {
   if (FUNC_3(VAR_5, VAR_10, VAR_6,
           VAR_8) != VAR_0)
    return 0;
  }
 }
 return 1;
}
