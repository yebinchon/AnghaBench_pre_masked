
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IUnknown_inner; void* bAggregatable; int * outer_unk; void* bUnkOuterValid; } ;
typedef int REFIID ;
typedef TYPE_1__ PassThruImpl ;
typedef int * LPVOID ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 void* VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(PassThruImpl *VAR_3, REFIID VAR_4, LPVOID *VAR_5)
{
    if (VAR_3->bAggregatable)
        VAR_3->bUnkOuterValid = VAR_2;

    if (VAR_3->outer_unk)
    {
        if (VAR_3->bAggregatable)
            return FUNC_1(VAR_3->outer_unk, VAR_4, VAR_5);

        if (FUNC_3(VAR_4, &VAR_1))
        {
            HRESULT VAR_6;

            FUNC_0(&VAR_3->IUnknown_inner);
            VAR_6 = FUNC_1(&VAR_3->IUnknown_inner, VAR_4, VAR_5);
            FUNC_2(&VAR_3->IUnknown_inner);
            VAR_3->bAggregatable = VAR_2;
            return VAR_6;
        }

        *VAR_5 = ((void*)0);
        return VAR_0;
    }

    return FUNC_1(&VAR_3->IUnknown_inner, VAR_4, VAR_5);
}
