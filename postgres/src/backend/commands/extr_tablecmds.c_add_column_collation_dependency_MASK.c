
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_4__ {scalar_t__ objectSubId; scalar_t__ objectId; int classId; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(Oid VAR_4, int32 VAR_5, Oid VAR_6)
{
 ObjectAddress VAR_7,
    VAR_8;


 if (FUNC_0(VAR_6) && VAR_6 != VAR_1)
 {
  VAR_7.classId = VAR_3;
  VAR_7.objectId = VAR_4;
  VAR_7.objectSubId = VAR_5;
  VAR_8.classId = VAR_0;
  VAR_8.objectId = VAR_6;
  VAR_8.objectSubId = 0;
  FUNC_1(&VAR_7, &VAR_8, VAR_2);
 }
}
