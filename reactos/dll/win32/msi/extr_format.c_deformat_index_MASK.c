
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_8__ {int record; } ;
struct TYPE_7__ {int len; } ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int,scalar_t__*,int*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static WCHAR *FUNC_7( FORMAT *VAR_0, FORMSTR *VAR_1, int *VAR_2 )
{
    WCHAR *VAR_3, *VAR_4;
    DWORD VAR_5;
    int VAR_6;

    if (!(VAR_3 = FUNC_5( (VAR_1->len + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_4(VAR_3, FUNC_3(VAR_0, VAR_1), VAR_1->len + 1);
    VAR_6 = FUNC_2( VAR_3 );
    FUNC_6( VAR_3 );

    if (FUNC_1( VAR_0->record, VAR_6 ) ||
        FUNC_0( VAR_0->record, VAR_6, ((void*)0), &VAR_5 )) return ((void*)0);

    VAR_5++;
    if (!(VAR_4 = FUNC_5( VAR_5 * sizeof(WCHAR) ))) return ((void*)0);
    VAR_4[0] = 0;
    if (FUNC_0( VAR_0->record, VAR_6, VAR_4, &VAR_5 ))
    {
        FUNC_6( VAR_4 );
        return ((void*)0);
    }
    *VAR_2 = VAR_5;
    return VAR_4;
}
