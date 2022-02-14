
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int searchLength; } ;
struct TYPE_7__ {TYPE_1__ cParams; } ;
struct TYPE_8__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (TYPE_3__*,void const*,size_t,int) ;

__attribute__((used)) static void FUNC_1(ZSTD_CCtx *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const U32 VAR_3 = VAR_0->params.cParams.searchLength;
 switch (VAR_3) {
 default:
 case 4: FUNC_0(VAR_0, VAR_1, VAR_2, 4); return;
 case 5: FUNC_0(VAR_0, VAR_1, VAR_2, 5); return;
 case 6: FUNC_0(VAR_0, VAR_1, VAR_2, 6); return;
 case 7: FUNC_0(VAR_0, VAR_1, VAR_2, 7); return;
 }
}
