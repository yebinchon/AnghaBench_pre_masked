
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {TYPE_1__* package; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_8__ {int db; } ;
typedef TYPE_2__ FORMSTR ;
typedef TYPE_3__ FORMAT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int*) ;

__attribute__((used)) static WCHAR *FUNC_5( FORMAT *VAR_2, FORMSTR *VAR_3, int *VAR_4 )
{
    WCHAR *VAR_5, *VAR_6;
    DWORD VAR_7 = 0;
    UINT VAR_8;

    if (!(VAR_5 = FUNC_2( (VAR_3->len + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1( VAR_5, FUNC_0(VAR_2, VAR_3), VAR_3->len + 1 );

    VAR_8 = FUNC_4( VAR_2->package->db, VAR_5, ((void*)0), &VAR_7 );
    if (VAR_8 != VAR_1 && VAR_8 != VAR_0)
    {
        FUNC_3( VAR_5 );
        return ((void*)0);
    }
    VAR_7++;
    if ((VAR_6 = FUNC_2( VAR_7 * sizeof(WCHAR) )))
        FUNC_4( VAR_2->package->db, VAR_5, VAR_6, &VAR_7 );
    FUNC_3( VAR_5 );
    *VAR_4 = VAR_7;
    return VAR_6;
}
