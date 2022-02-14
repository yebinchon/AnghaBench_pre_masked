
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ OutputBuffer; scalar_t__ dwOutputCount; scalar_t__ dwCPOutputCount; } ;
typedef TYPE_1__ RTF_Info ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int const*,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(RTF_Info *VAR_0, const WCHAR *VAR_1, int VAR_2)
{
        if (VAR_0->dwCPOutputCount)
                FUNC_1(VAR_0);
        while (VAR_2)
        {
                int VAR_3 = FUNC_4(VAR_2, FUNC_0(VAR_0->OutputBuffer) - VAR_0->dwOutputCount);

                FUNC_3(VAR_0->OutputBuffer + VAR_0->dwOutputCount, VAR_1, VAR_3 * sizeof(WCHAR));
                VAR_0->dwOutputCount += VAR_3;
                VAR_2 -= VAR_3;
                VAR_1 += VAR_3;
                if (FUNC_0(VAR_0->OutputBuffer) == VAR_0->dwOutputCount)
                        FUNC_2(VAR_0);
        }
}
