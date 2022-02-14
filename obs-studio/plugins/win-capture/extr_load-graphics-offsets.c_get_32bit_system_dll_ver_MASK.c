
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct win_version_info {int dummy; } ;
typedef int UINT ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,struct win_version_info*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static bool FUNC_6(const wchar_t *VAR_2,
         struct win_version_info *VAR_3)
{
 wchar_t VAR_4[VAR_1];
 UINT VAR_5;




 VAR_5 = FUNC_1(VAR_4, VAR_1);

 if (!VAR_5) {
  FUNC_3(VAR_0,
       "Failed to get windows 32bit system path: "
       "%lu",
       FUNC_0());
  return 0;
 }

 FUNC_5(VAR_4, L"\\");
 FUNC_5(VAR_4, VAR_2);
 return FUNC_4(VAR_4, VAR_3);
}
