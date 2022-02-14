
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cfFormat; } ;
struct TYPE_8__ {TYPE_1__ fmtetc; int load_stream_num; } ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_2__ DataCacheEntry ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_7(DataCacheEntry *VAR_2, IStorage *VAR_3)
{
    HRESULT VAR_4;
    IStream *VAR_5;

    if (!VAR_3) return VAR_1;
    VAR_4 = FUNC_6( VAR_3, VAR_2->load_stream_num, &VAR_5 );
    if (FUNC_0(VAR_4)) return VAR_4;

    switch (VAR_2->fmtetc.cfFormat)
    {
    case 128:
        VAR_4 = FUNC_5( VAR_2, VAR_5 );
        break;

    case 130:
        VAR_4 = FUNC_3( VAR_2, VAR_5 );
        break;

    case 129:
        VAR_4 = FUNC_4( VAR_2, VAR_5 );
        break;

    default:
        FUNC_1( "Unimplemented clip format %x\n", VAR_2->fmtetc.cfFormat );
        VAR_4 = VAR_0;
    }

    FUNC_2( VAR_5 );
    return VAR_4;
}
