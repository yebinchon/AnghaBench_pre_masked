
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG64 ;
typedef int PVOID ;
typedef scalar_t__ PFN_NUMBER ;


 int FUNC_0 (char*,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static
PFN_NUMBER
FUNC_2(ULONG64 VAR_1, ULONG64 VAR_2, PFN_NUMBER VAR_3)
{
    PFN_NUMBER VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        if (!FUNC_1(VAR_1, VAR_2))
        {
            FUNC_0("Failed to map page %ld from %p to %p\n",
                    VAR_4, (PVOID)VAR_1, (PVOID)VAR_2);
            return VAR_4;
        }
        VAR_1 += VAR_0;
        VAR_2 += VAR_0;
    }
    return VAR_4;
}
