
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ classId; int objectId; } ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(const ObjectAddress *VAR_2)
{
 if (VAR_2->classId == VAR_1)
  FUNC_1(VAR_2->objectId, VAR_0);
 else

  FUNC_0(VAR_2->classId, VAR_2->objectId, 0,
        VAR_0);
}
