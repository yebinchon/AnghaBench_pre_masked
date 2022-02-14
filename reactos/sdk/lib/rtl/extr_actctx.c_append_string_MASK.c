
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static inline void FUNC_3( WCHAR *VAR_0, const WCHAR *VAR_1, const WCHAR *VAR_2 )
{
    WCHAR *VAR_3 = VAR_0;

    if (!VAR_2) return;
    FUNC_0( VAR_0, VAR_1 );
    VAR_3 += FUNC_2(VAR_3);
    *VAR_3++ = '"';
    FUNC_1( VAR_3, VAR_2 );
    VAR_3 += FUNC_2(VAR_3);
    *VAR_3++ = '"';
    *VAR_3 = 0;
}
