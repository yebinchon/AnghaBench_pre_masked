
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_15__ {int ref; TYPE_4__ IAMMediaStream_iface; int stream_type; int purpose_id; int * parent; TYPE_2__* input_pin; int critical_section; TYPE_1__ IDirectDrawMediaStream_iface; } ;
struct TYPE_13__ {char* achName; int dir; int * pFilter; } ;
struct TYPE_12__ {TYPE_5__* parent; } ;
typedef int STREAM_TYPE ;
typedef TYPE_3__ PIN_INFO ;
typedef int MSPID ;
typedef int IPin ;
typedef int IMultiMediaStream ;
typedef TYPE_4__ IAMMediaStream ;
typedef int HRESULT ;
typedef int DirectDrawMediaStreamInputPin ;
typedef TYPE_5__ DirectDrawMediaStreamImpl ;


 int FUNC_0 (int *,int,TYPE_3__*,int *,int *,int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_5__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int const*,char*,scalar_t__) ;
 int FUNC_7 (char*,int *,int ,TYPE_4__**) ;
 int FUNC_8 (int const*) ;

HRESULT FUNC_9(IMultiMediaStream *VAR_9, const MSPID *VAR_10,
        STREAM_TYPE VAR_11, IAMMediaStream **VAR_12)
{
    DirectDrawMediaStreamImpl *VAR_13;
    PIN_INFO VAR_14;
    HRESULT VAR_15;

    FUNC_7("(%p,%s,%p)\n", VAR_9, FUNC_8(VAR_10), VAR_12);

    VAR_13 = FUNC_3(FUNC_2(), VAR_5, sizeof(DirectDrawMediaStreamImpl));
    if (!VAR_13)
        return VAR_4;

    VAR_13->IAMMediaStream_iface.lpVtbl = &VAR_0;
    VAR_13->IDirectDrawMediaStream_iface.lpVtbl = &VAR_1;
    VAR_13->ref = 1;

    FUNC_5(&VAR_13->critical_section);

    VAR_14.pFilter = ((void*)0);
    VAR_14.dir = VAR_7;
    VAR_14.achName[0] = 'I';
    FUNC_6(VAR_10, VAR_14.achName + 1, VAR_6 - 1);
    VAR_15 = FUNC_0(&VAR_3,
        sizeof(DirectDrawMediaStreamInputPin), &VAR_14, &VAR_2,
        &VAR_13->critical_section, ((void*)0), (IPin **)&VAR_13->input_pin);
    if (FUNC_1(VAR_15))
        goto out_object;

    VAR_13->input_pin->parent = VAR_13;

    VAR_13->parent = VAR_9;
    VAR_13->purpose_id = *VAR_10;
    VAR_13->stream_type = VAR_11;

    *VAR_12 = &VAR_13->IAMMediaStream_iface;

    return VAR_8;

out_object:
    FUNC_4(FUNC_2(), 0, VAR_13);

    return VAR_15;
}
