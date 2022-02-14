
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,char*) ;
 int FUNC_1 (int ,int*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_2(apr_pool_t *VAR_6, apr_pool_t *VAR_7, apr_pool_t *VAR_8)
{

 int VAR_9;

 FUNC_1(VAR_2, &VAR_9);
 if(VAR_9) {
  FUNC_0(VAR_1, VAR_0, 0, 0, "Apache is running a threaded MPM, but your PHP Module is not compiled to be threadsafe.  You need to recompile PHP.");
  return VAR_3;
 }



 VAR_5 = ((void*)0);
 return VAR_4;
}
