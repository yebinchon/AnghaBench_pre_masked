
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int * security; } ;


 int FUNC_0 (int ,struct cred*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct cred *VAR_1)
{




 if (FUNC_2(VAR_1->security == ((void*)0)))
  return;

 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_1->security);
 VAR_1->security = ((void*)0);
}
