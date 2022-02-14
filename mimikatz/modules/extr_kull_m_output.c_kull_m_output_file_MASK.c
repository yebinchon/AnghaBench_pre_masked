
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCWCHAR ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;

BOOL FUNC_2(PCWCHAR VAR_2)
{
 BOOL VAR_3 = VAR_0;
 FILE * VAR_4 = ((void*)0);

 if(VAR_2)
#pragma warning(push)
#pragma warning(disable:4996)
 VAR_4 = FUNC_0(VAR_2, L"a");
#pragma warning(pop)
 if(VAR_4 || !VAR_2)
 {
  if(VAR_1)
   FUNC_1(VAR_1);
  VAR_1 = VAR_4;
 }
 return (!VAR_2 || (VAR_2 && VAR_1));
}
