
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t numProviders; TYPE_1__* table; } ;
struct TYPE_3__ {int name; } ;
typedef int LPCWSTR ;
typedef size_t DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static DWORD FUNC_1(LPCWSTR VAR_2)
{
    DWORD VAR_3 = VAR_0;

    if (VAR_1 && VAR_1->numProviders)
    {
        DWORD VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_1->numProviders &&
         VAR_3 == VAR_0; VAR_4++)
            if (!FUNC_0(VAR_2, VAR_1->table[VAR_4].name))
                VAR_3 = VAR_4;
    }
    return VAR_3;
}
