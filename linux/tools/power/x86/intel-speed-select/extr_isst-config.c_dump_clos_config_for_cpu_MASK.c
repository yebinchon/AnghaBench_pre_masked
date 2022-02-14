
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_clos_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,struct isst_clos_config*) ;
 int FUNC_1 (int,int ,struct isst_clos_config*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2, void *VAR_3, void *VAR_4,
         void *VAR_5, void *VAR_6)
{
 struct isst_clos_config VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_0, &VAR_7);
 if (VAR_8)
  FUNC_2("isst_pm_get_clos");
 else
  FUNC_0(VAR_2, VAR_1, VAR_0,
           &VAR_7);
}
