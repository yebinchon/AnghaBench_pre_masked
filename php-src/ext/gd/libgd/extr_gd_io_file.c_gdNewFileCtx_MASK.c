
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_3__ {int gd_free; int seek; int tell; int putBuf; int getBuf; int putC; int getC; } ;
struct TYPE_4__ {TYPE_1__ ctx; int * f; } ;
typedef TYPE_2__ fileIOCtx ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;

gdIOCtx * FUNC_1 (FILE * VAR_7)
{
 fileIOCtx *VAR_8;

 VAR_8 = (fileIOCtx *) FUNC_0(sizeof (fileIOCtx));

 VAR_8->f = VAR_7;

 VAR_8->ctx.getC = VAR_1;
 VAR_8->ctx.putC = VAR_3;

 VAR_8->ctx.getBuf = VAR_0;
 VAR_8->ctx.putBuf = VAR_2;

 VAR_8->ctx.tell = VAR_5;
 VAR_8->ctx.seek = VAR_4;

 VAR_8->ctx.gd_free = VAR_6;

 return (gdIOCtx *) VAR_8;
}
