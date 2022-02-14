
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_nextInputType_e ;
struct TYPE_3__ {int stage; } ;
typedef TYPE_1__ ZSTD_DCtx ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

ZSTD_nextInputType_e FUNC_0(ZSTD_DCtx *VAR_6)
{
 switch (VAR_6->stage) {
 default:
 case 129:
 case 133: return VAR_3;
 case 134: return VAR_1;
 case 131: return VAR_0;
 case 130: return VAR_4;
 case 135: return VAR_2;
 case 132:
 case 128: return VAR_5;
 }
}
