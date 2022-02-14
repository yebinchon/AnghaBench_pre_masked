
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef int SEEKMODE ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



__attribute__((used)) static ARC_STATUS FUNC_1(ULONG VAR_5, LARGE_INTEGER* VAR_6, SEEKMODE VAR_7)
{
    LARGE_INTEGER VAR_8 = *VAR_6;

    switch (VAR_7)
    {
        case 129:
            break;
        case 128:
            VAR_8.QuadPart += VAR_4;
            break;
        default:
            FUNC_0(VAR_2);
            return VAR_0;
    }

    if (VAR_8.QuadPart >= VAR_3)
        return VAR_0;

    VAR_4 = VAR_8.QuadPart;
    return VAR_1;
}
