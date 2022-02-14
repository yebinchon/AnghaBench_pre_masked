
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathName2 ;
typedef int pathName ;


 int FUNC_0 (char*,int,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 char* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 char* VAR_3 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

void
FUNC_9(void)
{
 char VAR_4[256];
 char VAR_5[256];
 char VAR_6[32];

 if ((VAR_0[0] == '\0') || (VAR_1 == ((void*)0)))
  return;

 (void) FUNC_6(VAR_6, "trace.%u", (unsigned int) FUNC_4());
 (void) FUNC_0(VAR_4, sizeof(VAR_4), VAR_6);
 (void) FUNC_0(VAR_5, sizeof(VAR_5), VAR_3);

 (void) FUNC_7(&VAR_2);
 (void) FUNC_3(VAR_1, "SESSION ENDED at:    %s", FUNC_1(&VAR_2));
 (void) FUNC_2(VAR_1);

 (void) FUNC_8(VAR_5);
 (void) FUNC_5(VAR_4, VAR_5);
}
