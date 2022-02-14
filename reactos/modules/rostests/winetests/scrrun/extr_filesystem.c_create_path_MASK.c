
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static inline void FUNC_2(const WCHAR *VAR_0, const WCHAR *VAR_1, WCHAR *VAR_2)
{
    DWORD VAR_3 = FUNC_0(VAR_0);
    FUNC_1(VAR_2, VAR_0, VAR_3*sizeof(WCHAR));
    VAR_2[VAR_3] = '\\';
    FUNC_1(VAR_2+VAR_3+1, VAR_1, (FUNC_0(VAR_1)+1)*sizeof(WCHAR));
}
