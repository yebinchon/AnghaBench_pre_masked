
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WICPixelFormatGUID ;
typedef int ULARGE_INTEGER ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__,int ,int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int const*) ;

__attribute__((used)) static void FUNC_8(IStream *VAR_6, const CLSID *VAR_7, const WICPixelFormatGUID *VAR_8)
{
    HRESULT VAR_9;
    LARGE_INTEGER VAR_10;

    VAR_10.QuadPart = 0;
    VAR_9 = FUNC_0(VAR_6, VAR_10, VAR_4, (ULARGE_INTEGER *)&VAR_10);
    FUNC_6(VAR_9 == VAR_5, "IStream_Seek error %#x\n", VAR_9);

    if (FUNC_1(VAR_7, &VAR_2))
        FUNC_4(VAR_6, VAR_8);
    else if (FUNC_1(VAR_7, &VAR_0))
        FUNC_2(VAR_6, VAR_8);
    else if (FUNC_1(VAR_7, &VAR_3))
        FUNC_5(VAR_6, VAR_8);
    else if (FUNC_1(VAR_7, &VAR_1))
        FUNC_3(VAR_6, VAR_8);
    else
        FUNC_6(0, "unknown encoder %s\n", FUNC_7(VAR_7));

    VAR_9 = FUNC_0(VAR_6, VAR_10, VAR_4, ((void*)0));
    FUNC_6(VAR_9 == VAR_5, "IStream_Seek error %#x\n", VAR_9);
}
