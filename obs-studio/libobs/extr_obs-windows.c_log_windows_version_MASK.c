
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct win_version_info {int revis; int build; int minor; int major; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,char const*) ;
 int FUNC_1 (struct win_version_info*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 struct win_version_info VAR_1;
 FUNC_1(&VAR_1);

 bool VAR_2 = FUNC_2();
 const char *VAR_3 = VAR_2 ? "64" : "32";

 FUNC_0(VAR_0, "Windows Version: %d.%d Build %d (revision: %d; %s-bit)",
      VAR_1.major, VAR_1.minor, VAR_1.build, VAR_1.revis, VAR_3);
}
