
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int JNIEnv ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static fz_context *FUNC_6(JNIEnv *VAR_2)
{
 fz_context *VAR_3 = (fz_context *)



  FUNC_4(VAR_1);


 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (!VAR_3) { FUNC_3(VAR_2, "failed to clone fz_context"); return ((void*)0); }




 FUNC_5(VAR_1, VAR_3);

 return VAR_3;
}
