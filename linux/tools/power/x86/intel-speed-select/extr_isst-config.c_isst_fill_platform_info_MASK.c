
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ api_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,int ,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
 const char *VAR_4 = "/dev/isst_interface";
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_1);
 if (VAR_5 < 0)
  FUNC_1(-1, "%s open failed", VAR_4);

 if (FUNC_2(VAR_5, VAR_0, &VAR_2) == -1) {
  FUNC_4("ISST_IF_GET_PLATFORM_INFO");
  FUNC_0(VAR_5);
  return -1;
 }

 FUNC_0(VAR_5);

 if (VAR_2.api_version > VAR_3) {
  FUNC_5("Incompatible API versions; Upgrade of tool is required\n");
  return -1;
 }
 return 0;
}
