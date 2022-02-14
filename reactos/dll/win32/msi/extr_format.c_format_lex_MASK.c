
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ n; int deformatted; } ;
struct TYPE_8__ {int len; int type; scalar_t__ n; } ;
typedef char* LPCWSTR ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 char* FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(FORMAT *VAR_11, FORMSTR **VAR_12)
{
    int VAR_13, VAR_14 = 1;
    FORMSTR *VAR_15;
    LPCWSTR VAR_16;
    WCHAR VAR_17;

    *VAR_12 = ((void*)0);

    if (!VAR_11->deformatted)
        return VAR_6;

    *VAR_12 = FUNC_5(sizeof(FORMSTR));
    if (!*VAR_12)
        return VAR_2;

    VAR_15 = *VAR_12;
    VAR_15->n = VAR_11->n;
    VAR_15->len = 1;
    VAR_16 = FUNC_4(VAR_11, VAR_15);

    VAR_17 = VAR_16[0];
    switch (VAR_17)
    {
        case '{': VAR_13 = VAR_3; break;
        case '}': VAR_13 = VAR_9; break;
        case '[': VAR_13 = VAR_4; break;
        case ']': VAR_13 = VAR_10; break;
        case '~': VAR_13 = VAR_8; break;
        case '\0': VAR_13 = VAR_6; break;

        default:
            VAR_13 = 0;
    }

    if (VAR_13)
    {
        VAR_15->type = VAR_13;
        VAR_11->n++;
        return VAR_13;
    }

    if (VAR_17 == '\\')
    {
        while (VAR_16[VAR_14] && VAR_16[VAR_14] != ']')
            VAR_14++;

        VAR_13 = VAR_1;
    }
    else if (FUNC_1(VAR_17))
    {
        while (FUNC_2(VAR_16[VAR_14]))
            VAR_14++;

        VAR_13 = VAR_5;
    }
    else if (FUNC_3(VAR_17))
    {
        while (FUNC_3(VAR_16[VAR_14]))
            VAR_14++;

        VAR_13 = VAR_7;

        if (VAR_16[VAR_14] != ']')
        {
            while (FUNC_2(VAR_16[VAR_14]))
                VAR_14++;

            VAR_13 = VAR_5;
        }
    }
    else
    {
        FUNC_0("Got unknown character %c(%x)\n", VAR_17, VAR_17);
        return VAR_0;
    }

    VAR_11->n += VAR_14;
    VAR_15->len = VAR_14;
    VAR_15->type = VAR_13;

    return VAR_13;
}
