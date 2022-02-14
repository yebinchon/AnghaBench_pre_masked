
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ FORMSTR ;
typedef int FORMAT ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_2 (int) ;

__attribute__((used)) static WCHAR *FUNC_3( FORMAT *VAR_0, FORMSTR *VAR_1, int *VAR_2 )
{
    WCHAR *VAR_3;

    if (!VAR_1->len) return ((void*)0);
    if ((VAR_3 = FUNC_2( (VAR_1->len + 1) * sizeof(WCHAR) )))
    {
        FUNC_1( VAR_3, FUNC_0(VAR_0, VAR_1), VAR_1->len * sizeof(WCHAR) );
        VAR_3[VAR_1->len] = 0;
        *VAR_2 = VAR_1->len;
    }
    return VAR_3;
}
