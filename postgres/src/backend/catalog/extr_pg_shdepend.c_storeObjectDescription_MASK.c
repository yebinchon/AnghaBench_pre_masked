
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__* StringInfo ;
typedef scalar_t__ SharedDependencyType ;
typedef int SharedDependencyObjectType ;
typedef int ObjectAddress ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,...) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (int ,char*,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_4,
        SharedDependencyObjectType VAR_5,
        ObjectAddress *VAR_6,
        SharedDependencyType VAR_7,
        int VAR_8)
{
 char *VAR_9 = FUNC_4(VAR_6);


 if (VAR_4->len != 0)
  FUNC_2(VAR_4, '\n');

 switch (VAR_5)
 {
  case 130:
  case 128:
   if (VAR_7 == VAR_2)
    FUNC_1(VAR_4, FUNC_0("owner of %s"), VAR_9);
   else if (VAR_7 == VAR_1)
    FUNC_1(VAR_4, FUNC_0("privileges for %s"), VAR_9);
   else if (VAR_7 == VAR_3)
    FUNC_1(VAR_4, FUNC_0("target of %s"), VAR_9);
   else
    FUNC_3(VAR_0, "unrecognized dependency type: %d",
      (int) VAR_7);
   break;

  case 129:

   FUNC_1(VAR_4, FUNC_5("%d object in %s",
            "%d objects in %s",
            VAR_8),
        VAR_8, VAR_9);
   break;

  default:
   FUNC_3(VAR_0, "unrecognized object type: %d", VAR_5);
 }

 FUNC_6(VAR_9);
}
