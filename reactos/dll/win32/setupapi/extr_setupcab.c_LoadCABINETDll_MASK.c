
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
  if (!VAR_0) {
    VAR_0 = FUNC_2("cabinet.dll");
    if (VAR_0) {
      VAR_4 = (void *)FUNC_1(VAR_0, "FDICreate");
      VAR_3 = (void *)FUNC_1(VAR_0, "FDICopy");
      VAR_5 = (void *)FUNC_1(VAR_0, "FDIDestroy");
      return VAR_2;
    } else {
      FUNC_0("load cabinet dll failed.\n");
      return VAR_1;
    }
  } else
    return VAR_2;
}
