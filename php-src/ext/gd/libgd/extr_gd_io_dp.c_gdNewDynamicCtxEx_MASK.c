
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtx ;
typedef int dynamicPtr ;
struct TYPE_3__ {int gd_free; int tell; int seek; int putBuf; int getBuf; int putC; int getC; } ;
struct TYPE_4__ {TYPE_1__ ctx; int * dp; } ;
typedef TYPE_2__ dpIOCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int,void*,int) ;

gdIOCtx * FUNC_2 (int VAR_7, void *VAR_8, int VAR_9)
{
 dpIOCtx *VAR_10;
 dynamicPtr *VAR_11;

 VAR_10 = (dpIOCtx *) FUNC_0 (sizeof (dpIOCtx));

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_9);

 VAR_10->dp = VAR_11;

 VAR_10->ctx.getC = VAR_1;
 VAR_10->ctx.putC = VAR_3;

 VAR_10->ctx.getBuf = VAR_0;
 VAR_10->ctx.putBuf = VAR_2;

 VAR_10->ctx.seek = VAR_4;
 VAR_10->ctx.tell = VAR_5;

 VAR_10->ctx.gd_free = VAR_6;

 return (gdIOCtx *) VAR_10;
}
