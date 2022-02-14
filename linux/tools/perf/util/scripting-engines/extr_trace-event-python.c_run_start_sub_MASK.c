
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 VAR_1 = FUNC_0("__main__");
 if (VAR_1 == ((void*)0))
  return -1;
 FUNC_2(VAR_1);

 VAR_0 = FUNC_1(VAR_1);
 if (VAR_0 == ((void*)0))
  goto error;
 FUNC_2(VAR_0);

 FUNC_4("trace_begin", ((void*)0));

 return 0;

error:
 FUNC_3(VAR_0);
 FUNC_3(VAR_1);
 return -1;
}
