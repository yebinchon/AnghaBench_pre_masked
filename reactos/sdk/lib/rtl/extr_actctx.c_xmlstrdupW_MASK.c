
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int ptr; } ;
typedef TYPE_1__ xmlstr_t ;
typedef scalar_t__ WCHAR ;


 scalar_t__* FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static WCHAR *FUNC_3(const xmlstr_t* VAR_0)
{
    WCHAR *VAR_1;

    if ((VAR_1 = FUNC_0(FUNC_1(), 0, (VAR_0->len + 1) * sizeof(WCHAR))))
    {
        FUNC_2( VAR_1, VAR_0->ptr, VAR_0->len * sizeof(WCHAR) );
        VAR_1[VAR_0->len] = 0;
    }
    return VAR_1;
}
