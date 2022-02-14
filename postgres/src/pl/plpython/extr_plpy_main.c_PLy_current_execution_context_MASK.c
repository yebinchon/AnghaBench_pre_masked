
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLyExecutionContext ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,char*) ;

PLyExecutionContext *
FUNC_1(void)
{
 if (VAR_1 == ((void*)0))
  FUNC_0(VAR_0, "no Python function is currently executing");

 return VAR_1;
}
