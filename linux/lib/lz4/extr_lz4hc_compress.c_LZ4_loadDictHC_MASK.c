
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int const* end; } ;
struct TYPE_6__ {TYPE_2__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamHC_t ;
typedef TYPE_2__ LZ4HC_CCtx_internal ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*) ;

int FUNC_2(LZ4_streamHC_t *VAR_1,
 const char *VAR_2,
 int VAR_3)
{
 LZ4HC_CCtx_internal *VAR_4 = &VAR_1->internal_donotuse;

 if (VAR_3 > 64 * VAR_0) {
  VAR_2 += VAR_3 - 64 * VAR_0;
  VAR_3 = 64 * VAR_0;
 }
 FUNC_1(VAR_4, (const BYTE *)VAR_2);
 if (VAR_3 >= 4)
  FUNC_0(VAR_4, (const BYTE *)VAR_2 + (VAR_3 - 3));
 VAR_4->end = (const BYTE *)VAR_2 + VAR_3;
 return VAR_3;
}
