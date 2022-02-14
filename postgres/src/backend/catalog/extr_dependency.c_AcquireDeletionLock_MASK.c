
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ classId; int objectId; } ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(const ObjectAddress *VAR_4, int VAR_5)
{
 if (VAR_4->classId == VAR_2)
 {






  if (VAR_5 & VAR_1)
   FUNC_1(VAR_4->objectId, VAR_3);
  else
   FUNC_1(VAR_4->objectId, VAR_0);
 }
 else
 {

  FUNC_0(VAR_4->classId, VAR_4->objectId, 0,
         VAR_0);
 }
}
