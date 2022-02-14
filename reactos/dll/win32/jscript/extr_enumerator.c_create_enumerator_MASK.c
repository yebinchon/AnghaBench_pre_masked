
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int VARIANT ;
struct TYPE_7__ {int member_3; int member_2; int * member_1; int * member_0; } ;
struct TYPE_6__ {int atend; int dispex; int * enumvar; } ;
typedef int IEnumVARIANT ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_1__ EnumeratorInstance ;
typedef TYPE_2__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ,int *,int ,int ,TYPE_2__*,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,void**) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *,TYPE_1__**) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_10, jsval_t *VAR_11, jsdisp_t **VAR_12)
{
    EnumeratorInstance *VAR_13;
    HRESULT VAR_14;
    IDispatch *VAR_15;
    DISPPARAMS VAR_16 = {((void*)0), ((void*)0), 0, 0};
    IEnumVARIANT *VAR_17 = ((void*)0);

    if (VAR_11)
    {
        VARIANT VAR_18;

        if (!FUNC_13(*VAR_11))
        {
            FUNC_1("I don't know how to handle this type!\n");
            return VAR_3;
        }

        VAR_15 = FUNC_12(*VAR_11);


        FUNC_8(&VAR_18);
        VAR_14 = FUNC_2(VAR_15, VAR_1, &VAR_5, VAR_6,
                VAR_0, &VAR_16, &VAR_18, ((void*)0), ((void*)0));
        if (FUNC_0(VAR_14))
        {
            FUNC_9("Enumerator: no DISPID_NEWENUM.\n");
            return VAR_2;
        }

        if ((FUNC_6(&VAR_18) == VAR_8) || (FUNC_6(&VAR_18) == VAR_9))
        {
            VAR_14 = FUNC_4(FUNC_5(&VAR_18),
                &VAR_4, (void**)&VAR_17);
        }
        else
        {
            FUNC_1("Enumerator: NewEnum unexpected type of varresult (%d).\n", FUNC_6(&VAR_18));
            VAR_14 = VAR_2;
        }
        FUNC_7(&VAR_18);
        if (FUNC_0(VAR_14))
            return VAR_14;
    }

    VAR_14 = FUNC_10(VAR_10, ((void*)0), &VAR_13);
    if (FUNC_0(VAR_14))
    {
        if (VAR_17)
            FUNC_3(VAR_17);
        return VAR_14;
    }

    VAR_13->enumvar = VAR_17;
    VAR_13->atend = !VAR_17;
    VAR_14 = FUNC_11(VAR_13);
    if (FUNC_0(VAR_14))
    {
        FUNC_14(&VAR_13->dispex);
        return VAR_14;
    }

    *VAR_12 = &VAR_13->dispex;
    return VAR_7;
}
