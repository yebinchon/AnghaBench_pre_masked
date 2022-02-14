
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* U32 ;
struct TYPE_6__ {int dictSize; int currentOffset; int const* dictionary; scalar_t__ initCheck; } ;
struct TYPE_7__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t_internal ;
typedef TYPE_2__ LZ4_stream_t ;
typedef int const BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*,char*,int,int,int ,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_2(LZ4_stream_t *VAR_8, const char *VAR_9,
 char *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 LZ4_stream_t_internal *VAR_14 = &VAR_8->internal_donotuse;
 const BYTE * const VAR_15 = VAR_14->dictionary
  + VAR_14->dictSize;

 const BYTE *VAR_16 = (const BYTE *) VAR_9;

 if (VAR_14->initCheck) {

  return 0;
 }

 if ((VAR_14->dictSize > 0) && (VAR_16 > VAR_15))
  VAR_16 = VAR_15;

 FUNC_1(VAR_14, VAR_16);

 if (VAR_13 < 1)
  VAR_13 = VAR_1;


 {
  const BYTE *VAR_17 = (const BYTE *) VAR_9 + VAR_11;

  if ((VAR_17 > VAR_14->dictionary)
   && (VAR_17 < VAR_15)) {
   VAR_14->dictSize = (U32)(VAR_15 - VAR_17);
   if (VAR_14->dictSize > 64 * VAR_0)
    VAR_14->dictSize = 64 * VAR_0;
   if (VAR_14->dictSize < 4)
    VAR_14->dictSize = 0;
   VAR_14->dictionary = VAR_15 - VAR_14->dictSize;
  }
 }


 if (VAR_15 == (const BYTE *)VAR_9) {
  int VAR_18;

  if ((VAR_14->dictSize < 64 * VAR_0) &&
   (VAR_14->dictSize < VAR_14->currentOffset)) {
   VAR_18 = FUNC_0(
    VAR_14, VAR_9, VAR_10, VAR_11,
    VAR_12, VAR_4, VAR_2,
    VAR_7, VAR_3, VAR_13);
  } else {
   VAR_18 = FUNC_0(
    VAR_14, VAR_9, VAR_10, VAR_11,
    VAR_12, VAR_4, VAR_2,
    VAR_7, VAR_5, VAR_13);
  }
  VAR_14->dictSize += (U32)VAR_11;
  VAR_14->currentOffset += (U32)VAR_11;
  return VAR_18;
 }


 {
  int VAR_19;

  if ((VAR_14->dictSize < 64 * VAR_0) &&
   (VAR_14->dictSize < VAR_14->currentOffset)) {
   VAR_19 = FUNC_0(
    VAR_14, VAR_9, VAR_10, VAR_11,
    VAR_12, VAR_4, VAR_2,
    VAR_6, VAR_3, VAR_13);
  } else {
   VAR_19 = FUNC_0(
    VAR_14, VAR_9, VAR_10, VAR_11,
    VAR_12, VAR_4, VAR_2,
    VAR_6, VAR_5, VAR_13);
  }
  VAR_14->dictionary = (const BYTE *)VAR_9;
  VAR_14->dictSize = (U32)VAR_11;
  VAR_14->currentOffset += (U32)VAR_11;
  return VAR_19;
 }
}
