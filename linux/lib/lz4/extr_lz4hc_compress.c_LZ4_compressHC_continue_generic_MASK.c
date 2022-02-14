
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int limitedOutput_directive ;
typedef int U32 ;
struct TYPE_9__ {size_t dictLimit; int lowLimit; int compressionLevel; int const* dictBase; int const* end; int const* base; } ;
struct TYPE_8__ {TYPE_2__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamHC_t ;
typedef TYPE_2__ LZ4HC_CCtx_internal ;
typedef int const BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char const*,char*,int,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int const*) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static int FUNC_4(
 LZ4_streamHC_t *VAR_2,
 const char *VAR_3,
 char *VAR_4,
 int VAR_5,
 int VAR_6,
 limitedOutput_directive VAR_7)
{
 LZ4HC_CCtx_internal *VAR_8 = &VAR_2->internal_donotuse;


 if (VAR_8->base == ((void*)0))
  FUNC_1(VAR_8, (const BYTE *) VAR_3);


 if ((size_t)(VAR_8->end - VAR_8->base) > 2 * VAR_0) {
  size_t VAR_9 = (size_t)(VAR_8->end - VAR_8->base)
   - VAR_8->dictLimit;
  if (VAR_9 > 64 * VAR_1)
   VAR_9 = 64 * VAR_1;
  FUNC_3(VAR_2,
   (const char *)(VAR_8->end) - VAR_9, (int)VAR_9);
 }


 if ((const BYTE *)VAR_3 != VAR_8->end)
  FUNC_2(VAR_8, (const BYTE *)VAR_3);


 {
  const BYTE *VAR_10 = (const BYTE *) VAR_3 + VAR_5;
  const BYTE * const VAR_11 = VAR_8->dictBase + VAR_8->lowLimit;
  const BYTE * const VAR_12 = VAR_8->dictBase + VAR_8->dictLimit;

  if ((VAR_10 > VAR_11)
   && ((const BYTE *)VAR_3 < VAR_12)) {
   if (VAR_10 > VAR_12)
    VAR_10 = VAR_12;
   VAR_8->lowLimit = (U32)(VAR_10 - VAR_8->dictBase);

   if (VAR_8->dictLimit - VAR_8->lowLimit < 4)
    VAR_8->lowLimit = VAR_8->dictLimit;
  }
 }

 return FUNC_0(VAR_8, VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_8->compressionLevel, VAR_7);
}
