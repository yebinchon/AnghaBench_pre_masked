
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cfFormat; } ;
struct TYPE_9__ {int id; TYPE_6__ fmtetc; int save_stream_num; } ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_1__ DataCacheEntry ;
typedef int BOOL ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int,int **) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_1__*,int,int *) ;
 int FUNC_7 (TYPE_1__*,int,int *) ;
 int FUNC_8 (TYPE_1__*,int,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_10(DataCacheEntry *VAR_0, IStorage *VAR_1,
                                   BOOL VAR_2)
{
    HRESULT VAR_3;
    IStream *VAR_4;
    BOOL VAR_5 = (VAR_0->id == 1);

    FUNC_3("stream_number = %d, fmtetc = %s\n", VAR_0->save_stream_num, FUNC_5(&VAR_0->fmtetc));

    VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_5, &VAR_4);
    if (FUNC_0(VAR_3))
        return VAR_3;

    switch (VAR_0->fmtetc.cfFormat)
    {
    case 130:
        VAR_3 = FUNC_6(VAR_0, VAR_5, VAR_4);
        break;
    case 128:
        VAR_3 = FUNC_8(VAR_0, VAR_5, VAR_4);
        break;
    case 129:
        VAR_3 = FUNC_7(VAR_0, VAR_5, VAR_4);
        break;
    case 0:
        VAR_3 = FUNC_9(VAR_0, VAR_4);
        break;
    default:
        FUNC_1("got unsupported clipboard format %x\n", VAR_0->fmtetc.cfFormat);
    }

    FUNC_2(VAR_4);
    return VAR_3;
}
