
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_if_platform_info {int api_version; int driver_version; int mbox_supported; int mmio_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int ,struct isst_if_platform_info*) ;
 int FUNC_5 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct isst_if_platform_info VAR_3;
 const char *VAR_4 = "/dev/isst_interface";
 int VAR_5;

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (VAR_5 < 0)
  FUNC_1(-1, "%s open failed", VAR_4);

 if (FUNC_4(VAR_5, VAR_0, &VAR_3) == -1) {
  FUNC_6("ISST_IF_GET_PLATFORM_INFO");
 } else {
  FUNC_3(VAR_2, "Platform: API version : %d\n",
   VAR_3.api_version);
  FUNC_3(VAR_2, "Platform: Driver version : %d\n",
   VAR_3.driver_version);
  FUNC_3(VAR_2, "Platform: mbox supported : %d\n",
   VAR_3.mbox_supported);
  FUNC_3(VAR_2, "Platform: mmio supported : %d\n",
   VAR_3.mmio_supported);
 }

 FUNC_0(VAR_5);

 FUNC_2(0);
}
