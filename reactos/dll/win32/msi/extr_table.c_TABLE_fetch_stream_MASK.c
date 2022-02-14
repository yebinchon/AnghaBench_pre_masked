
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {TYPE_1__* ops; } ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int db; } ;
struct TYPE_4__ {int fetch_int; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int IStream ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int **) ;

__attribute__((used)) static UINT FUNC_5( struct tagMSIVIEW *VAR_2, UINT VAR_3, UINT VAR_4, IStream **VAR_5 )
{
    MSITABLEVIEW *VAR_6 = (MSITABLEVIEW*)VAR_2;
    UINT VAR_7;
    WCHAR *VAR_8;

    if( !VAR_2->ops->fetch_int )
        return VAR_0;

    VAR_7 = FUNC_2( VAR_6, VAR_3, &VAR_8 );
    if (VAR_7 != VAR_1)
    {
        FUNC_0("fetching stream, error = %u\n", VAR_7);
        return VAR_7;
    }

    VAR_7 = FUNC_4( VAR_6->db, VAR_8, VAR_5 );
    if (VAR_7 != VAR_1)
        FUNC_0("fetching stream %s, error = %u\n", FUNC_1(VAR_8), VAR_7);

    FUNC_3( VAR_8 );
    return VAR_7;
}
