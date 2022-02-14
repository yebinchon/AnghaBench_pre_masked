
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int styleid_t ;
typedef int nsAString ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int nsstyle; } ;
typedef int PRUnichar ;
typedef TYPE_1__ HTMLStyle ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;
 float FUNC_7 (int const*,scalar_t__**,int) ;

__attribute__((used)) static HRESULT FUNC_8(HTMLStyle *VAR_3, styleid_t VAR_4, float *VAR_5)
{
    nsAString VAR_6;
    HRESULT VAR_7;

    FUNC_1("%p %d %p\n", VAR_3, VAR_4, VAR_5);

    *VAR_5 = 0.0f;

    FUNC_5(&VAR_6, ((void*)0));

    VAR_7 = FUNC_2(VAR_3->nsstyle, VAR_4, &VAR_6);
    if(VAR_7 == VAR_1)
    {
        WCHAR *VAR_8;
        const PRUnichar *VAR_9;

        FUNC_4(&VAR_6, &VAR_9);
        if(VAR_9)
        {
            *VAR_5 = FUNC_7(VAR_9, &VAR_8, 10);

            if(*VAR_8 && FUNC_6(VAR_8, VAR_2))
            {
                FUNC_3(&VAR_6);
                FUNC_0("only px values are currently supported\n");
                VAR_7 = VAR_0;
            }
        }
    }

    FUNC_1("ret %f\n", *VAR_5);

    FUNC_3(&VAR_6);
    return VAR_7;
}
