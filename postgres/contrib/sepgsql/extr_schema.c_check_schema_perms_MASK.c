
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int) ;

__attribute__((used)) static bool
FUNC_3(Oid VAR_2, uint32 VAR_3, bool VAR_4)
{
 ObjectAddress VAR_5;
 char *VAR_6;
 bool VAR_7;

 VAR_5.classId = VAR_0;
 VAR_5.objectId = VAR_2;
 VAR_5.objectSubId = 0;
 VAR_6 = FUNC_0(&VAR_5);

 VAR_7 = FUNC_2(&VAR_5,
          VAR_1,
          VAR_3,
          VAR_6,
          VAR_4);
 FUNC_1(VAR_6);

 return VAR_7;
}
