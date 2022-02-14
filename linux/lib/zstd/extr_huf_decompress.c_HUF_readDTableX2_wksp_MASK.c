
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtd ;
typedef scalar_t__ U32 ;
struct TYPE_6__ {void* tableLog; scalar_t__ tableType; scalar_t__ maxTableLog; } ;
struct TYPE_5__ {void* nbBits; void* byte; } ;
typedef int HUF_DTable ;
typedef TYPE_1__ HUF_DEltX2 ;
typedef TYPE_2__ DTableDesc ;
typedef void* BYTE ;


 int FUNC_0 (scalar_t__,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (size_t) ;
 size_t FUNC_5 (void**,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,void const*,size_t,void*,size_t) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int VAR_2 ;

size_t FUNC_7(HUF_DTable *VAR_3, const void *VAR_4, size_t VAR_5, void *VAR_6, size_t VAR_7)
{
 U32 VAR_8 = 0;
 U32 VAR_9 = 0;
 size_t VAR_10;
 void *const VAR_11 = VAR_3 + 1;
 HUF_DEltX2 *const VAR_12 = (HUF_DEltX2 *)VAR_11;

 U32 *VAR_13;
 BYTE *VAR_14;
 size_t VAR_15 = 0;

 VAR_13 = (U32 *)VAR_6 + VAR_15;
 VAR_15 += VAR_1 + 1;
 VAR_14 = (BYTE *)((U32 *)VAR_6 + VAR_15);
 VAR_15 += FUNC_0(VAR_0 + 1, sizeof(U32)) >> 2;

 if ((VAR_15 << 2) > VAR_7)
  return FUNC_1(VAR_2);
 VAR_6 = (U32 *)VAR_6 + VAR_15;
 VAR_7 -= (VAR_15 << 2);

 FUNC_2(sizeof(DTableDesc) == sizeof(HUF_DTable));


 VAR_10 = FUNC_5(VAR_14, VAR_0 + 1, VAR_13, &VAR_9, &VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_4(VAR_10))
  return VAR_10;


 {
  DTableDesc VAR_16 = FUNC_3(VAR_3);
  if (VAR_8 > (U32)(VAR_16.maxTableLog + 1))
   return FUNC_1(VAR_2);
  VAR_16.tableType = 0;
  VAR_16.tableLog = (BYTE)VAR_8;
  FUNC_6(VAR_3, &VAR_16, sizeof(VAR_16));
 }


 {
  U32 VAR_17, VAR_18 = 0;
  for (VAR_17 = 1; VAR_17 < VAR_8 + 1; VAR_17++) {
   U32 const VAR_19 = VAR_18;
   VAR_18 += (VAR_13[VAR_17] << (VAR_17 - 1));
   VAR_13[VAR_17] = VAR_19;
  }
 }


 {
  U32 VAR_20;
  for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
   U32 const VAR_21 = VAR_14[VAR_20];
   U32 const VAR_22 = (1 << VAR_21) >> 1;
   U32 VAR_23;
   HUF_DEltX2 VAR_24;
   VAR_24.byte = (BYTE)VAR_20;
   VAR_24.nbBits = (BYTE)(VAR_8 + 1 - VAR_21);
   for (VAR_23 = VAR_13[VAR_21]; VAR_23 < VAR_13[VAR_21] + VAR_22; VAR_23++)
    VAR_12[VAR_23] = VAR_24;
   VAR_13[VAR_21] += VAR_22;
  }
 }

 return VAR_10;
}
