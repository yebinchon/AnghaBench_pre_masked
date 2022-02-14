
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_3__ {int const* schema; int name; } ;
typedef int GUID ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int ,int const*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static const WCHAR *FUNC_3(const GUID *VAR_3, const WCHAR *VAR_4)
{
    UINT VAR_5;




    if (!FUNC_1(VAR_3, &VAR_0) &&
        !FUNC_1(VAR_3, &VAR_1))
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
    {
        if (!FUNC_2(VAR_2[VAR_5].name, VAR_4))
            return VAR_2[VAR_5].schema;
    }

    return ((void*)0);
}
