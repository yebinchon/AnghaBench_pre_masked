
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {scalar_t__ atend; void* item; int enumvar; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ EnumeratorInstance ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,void**) ;

__attribute__((used)) static inline HRESULT FUNC_8(EnumeratorInstance *VAR_2)
{
    HRESULT VAR_3;
    VARIANT VAR_4;

    if (VAR_2->atend)
        return VAR_0;


    FUNC_5(VAR_2->item);


    FUNC_3(&VAR_4);
    VAR_3 = FUNC_1(VAR_2->enumvar, 1, &VAR_4, ((void*)0));
    if (VAR_3 == VAR_0)
    {
        VAR_3 = FUNC_7(&VAR_4, &VAR_2->item);
        FUNC_2(&VAR_4);
        if (FUNC_0(VAR_3))
        {
            FUNC_4("failed to convert jsval to variant!\n");
            VAR_2->item = FUNC_6();
            return VAR_3;
        }
    }
    else
    {
        VAR_2->item = FUNC_6();
        VAR_2->atend = VAR_1;
    }

    return VAR_0;
}
