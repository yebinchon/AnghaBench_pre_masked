
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct game_capture {int app_sid; scalar_t__ is_app; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int,char*,int const*,int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline HANDLE FUNC_4(struct game_capture *VAR_1,
          const wchar_t *VAR_2, DWORD VAR_3)
{
 wchar_t VAR_4[64];
 FUNC_1(VAR_4, 64, L"%s%lu", VAR_2, VAR_3);

 FUNC_2("map id: %S", VAR_4);

 return VAR_1->is_app ? FUNC_3(VAR_1->app_sid, VAR_4)
     : FUNC_0(VAR_0, 0, VAR_4);
}
