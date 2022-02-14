
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {char* deformatted; scalar_t__ groups; void* propfailed; void* groupfailed; } ;
struct TYPE_9__ {int n; int len; int type; scalar_t__ propfound; scalar_t__ nonprop; } ;
typedef int STACK ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int * FUNC_0 (TYPE_2__*,TYPE_1__*,int*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static WCHAR *FUNC_4( FORMAT *VAR_3, STACK *VAR_4,
                                   BOOL *VAR_5, BOOL *VAR_6,
                                   int *VAR_7, int *VAR_8, int *VAR_9 )
{
    WCHAR *VAR_10;
    FORMSTR *VAR_11, *VAR_12;
    int VAR_13;

    *VAR_6 = VAR_0;
    *VAR_5 = VAR_0;

    VAR_12 = FUNC_3(VAR_4);
    VAR_13 = VAR_12->n;
    *VAR_7 = VAR_12->len;
    FUNC_2(VAR_12);

    while ((VAR_12 = FUNC_3(VAR_4)))
    {
        *VAR_7 += VAR_12->len;

        if (VAR_12->nonprop)
            *VAR_6 = VAR_2;

        if (VAR_12->propfound)
            *VAR_5 = VAR_2;

        FUNC_2(VAR_12);
    }

    VAR_11 = FUNC_1(sizeof(FORMSTR));
    VAR_11->n = VAR_13;
    VAR_11->len = *VAR_7;
    VAR_11->type = VAR_1;

    if (!VAR_3->groupfailed && (*VAR_7 == 2 ||
        (VAR_3->propfailed && !*VAR_6)))
    {
        FUNC_2(VAR_11);
        return ((void*)0);
    }
    else if (VAR_3->deformatted[VAR_11->n + 1] == '{' &&
             VAR_3->deformatted[VAR_11->n + VAR_11->len - 2] == '}')
    {
        VAR_3->groupfailed = VAR_0;
        VAR_11->len = 0;
    }
    else if (*VAR_5 && !*VAR_6 &&
             !VAR_3->groupfailed && VAR_3->groups == 0)
    {
        VAR_11->n++;
        VAR_11->len -= 2;
    }
    else
    {
        if (VAR_3->groups != 0)
            VAR_3->groupfailed = VAR_2;

        *VAR_6 = VAR_2;
    }

    VAR_10 = FUNC_0( VAR_3, VAR_11, VAR_9 );
    *VAR_8 = VAR_11->type;
    FUNC_2(VAR_11);

    if (VAR_3->groups == 0)
        VAR_3->propfailed = VAR_0;

    return VAR_10;
}
