
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int prefixSize; int extDictSize; int * prefixEnd; int * externalDict; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamDecode_t_internal ;
typedef TYPE_2__ LZ4_streamDecode_t ;


 int FUNC_0 (char const*,char*,int ,int,int ,int ,int ,int ,int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1 (LZ4_streamDecode_t* VAR_3, const char* VAR_4, char* VAR_5, int VAR_6) {
 LZ4_streamDecode_t_internal* VAR_7 = &VAR_3->internal_donotuse;
 int VAR_8;

 if (VAR_7->prefixEnd == (ut8*)VAR_5) {
  VAR_8 = FUNC_0(VAR_4, VAR_5, 0, VAR_6,
    VAR_0, VAR_1, 0,
    VAR_2, VAR_7->prefixEnd - VAR_7->prefixSize, VAR_7->externalDict, VAR_7->extDictSize);
  if (VAR_8 <= 0) return VAR_8;
  VAR_7->prefixSize += VAR_6;
  VAR_7->prefixEnd += VAR_6;
 } else {
  VAR_7->extDictSize = VAR_7->prefixSize;
  VAR_7->externalDict = VAR_7->prefixEnd - VAR_7->extDictSize;
  VAR_8 = FUNC_0(VAR_4, VAR_5, 0, VAR_6,
    VAR_0, VAR_1, 0,
    VAR_2, (ut8*)VAR_5, VAR_7->externalDict, VAR_7->extDictSize);
  if (VAR_8 <= 0) return VAR_8;
  VAR_7->prefixSize = VAR_6;
  VAR_7->prefixEnd = (ut8*)VAR_5 + VAR_6;
 }
 return VAR_8;
}
