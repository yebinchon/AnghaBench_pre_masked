
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (char*,int ,int ,int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;

HANDLE FUNC_3(void)
{
    VAR_3 = FUNC_0("\\Device\\Pice",VAR_0,0,((void*)0),VAR_2,((void*)0),((void*)0));
 if(VAR_3 == VAR_1)
 {
  FUNC_2("LOADER: debugger is not loaded. Last Error: %ld\n", FUNC_1());
 }

 return VAR_3;
}
