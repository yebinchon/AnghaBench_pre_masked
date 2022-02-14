
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int package; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int TargetPath; } ;
typedef TYPE_1__ MSIFILE ;
typedef TYPE_2__ FORMSTR ;
typedef TYPE_3__ FORMAT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static WCHAR *FUNC_8( FORMAT *VAR_0, FORMSTR *VAR_1, BOOL VAR_2, int *VAR_3 )
{
    WCHAR *VAR_4, *VAR_5 = ((void*)0);
    const MSIFILE *VAR_6;
    DWORD VAR_7 = 0;

    if (!(VAR_4 = FUNC_3( (VAR_1->len + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_2(VAR_4, FUNC_1(VAR_0, VAR_1), VAR_1->len + 1);

    if (!(VAR_6 = FUNC_5( VAR_0->package, VAR_4 ))) goto done;
    if (!VAR_2)
    {
        if ((VAR_5 = FUNC_6( VAR_6->TargetPath ))) VAR_7 = FUNC_7( VAR_5 );
        goto done;
    }
    if ((VAR_7 = FUNC_0(VAR_6->TargetPath, ((void*)0), 0)) <= 0)
    {
        if ((VAR_5 = FUNC_6( VAR_6->TargetPath ))) VAR_7 = FUNC_7( VAR_5 );
        goto done;
    }
    VAR_7++;
    if ((VAR_5 = FUNC_3( VAR_7 * sizeof(WCHAR) )))
        VAR_7 = FUNC_0( VAR_6->TargetPath, VAR_5, VAR_7 );

done:
    FUNC_4( VAR_4 );
    *VAR_3 = VAR_7;
    return VAR_5;
}
