
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tableType_t ;
typedef unsigned int U32 ;
typedef unsigned int U16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static U32 FUNC_2(U32 VAR_3, const void* VAR_4, tableType_t VAR_5)
{
    FUNC_0(VAR_0 > 2);
    if (VAR_5 == VAR_2) {
        const U32* const VAR_6 = (const U32*) VAR_4;
        FUNC_1(VAR_3 < (1U << (VAR_0-2)));
        return VAR_6[VAR_3];
    }
    if (VAR_5 == VAR_1) {
        const U16* const VAR_7 = (const U16*) VAR_4;
        FUNC_1(VAR_3 < (1U << (VAR_0-1)));
        return VAR_7[VAR_3];
    }
    FUNC_1(0); return 0;
}
