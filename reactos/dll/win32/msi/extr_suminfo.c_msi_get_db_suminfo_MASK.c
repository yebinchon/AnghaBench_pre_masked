
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int storage; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int **) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

UINT FUNC_5( MSIDATABASE *VAR_3, UINT VAR_4, MSISUMMARYINFO **VAR_5 )
{
    IStream *VAR_6;
    MSISUMMARYINFO *VAR_7;
    UINT VAR_8;

    if (!(VAR_7 = FUNC_1( VAR_3->storage, VAR_4 ))) return VAR_0;

    VAR_8 = FUNC_3( VAR_3, VAR_2, &VAR_6 );
    if (VAR_8 != VAR_1)
    {
        FUNC_4( &VAR_7->hdr );
        return VAR_8;
    }

    VAR_8 = FUNC_2( VAR_7, VAR_6 );
    FUNC_0( VAR_6 );
    if (VAR_8 != VAR_1)
    {
        FUNC_4( &VAR_7->hdr );
        return VAR_8;
    }

    *VAR_5 = VAR_7;
    return VAR_1;
}
