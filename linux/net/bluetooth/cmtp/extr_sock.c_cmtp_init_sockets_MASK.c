
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(void)
{
 int VAR_6;

 VAR_6 = FUNC_5(&VAR_2, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_0("Can't register CMTP socket");
  goto error;
 }

 VAR_6 = FUNC_2(&VAR_5, "cmtp", &VAR_3, ((void*)0));
 if (VAR_6 < 0) {
  FUNC_0("Failed to create CMTP proc file");
  FUNC_4(VAR_1);
  goto error;
 }

 FUNC_1("CMTP socket layer initialized");

 return 0;

error:
 FUNC_6(&VAR_2);
 return VAR_6;
}
