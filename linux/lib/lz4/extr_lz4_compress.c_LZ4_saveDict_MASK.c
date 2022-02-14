
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int dictSize; int const* dictionary; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t_internal ;
typedef TYPE_2__ LZ4_stream_t ;
typedef int const BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,int const* const,int) ;

int FUNC_1(LZ4_stream_t *VAR_1, char *VAR_2, int VAR_3)
{
 LZ4_stream_t_internal * const VAR_4 = &VAR_1->internal_donotuse;
 const BYTE * const VAR_5 = VAR_4->dictionary + VAR_4->dictSize;

 if ((U32)VAR_3 > 64 * VAR_0) {

  VAR_3 = 64 * VAR_0;
 }
 if ((U32)VAR_3 > VAR_4->dictSize)
  VAR_3 = VAR_4->dictSize;

 FUNC_0(VAR_2, VAR_5 - VAR_3, VAR_3);

 VAR_4->dictionary = (const BYTE *)VAR_2;
 VAR_4->dictSize = (U32)VAR_3;

 return VAR_3;
}
