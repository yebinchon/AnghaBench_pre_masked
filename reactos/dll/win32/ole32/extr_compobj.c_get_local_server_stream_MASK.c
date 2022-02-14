
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cs; TYPE_2__* local_server; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int marshal_stream; TYPE_1__ IServiceProvider_iface; TYPE_3__* apt; } ;
typedef TYPE_2__ LocalServer ;
typedef int IUnknown ;
typedef int IStream ;
typedef int HRESULT ;
typedef TYPE_3__ APARTMENT ;


 int FUNC_0 (int ,int *,int *,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_11(APARTMENT *VAR_7, IStream **VAR_8)
{
    HRESULT VAR_9 = VAR_5;

    FUNC_3(&VAR_7->cs);

    if(!VAR_7->local_server) {
        LocalServer *VAR_10;

        VAR_10 = FUNC_9(sizeof(*VAR_10));
        if(VAR_10) {
            VAR_10->IServiceProvider_iface.lpVtbl = &VAR_2;
            VAR_10->ref = 1;
            VAR_10->apt = VAR_7;

            VAR_9 = FUNC_1(0, VAR_6, &VAR_10->marshal_stream);
            if(FUNC_8(VAR_9)) {
                VAR_9 = FUNC_0(VAR_10->marshal_stream, &VAR_1, (IUnknown*)&VAR_10->IServiceProvider_iface,
                        VAR_3, ((void*)0), VAR_4);
                if(FUNC_4(VAR_9))
                    FUNC_6(VAR_10->marshal_stream);
            }

            if(FUNC_8(VAR_9))
                VAR_7->local_server = VAR_10;
            else
                FUNC_10(VAR_10);
        }else {
            VAR_9 = VAR_0;
        }
    }

    if(FUNC_8(VAR_9))
        VAR_9 = FUNC_5(VAR_7->local_server->marshal_stream, VAR_8);

    FUNC_7(&VAR_7->cs);

    if(FUNC_4(VAR_9))
        FUNC_2("Failed: %08x\n", VAR_9);
    return VAR_9;
}
