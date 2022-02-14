
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolEncodingType_e ;
typedef int const U32 ;
typedef int S16 ;
typedef int FSE_decode_t4 ;
typedef int FSE_DTable ;
typedef int BYTE ;


 int FUNC_0 (int,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int *,int *,int const,int const,void*,size_t) ;
 int FUNC_4 (size_t const) ;
 size_t FUNC_5 (int *,int const*,int const*,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;

__attribute__((used)) static size_t FUNC_6(FSE_DTable *VAR_4, const FSE_DTable **VAR_5, symbolEncodingType_e VAR_6, U32 VAR_7, U32 VAR_8, const void *VAR_9,
     size_t VAR_10, const FSE_decode_t4 *VAR_11, U32 VAR_12, void *VAR_13, size_t VAR_14)
{
 const void *const VAR_15 = VAR_11;
 switch (VAR_6) {
 case 128:
  if (!VAR_10)
   return FUNC_1(VAR_3);
  if ((*(const BYTE *)VAR_9) > VAR_7)
   return FUNC_1(VAR_2);
  FUNC_2(VAR_4, *(const BYTE *)VAR_9);
  *VAR_5 = VAR_4;
  return 1;
 case 131: *VAR_5 = (const FSE_DTable *)VAR_15; return 0;
 case 129:
  if (!VAR_12)
   return FUNC_1(VAR_2);
  return 0;
 default:
 case 130: {
  U32 VAR_16;
  S16 *VAR_17 = (S16 *)VAR_13;
  size_t const VAR_18 = FUNC_0(sizeof(S16) * (VAR_1 + 1), sizeof(U32)) >> 2;

  if ((VAR_18 << 2) > VAR_14)
   return FUNC_1(VAR_0);
  VAR_13 = (U32 *)VAR_13 + VAR_18;
  VAR_14 -= (VAR_18 << 2);
  {
   size_t const VAR_19 = FUNC_5(VAR_17, &VAR_7, &VAR_16, VAR_9, VAR_10);
   if (FUNC_4(VAR_19))
    return FUNC_1(VAR_2);
   if (VAR_16 > VAR_8)
    return FUNC_1(VAR_2);
   FUNC_3(VAR_4, VAR_17, VAR_7, VAR_16, VAR_13, VAR_14);
   *VAR_5 = VAR_4;
   return VAR_19;
  }
 }
 }
}
