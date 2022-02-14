
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 () ;
 int * FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*) ;

bool
FUNC_4(unsigned long VAR_2, unsigned long VAR_3)
{
 char *VAR_4;
 HANDLE VAR_5;

 VAR_4 = FUNC_1();

 VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_4);

 FUNC_3(VAR_4);

 if (VAR_5 == ((void*)0))
  return 0;

 FUNC_0(VAR_5);
 return 1;
}
