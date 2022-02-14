
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static __inline LPWSTR FUNC_2(WCHAR **VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, 0, VAR_2, -1, ((void*)0), 0);
 *VAR_1 = (WCHAR *)FUNC_1(VAR_3 * sizeof(WCHAR));
 FUNC_0(VAR_0, 0, VAR_2, -1, *VAR_1, VAR_3);
 return *VAR_1;
}
