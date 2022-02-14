
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(JNIEnv *VAR_11)
{
 int VAR_12;
 FUNC_5(&VAR_4, VAR_5);


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)



  (void)FUNC_6(&VAR_10[VAR_12], ((void*)0));


 VAR_3 = FUNC_3(((void*)0), &VAR_9, VAR_1);
 if (!VAR_3)
  return -1;

 FUNC_4(VAR_3);
 return 0;
}
