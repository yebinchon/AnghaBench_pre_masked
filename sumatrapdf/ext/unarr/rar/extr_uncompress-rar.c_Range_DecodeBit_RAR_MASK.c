
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__) ;

__attribute__((used)) static UInt32 FUNC_2(void *VAR_1, UInt32 VAR_2)
{
    UInt32 VAR_3 = FUNC_1(VAR_1, VAR_0);
    UInt32 VAR_4 = VAR_3 < VAR_2 ? 0 : 1;
    if (!VAR_4)
        FUNC_0(VAR_1, 0, VAR_2);
    else
        FUNC_0(VAR_1, VAR_2, VAR_0 - VAR_2);
    return VAR_4;
}
