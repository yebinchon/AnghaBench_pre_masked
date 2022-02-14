
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int type; int n; int len; void* propfound; void* nonprop; } ;
typedef TYPE_1__ WCHAR ;
typedef int UINT ;
struct TYPE_16__ {int n; } ;
typedef int STACK ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_3__ FORMAT ;
typedef void* BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* FUNC_0 (TYPE_3__*,void*,void*,int,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int *,void**,void**,int*,int*,int*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,int *,void**,void**,int*,int*,int*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_6(FORMAT *VAR_7, STACK *VAR_8, STACK *VAR_9)
{
    WCHAR *VAR_10 = ((void*)0);
    FORMSTR *VAR_11, *VAR_12, *VAR_13;
    BOOL VAR_14 = VAR_1, VAR_15 = VAR_1, VAR_16 = VAR_1;
    int VAR_17, VAR_18, VAR_19 = 0, VAR_20 = 0;

    VAR_13 = FUNC_4(VAR_9);
    VAR_17 = VAR_13->type;
    VAR_18 = VAR_13->n;

    if (VAR_17 == VAR_3)
        VAR_10 = FUNC_3( VAR_7, VAR_9, &VAR_14,
                                       &VAR_15, &VAR_20, &VAR_17, &VAR_19 );
    else if (VAR_17 == VAR_2)
    {
        VAR_10 = FUNC_2( VAR_7, VAR_9, &VAR_14,
                                        &VAR_15, &VAR_20, &VAR_17, &VAR_19 );
        VAR_16 = VAR_6;
    }

    VAR_7->n = VAR_18;
    VAR_11 = FUNC_0( VAR_7, VAR_14, VAR_15, VAR_20, VAR_17, VAR_10, VAR_19 );
    FUNC_1(VAR_10);
    if (!VAR_11)
        return VAR_0;

    VAR_7->n = VAR_11->n + VAR_11->len;

    VAR_12 = FUNC_4(VAR_8);
    if (VAR_12)
    {
        VAR_17 = VAR_12->type;

        if ((VAR_17 == VAR_4 || VAR_17 == VAR_5) &&
            VAR_17 == VAR_11->type)
        {
            VAR_12->len += VAR_11->len;

            if (VAR_16)
                VAR_12->nonprop = VAR_1;

            if (VAR_17 == VAR_4)
                VAR_12->nonprop = VAR_11->nonprop;

            if (VAR_11->propfound)
                VAR_12->propfound = VAR_6;

            FUNC_1(VAR_11);
            return VAR_0;
        }
    }

    FUNC_5(VAR_8, VAR_11);
    return VAR_0;
}
