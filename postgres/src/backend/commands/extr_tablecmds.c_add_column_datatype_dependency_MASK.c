
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_4__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(Oid VAR_3, int32 VAR_4, Oid VAR_5)
{
 ObjectAddress VAR_6,
    VAR_7;

 VAR_6.classId = VAR_1;
 VAR_6.objectId = VAR_3;
 VAR_6.objectSubId = VAR_4;
 VAR_7.classId = VAR_2;
 VAR_7.objectId = VAR_5;
 VAR_7.objectSubId = 0;
 FUNC_0(&VAR_6, &VAR_7, VAR_0);
}
