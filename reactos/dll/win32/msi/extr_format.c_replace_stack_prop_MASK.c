
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_16__ {int type; } ;
struct TYPE_15__ {scalar_t__ package; void* propfailed; scalar_t__ record; } ;
struct TYPE_14__ {int n; int len; int type; } ;
typedef int STACK ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int * FUNC_0 (TYPE_2__*,TYPE_1__*,int*) ;
 int * FUNC_1 (TYPE_2__*,TYPE_1__*,void**,int*,int*) ;
 int * FUNC_2 (TYPE_2__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_4__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;

__attribute__((used)) static WCHAR *FUNC_8( FORMAT *VAR_5, STACK *VAR_6,
                                  BOOL *VAR_7, BOOL *VAR_8,
                                  int *VAR_9, int *VAR_10, int *VAR_11 )
{
    WCHAR *VAR_12;
    FORMSTR *VAR_13, *VAR_14;
    int VAR_15;

    *VAR_7 = VAR_0;
    *VAR_8 = VAR_0;

    VAR_14 = FUNC_7(VAR_6);
    VAR_15 = VAR_14->n;
    *VAR_9 = VAR_14->len;
    *VAR_10 = FUNC_6(VAR_6)->type;
    FUNC_5(VAR_14);

    while ((VAR_14 = FUNC_7(VAR_6)))
    {
        *VAR_9 += VAR_14->len;

        if (*VAR_10 != VAR_1 &&
            FUNC_6(VAR_6) && VAR_14->type != *VAR_10)
            *VAR_10 = VAR_2;

        FUNC_5(VAR_14);
    }

    VAR_13 = FUNC_4(sizeof(FORMSTR));
    VAR_13->n = VAR_15 + 1;
    VAR_13->len = *VAR_9 - 2;
    VAR_13->type = *VAR_10;

    if (*VAR_10 == VAR_3 && VAR_5->record)
    {
        VAR_12 = FUNC_0( VAR_5, VAR_13, VAR_11 );
        if (VAR_12)
            *VAR_7 = VAR_4;
        else
            VAR_5->propfailed = VAR_4;

        if (VAR_12)
            *VAR_10 = FUNC_3(VAR_12) ?
                VAR_3 : VAR_2;
    }
    else if (VAR_5->package)
    {
        VAR_12 = FUNC_1( VAR_5, VAR_13, VAR_7, VAR_10, VAR_11 );
    }
    else
    {
        *VAR_8 = VAR_4;
        VAR_13->n--;
        VAR_13->len += 2;
        VAR_12 = FUNC_2( VAR_5, VAR_13, VAR_11 );
    }
    FUNC_5(VAR_13);
    return VAR_12;
}
