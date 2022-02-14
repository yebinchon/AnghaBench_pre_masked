
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aw ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static BOOL FUNC_3(const char* VAR_3, const WCHAR* VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    WCHAR VAR_7[1024];

    DWORD VAR_8 = FUNC_1( FUNC_0() ? VAR_0 : VAR_1, 0,
                                     VAR_3, VAR_5, VAR_7, sizeof(VAR_7) / sizeof(VAR_7[0]) );
    if (VAR_8 != VAR_6) return VAR_2;
    return FUNC_2(VAR_7, VAR_4, VAR_8 * sizeof(WCHAR)) == 0;
}
