
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int ptr; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static inline BOOL FUNC_1(const xmlstr_t* VAR_0, const WCHAR *VAR_1)
{
    return !FUNC_0(VAR_0->ptr, VAR_1, VAR_0->len) && !VAR_1[VAR_0->len];
}
