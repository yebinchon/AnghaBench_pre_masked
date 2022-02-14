
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_9__ {int ref; TYPE_3__ IStream_iface; TYPE_3__* base; TYPE_1__ pos; void* length; void* start; } ;
typedef TYPE_2__ sub_stream_t ;
typedef void* ULARGE_INTEGER ;
typedef TYPE_3__ IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(IStream *VAR_3, ULARGE_INTEGER VAR_4, ULARGE_INTEGER VAR_5, IStream **VAR_6)
{
    sub_stream_t *VAR_7;

    *VAR_6 = ((void*)0);
    VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_7));
    if(!VAR_7) return VAR_0;

    VAR_7->IStream_iface.lpVtbl = &VAR_2;
    VAR_7->ref = 1;
    VAR_7->start = VAR_4;
    VAR_7->length = VAR_5;
    VAR_7->pos.QuadPart = 0;
    FUNC_2(VAR_3);
    VAR_7->base = VAR_3;

    *VAR_6 = &VAR_7->IStream_iface;
    return VAR_1;
}
