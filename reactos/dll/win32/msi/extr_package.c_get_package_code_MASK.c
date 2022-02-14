
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int storage; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef TYPE_2__ MSIDATABASE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__**) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static WCHAR *FUNC_5( MSIDATABASE *VAR_2 )
{
    WCHAR *VAR_3;
    MSISUMMARYINFO *VAR_4;
    UINT VAR_5;

    VAR_5 = FUNC_2( VAR_2->storage, 0, &VAR_4 );
    if (VAR_5 != VAR_0)
    {
        VAR_5 = FUNC_1( VAR_2, 0, &VAR_4 );
        if (VAR_5 != VAR_0)
        {
            FUNC_0("failed to load summary info %u\n", VAR_5);
            return ((void*)0);
        }
    }
    VAR_3 = FUNC_3( VAR_4, VAR_1 );
    FUNC_4( &VAR_4->hdr );
    return VAR_3;
}
