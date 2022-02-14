
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prefixSize; int extDictSize; int * prefixEnd; int * externalDict; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamDecode_t_internal ;
typedef TYPE_2__ LZ4_streamDecode_t ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*,char*,int,int,int *,int) ;
 int FUNC_2 (char const*,char*,int,int *,int) ;
 int FUNC_3 (int) ;

int FUNC_4(LZ4_streamDecode_t *VAR_1,
 const char *VAR_2, char *VAR_3, int VAR_4)
{
 LZ4_streamDecode_t_internal *VAR_5 = &VAR_1->internal_donotuse;
 int VAR_6;

 if (VAR_5->prefixSize == 0) {
  FUNC_3(VAR_5->extDictSize == 0);
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_5->prefixSize = VAR_4;
  VAR_5->prefixEnd = (BYTE *)VAR_3 + VAR_4;
 } else if (VAR_5->prefixEnd == (BYTE *)VAR_3) {
  if (VAR_5->prefixSize >= 64 * VAR_0 - 1 ||
      VAR_5->extDictSize == 0)
   VAR_6 = FUNC_0(VAR_2, VAR_3,
           VAR_4);
  else
   VAR_6 = FUNC_1(VAR_2, VAR_3,
    VAR_4, VAR_5->prefixSize,
    VAR_5->externalDict, VAR_5->extDictSize);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_5->prefixSize += VAR_4;
  VAR_5->prefixEnd += VAR_4;
 } else {
  VAR_5->extDictSize = VAR_5->prefixSize;
  VAR_5->externalDict = VAR_5->prefixEnd - VAR_5->extDictSize;
  VAR_6 = FUNC_2(VAR_2, VAR_3,
   VAR_4, VAR_5->externalDict, VAR_5->extDictSize);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_5->prefixSize = VAR_4;
  VAR_5->prefixEnd = (BYTE *)VAR_3 + VAR_4;
 }
 return VAR_6;
}
