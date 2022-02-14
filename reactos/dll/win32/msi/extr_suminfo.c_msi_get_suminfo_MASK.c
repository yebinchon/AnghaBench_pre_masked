
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int hdr; int storage; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int **) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int *,scalar_t__) ;
 TYPE_1__* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

UINT FUNC_7( IStorage *VAR_6, UINT VAR_7, MSISUMMARYINFO **VAR_8 )
{
    IStream *VAR_9;
    MSISUMMARYINFO *VAR_10;
    HRESULT VAR_11;
    UINT VAR_12;

    FUNC_3("%p, %u\n", VAR_6, VAR_7);

    if (!(VAR_10 = FUNC_4( VAR_6, VAR_7 ))) return VAR_1;

    VAR_11 = FUNC_1( VAR_10->storage, VAR_5, 0, VAR_3|VAR_4, 0, &VAR_9 );
    if (FUNC_0( VAR_11 ))
    {
        FUNC_6( &VAR_10->hdr );
        return VAR_0;
    }

    VAR_12 = FUNC_5( VAR_10, VAR_9 );
    FUNC_2( VAR_9 );
    if (VAR_12 != VAR_2)
    {
        FUNC_6( &VAR_10->hdr );
        return VAR_12;
    }

    *VAR_8 = VAR_10;
    return VAR_2;
}
