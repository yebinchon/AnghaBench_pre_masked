
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int security_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,int *) ;

__attribute__((used)) static char *
FUNC_9(void)
{
 if (!VAR_3)
 {
  security_context_t VAR_4;

  if (FUNC_8("unlabeled", &VAR_4) < 0)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("SELinux: failed to get initial security label: %m")));
  FUNC_3();
  {
   VAR_3 = FUNC_0(VAR_2, VAR_4);
  }
  FUNC_2();
  {
   FUNC_7(VAR_4);
  }
  FUNC_1();
 }
 return VAR_3;
}
