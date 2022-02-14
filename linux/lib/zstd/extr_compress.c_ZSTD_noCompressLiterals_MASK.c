
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;
typedef int U16 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int * const,int ) ;
 int FUNC_2 (int * const,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int * const,void const*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_4(void *VAR_2, size_t VAR_3, const void *VAR_4, size_t VAR_5)
{
 BYTE *const VAR_6 = (BYTE * const)VAR_2;
 U32 const VAR_7 = 1 + (VAR_5 > 31) + (VAR_5 > 4095);

 if (VAR_5 + VAR_7 > VAR_3)
  return FUNC_0(VAR_0);

 switch (VAR_7) {
 case 1: VAR_6[0] = (BYTE)((U32)VAR_1 + (VAR_5 << 3)); break;
 case 2: FUNC_1(VAR_6, (U16)((U32)VAR_1 + (1 << 2) + (VAR_5 << 4))); break;
 default:
 case 3: FUNC_2(VAR_6, (U32)((U32)VAR_1 + (3 << 2) + (VAR_5 << 4))); break;
 }

 FUNC_3(VAR_6 + VAR_7, VAR_4, VAR_5);
 return VAR_5 + VAR_7;
}
