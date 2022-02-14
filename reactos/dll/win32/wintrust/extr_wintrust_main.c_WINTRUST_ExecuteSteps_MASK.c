
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wintrust_step {size_t (* func ) (TYPE_1__*) ;size_t error_index; } ;
struct TYPE_4__ {size_t* padwTrustStepErrors; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CRYPT_PROVIDER_DATA ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_1(const struct wintrust_step *VAR_1,
 DWORD VAR_2, CRYPT_PROVIDER_DATA *VAR_3)
{
    DWORD VAR_4, VAR_5 = VAR_0;

    for (VAR_4 = 0; !VAR_5 && VAR_4 < VAR_2; VAR_4++)
    {
        VAR_5 = VAR_1[VAR_4].func(VAR_3);
        if (VAR_5)
            VAR_5 = VAR_3->padwTrustStepErrors[VAR_1[VAR_4].error_index];
    }
    return VAR_5;
}
