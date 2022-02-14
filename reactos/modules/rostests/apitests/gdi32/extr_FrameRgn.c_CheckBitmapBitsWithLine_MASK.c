
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ UINT ;
typedef size_t* PUCHAR ;
typedef int HDC ;
typedef scalar_t__ COLORREF ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
void
FUNC_2(
    ULONG VAR_0,
    HDC VAR_1,
    UINT VAR_2,
    UINT VAR_3,
    PUCHAR VAR_4,
    COLORREF *VAR_5)
{
    UINT VAR_6, VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
            VAR_8 = VAR_7 * VAR_2 + VAR_6;
            FUNC_1(FUNC_0(VAR_1, VAR_6, VAR_7) == VAR_5[VAR_4[VAR_8]],
               "Wrong pixel at (%u,%u): expected 0x%08lx, got 0x%08lx\n",
               VAR_6, VAR_7, VAR_5[VAR_4[VAR_8]], FUNC_0(VAR_1, VAR_6, VAR_7));
        }
    }
}
