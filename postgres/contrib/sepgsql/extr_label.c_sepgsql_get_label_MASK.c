
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int security_context_t ;
typedef int int32 ;
struct TYPE_3__ {int objectSubId; void* objectId; void* classId; } ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,int *) ;

char *
FUNC_11(Oid VAR_3, Oid VAR_4, int32 VAR_5)
{
 ObjectAddress VAR_6;
 char *VAR_7;

 VAR_6.classId = VAR_3;
 VAR_6.objectId = VAR_4;
 VAR_6.objectSubId = VAR_5;

 VAR_7 = FUNC_0(&VAR_6, VAR_2);
 if (!VAR_7 || FUNC_9((security_context_t) VAR_7))
 {
  security_context_t VAR_8;

  if (FUNC_10("unlabeled", &VAR_8) < 0)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("SELinux: failed to get initial security label: %m")));
  FUNC_3();
  {
   VAR_7 = FUNC_8(VAR_8);
  }
  FUNC_2();
  {
   FUNC_7(VAR_8);
  }
  FUNC_1();
 }
 return VAR_7;
}
