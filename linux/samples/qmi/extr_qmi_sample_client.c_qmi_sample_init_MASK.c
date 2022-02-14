
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_4;

 VAR_2 = FUNC_2("qmi_sample", ((void*)0));
 if (FUNC_0(VAR_2)) {
  FUNC_6("failed to create qmi_sample dir\n");
  return FUNC_1(VAR_2);
 }

 VAR_4 = FUNC_4(&VAR_3);
 if (VAR_4)
  goto err_remove_debug_dir;

 VAR_4 = FUNC_8(&VAR_0, 0, &VAR_1, ((void*)0));
 if (VAR_4 < 0)
  goto err_unregister_driver;

 FUNC_7(&VAR_0, 15, 0, 0);

 return 0;

err_unregister_driver:
 FUNC_5(&VAR_3);
err_remove_debug_dir:
 FUNC_3(VAR_2);

 return VAR_4;
}
