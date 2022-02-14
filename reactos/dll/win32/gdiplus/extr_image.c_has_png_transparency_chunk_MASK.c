
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_6__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,int,int*) ;
 int FUNC_2 (int *,TYPE_2__,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int*,char*,int) ;

__attribute__((used)) static BOOL FUNC_5(IStream *VAR_3)
{
    LARGE_INTEGER VAR_4;
    BOOL VAR_5 = VAR_0;
    HRESULT VAR_6;
    BYTE VAR_7[8];

    VAR_4.QuadPart = 8;
    do
    {
        ULARGE_INTEGER VAR_8;
        ULONG VAR_9, VAR_10;

        VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1, &VAR_8);
        if (FUNC_0(VAR_6)) break;

        VAR_6 = FUNC_1(VAR_3, VAR_7, 8, &VAR_9);
        if (FUNC_0(VAR_6) || VAR_9 < 8) break;

        VAR_10 = (VAR_7[0] << 24) | (VAR_7[1] << 16) | (VAR_7[2] << 8) | VAR_7[3];
        if (!FUNC_4(&VAR_7[4], "tRNS", 4))
        {
            VAR_5 = VAR_2;
            break;
        }

        VAR_4.QuadPart = VAR_8.QuadPart + VAR_10 + 12;
    } while (FUNC_4(&VAR_7[4], "IDAT", 4) && FUNC_4(&VAR_7[4], "IEND", 4));

    FUNC_3("has_tRNS = %d\n", VAR_5);
    return VAR_5;
}
