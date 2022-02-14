
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ,int) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(Oid VAR_5)
{
 ObjectAddress VAR_6;

 if (&FUNC_0 &&
  FUNC_0) (VAR_5))
  return 1;







 if (FUNC_2(VAR_5) != ((void*)0))
  return 1;







 VAR_6.classId = VAR_0;
 VAR_6.objectId = VAR_5;
 VAR_6.objectSubId = 0;
 if (!FUNC_1(&VAR_6,
         VAR_2,
         VAR_4 |
         VAR_3,
         VAR_1, 0))
  return 1;

 return 0;
}
