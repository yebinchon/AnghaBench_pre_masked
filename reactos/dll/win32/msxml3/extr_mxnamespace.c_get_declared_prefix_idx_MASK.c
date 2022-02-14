
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nscontext {size_t count; TYPE_1__* ns; } ;
struct TYPE_2__ {int * prefix; } ;
typedef size_t LONG ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_0(const struct nscontext *VAR_2, LONG VAR_3, BSTR *VAR_4)
{
    *VAR_4 = ((void*)0);

    if (VAR_3 >= VAR_2->count || VAR_3 < 0) return VAR_0;

    if (VAR_3 > 0) VAR_3 = VAR_2->count - VAR_3;
    *VAR_4 = VAR_2->ns[VAR_3].prefix;

    return VAR_1;
}
