
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ptr; scalar_t__ len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static inline BOOL FUNC_2(const xmlstr_t *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3)
{
    UINT VAR_4 = FUNC_0( VAR_3 );

    if (!FUNC_1(VAR_1->ptr, VAR_2, VAR_1->len) && !VAR_2[VAR_1->len]) return VAR_0;
    return (VAR_1->len > VAR_4 && !FUNC_1(VAR_1->ptr, VAR_3, VAR_4) &&
            !FUNC_1(VAR_1->ptr + VAR_4, VAR_2, VAR_1->len - VAR_4) && !VAR_2[VAR_1->len - VAR_4]);
}
