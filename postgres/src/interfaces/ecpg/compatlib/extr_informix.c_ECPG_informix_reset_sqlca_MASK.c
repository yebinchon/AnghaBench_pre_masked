
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlca_t {int dummy; } ;


 struct sqlca_t* FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;

void
FUNC_2(void)
{
 struct sqlca_t *VAR_1 = FUNC_0();

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1((char *) VAR_1, (char *) &VAR_0, sizeof(struct sqlca_t));
}
