
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;



__attribute__((used)) static U32 FUNC_0 (const void* VAR_0)
{
    const BYTE* const VAR_1 = (const BYTE*)VAR_0;
    U32 VAR_2 = VAR_1[0];
    VAR_2 += ((U32)VAR_1[1])<< 8;
    VAR_2 += ((U32)VAR_1[2])<<16;
    VAR_2 += ((U32)VAR_1[3])<<24;
    return VAR_2;
}
