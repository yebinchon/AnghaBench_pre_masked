
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FSE_DTable ;
typedef int BYTE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,short*,unsigned int,unsigned int,void*,size_t) ;
 size_t FUNC_6 (void*,size_t,int const*,size_t,int *) ;
 scalar_t__ FUNC_7 (size_t) ;
 size_t FUNC_8 (short*,unsigned int*,unsigned int*,int const* const,size_t) ;
 int VAR_1 ;

size_t FUNC_9(void *VAR_2, size_t VAR_3, const void *VAR_4, size_t VAR_5, unsigned VAR_6, void *VAR_7, size_t VAR_8)
{
 const BYTE *const VAR_9 = (const BYTE *)VAR_4;
 const BYTE *VAR_10 = VAR_9;
 unsigned VAR_11;
 unsigned VAR_12 = VAR_0;
 size_t VAR_13;

 FSE_DTable *VAR_14;
 short *VAR_15;
 size_t VAR_16 = 0;

 FUNC_4(sizeof(FSE_DTable) == sizeof(U32));

 VAR_14 = (FSE_DTable *)((U32 *)VAR_7 + VAR_16);
 VAR_16 += FUNC_3(VAR_6);
 VAR_15 = (short *)((U32 *)VAR_7 + VAR_16);
 VAR_16 += FUNC_0(sizeof(short) * (VAR_0 + 1), sizeof(U32)) >> 2;

 if ((VAR_16 << 2) > VAR_8)
  return FUNC_2(VAR_1);
 VAR_7 = (U32 *)VAR_7 + VAR_16;
 VAR_8 -= (VAR_16 << 2);


 VAR_13 = FUNC_8(VAR_15, &VAR_12, &VAR_11, VAR_9, VAR_5);
 if (FUNC_7(VAR_13))
  return VAR_13;


 if (VAR_11 > VAR_6)
  return FUNC_2(VAR_1);
 VAR_10 += VAR_13;
 VAR_5 -= VAR_13;

 FUNC_1(FUNC_5(VAR_14, VAR_15, VAR_12, VAR_11, VAR_7, VAR_8));

 return FUNC_6(VAR_2, VAR_3, VAR_10, VAR_5, VAR_14);
}
