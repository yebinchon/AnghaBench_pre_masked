
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef int LONG ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int ,int **) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (void const*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(const void *VAR_4, UINT VAR_5, IWICBitmapDecoder **VAR_6)
{
    HRESULT VAR_7;
    IStream *VAR_8;
    GUID VAR_9;
    LONG VAR_10;
    ULARGE_INTEGER VAR_11;
    LARGE_INTEGER VAR_12;

    *VAR_6 = ((void*)0);

    VAR_8 = FUNC_5 (VAR_4, VAR_5);
    FUNC_6(VAR_8 != ((void*)0), "SHCreateMemStream error\n");

    VAR_7 = FUNC_3(VAR_3, VAR_8, ((void*)0), 0, VAR_6);
    if (VAR_7 == VAR_2)
    {
        VAR_7 = FUNC_2(*VAR_6, &VAR_9);
        FUNC_6(VAR_7 == VAR_2, "GetContainerFormat error %#x\n", VAR_7);
        FUNC_6(FUNC_4(&VAR_9, &VAR_0),
           "wrong container format %s\n", FUNC_7(&VAR_9));

        VAR_12.QuadPart = 0;
        FUNC_1 (VAR_8, VAR_12, VAR_1, &VAR_11);
        FUNC_6(VAR_11.QuadPart < VAR_5, "seek beyond the end of stream: %x%08x >= %x\n",
           (UINT)(VAR_11.QuadPart >> 32), (UINT)VAR_11.QuadPart, VAR_5);

        VAR_10 = FUNC_0(VAR_8);
        FUNC_6(VAR_10 > 0, "expected stream refcount > 0\n");
    }
    else
        FUNC_0(VAR_8);

    return VAR_7;
}
