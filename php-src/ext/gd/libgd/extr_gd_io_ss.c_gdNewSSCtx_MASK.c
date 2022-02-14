
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_2__* ssIOCtxPtr ;
typedef int ssIOCtx ;
typedef int gdSourcePtr ;
typedef int gdSinkPtr ;
typedef int gdIOCtx ;
struct TYPE_3__ {int gd_free; int * seek; int * tell; int putBuf; int putC; int getBuf; int getC; } ;
struct TYPE_4__ {TYPE_1__ ctx; int snk; int src; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

gdIOCtx * FUNC_1 (gdSourcePtr VAR_5, gdSinkPtr VAR_6)
{
 ssIOCtxPtr VAR_7;

 VAR_7 = (ssIOCtxPtr) FUNC_0 (sizeof (ssIOCtx));

 VAR_7->src = VAR_5;
 VAR_7->snk = VAR_6;

 VAR_7->ctx.getC = VAR_4;
 VAR_7->ctx.getBuf = VAR_3;

 VAR_7->ctx.putC = VAR_2;
 VAR_7->ctx.putBuf = VAR_1;

 VAR_7->ctx.tell = ((void*)0);
 VAR_7->ctx.seek = ((void*)0);

 VAR_7->ctx.gd_free = VAR_0;

 return (gdIOCtx *) VAR_7;
}
