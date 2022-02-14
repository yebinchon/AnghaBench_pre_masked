
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct game_capture {int app_sid; scalar_t__ is_app; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int,char*,int const*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline HANDLE FUNC_3(struct game_capture *VAR_0,
     const wchar_t *VAR_1, DWORD VAR_2)
{
 wchar_t VAR_3[64];
 FUNC_0(VAR_3, 64, L"%s%lu", VAR_1, VAR_2);
 return VAR_0->is_app ? FUNC_1(VAR_0->app_sid, VAR_3)
     : FUNC_2(VAR_3);
}
