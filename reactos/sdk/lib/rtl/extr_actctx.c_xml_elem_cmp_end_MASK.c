
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; scalar_t__ len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*,int const*) ;

__attribute__((used)) static inline BOOL FUNC_1(const xmlstr_t *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3)
{
    if (VAR_1->len && VAR_1->ptr[0] == '/')
    {
        xmlstr_t VAR_4;
        VAR_4.ptr = VAR_1->ptr + 1;
        VAR_4.len = VAR_1->len - 1;
        return FUNC_0( &VAR_4, VAR_2, VAR_3 );
    }
    return VAR_0;
}
