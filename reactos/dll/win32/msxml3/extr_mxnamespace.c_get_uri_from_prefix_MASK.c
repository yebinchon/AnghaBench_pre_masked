
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nscontext {int count; TYPE_1__* ns; } ;
typedef int WCHAR ;
struct TYPE_2__ {int * uri; int prefix; } ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static HRESULT FUNC_1(const struct nscontext *VAR_2, const WCHAR *VAR_3, BSTR *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++)
        if (!FUNC_0(VAR_2->ns[VAR_5].prefix, VAR_3))
        {
            *VAR_4 = VAR_2->ns[VAR_5].uri;
            return VAR_1;
        }

    *VAR_4 = ((void*)0);
    return VAR_0;
}
