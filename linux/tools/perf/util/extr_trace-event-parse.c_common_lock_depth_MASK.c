
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_context {int dummy; } ;


 int FUNC_0 (struct scripting_context*,int*,int*,char*) ;

int FUNC_1(struct scripting_context *VAR_0)
{
 static int VAR_1;
 static int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2, &VAR_1,
          "common_lock_depth");
 if (VAR_3 < 0)
  return -1;

 return VAR_3;
}
