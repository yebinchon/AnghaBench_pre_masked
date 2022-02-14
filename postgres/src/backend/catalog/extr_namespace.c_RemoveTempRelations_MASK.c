
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
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(Oid VAR_6)
{
 ObjectAddress VAR_7;
 VAR_7.classId = VAR_1;
 VAR_7.objectId = VAR_6;
 VAR_7.objectSubId = 0;

 FUNC_0(&VAR_7, VAR_0,
     VAR_2 |
     VAR_3 |
     VAR_5 |
     VAR_4);
}
