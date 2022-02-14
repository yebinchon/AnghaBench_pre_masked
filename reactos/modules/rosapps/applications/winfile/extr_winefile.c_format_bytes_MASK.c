
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unit ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_2__ {int hInstance; } ;
typedef int LPWSTR ;
typedef int LONGLONG ;
typedef int DWORD ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,char const*,float,...) ;

__attribute__((used)) static void FUNC_2(LPWSTR VAR_4, LONGLONG VAR_5)
{
 static const WCHAR VAR_6[] = {'%', 'u', 0};
 static const WCHAR VAR_7[] = {'%', '.', '1', 'f', ' ', '%', 's', '\0'};

 if (VAR_5 < 1024)
  FUNC_1(VAR_4, VAR_6, (DWORD)VAR_5);
 else
 {
  WCHAR VAR_8[64];
  UINT VAR_9;
  float VAR_10;
  if (VAR_5 >= 1073741824)
  {
   VAR_10 = ((float)VAR_5)/1073741824.f+.5f;
   VAR_9 = VAR_1;
  }
  else if (VAR_5 >= 1048576)
  {
   VAR_10 = ((float)VAR_5)/1048576.f+.5f;
   VAR_9 = VAR_3;
  }
  else
  {
   VAR_10 = ((float)VAR_5)/1024.f+.5f;
   VAR_9 = VAR_2;
  }
  FUNC_0(VAR_0.hInstance, VAR_9, VAR_8, sizeof(VAR_8)/sizeof(*VAR_8));
  FUNC_1(VAR_4, VAR_7, VAR_10, VAR_8);
 }
}
