
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct hook_info {int dummy; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int *,int ,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,char*,int ,int ) ;

__attribute__((used)) static inline HANDLE FUNC_2(DWORD VAR_3)
{
 wchar_t VAR_4[64];
 FUNC_1(VAR_4, 64, L"%s%lu", VAR_2, VAR_3);

 return FUNC_0(VAR_0, ((void*)0), VAR_1, 0,
      sizeof(struct hook_info), VAR_4);
}
