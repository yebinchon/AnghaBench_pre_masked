
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win10_revision ;
struct win_version_info {int major; int revis; int member_0; } ;
typedef scalar_t__ LSTATUS ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_3 (char*,struct win_version_info*) ;

void FUNC_4(struct win_version_info *VAR_3)
{
 static struct win_version_info VAR_4 = {0};
 static bool VAR_5 = 0;

 if (!VAR_3)
  return;

 if (!VAR_5) {
  FUNC_3(L"kernel32", &VAR_4);
  VAR_5 = 1;

  if (VAR_4.major == 10) {
   HKEY VAR_6;
   DWORD VAR_7, VAR_8;
   LSTATUS VAR_9;

   VAR_9 = FUNC_1(VAR_1, VAR_2,
          &VAR_6);
   if (VAR_9 != VAR_0)
    return;

   VAR_7 = sizeof(VAR_8);

   VAR_9 = FUNC_2(VAR_6, L"UBR", ((void*)0), ((void*)0),
        (LPBYTE)&VAR_8,
        &VAR_7);
   if (VAR_9 == VAR_0)
    VAR_4.revis = (int)VAR_8 > VAR_4.revis
          ? (int)VAR_8
          : VAR_4.revis;

   FUNC_0(VAR_6);
  }
 }

 *VAR_3 = VAR_4;
}
