
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (void*,int const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_3 (void* VAR_3, size_t VAR_4, const void* VAR_5, size_t VAR_6, U32 VAR_7)
{
    U32 const VAR_8 = VAR_7 + (((U32)VAR_1)<<1) + (U32)(VAR_6 << 3);
    if (VAR_6 + VAR_0 > VAR_4) return FUNC_0(VAR_2);
    FUNC_1(VAR_3, VAR_8);
    FUNC_2((BYTE*)VAR_3 + VAR_0, VAR_5, VAR_6);
    return VAR_0 + VAR_6;
}
