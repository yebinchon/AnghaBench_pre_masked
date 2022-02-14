
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline HRESULT FUNC_3(IStream *VAR_1, ULONG VAR_2)
{
    LARGE_INTEGER VAR_3;
    HRESULT VAR_4;

    VAR_3.QuadPart = VAR_2;

    VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_0, ((void*)0));
    if (FUNC_0(VAR_4))
        FUNC_2("IStream_Seek failed: %08x\n", VAR_4);

    return VAR_4;
}
