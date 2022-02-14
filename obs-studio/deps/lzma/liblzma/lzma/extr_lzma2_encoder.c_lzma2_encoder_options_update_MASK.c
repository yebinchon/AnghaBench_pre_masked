
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_8__ {scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; } ;
typedef TYPE_2__ lzma_options_lzma ;
struct TYPE_9__ {TYPE_2__* options; } ;
typedef TYPE_3__ lzma_filter ;
struct TYPE_7__ {scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; } ;
struct TYPE_10__ {scalar_t__ sequence; int need_properties; int need_state_reset; TYPE_1__ opt_cur; } ;
typedef TYPE_4__ lzma_coder ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static lzma_ret
FUNC_0(lzma_coder *VAR_6, const lzma_filter *VAR_7)
{



 if (VAR_7->options == ((void*)0) || VAR_6->sequence != VAR_5)
  return VAR_4;



 const lzma_options_lzma *VAR_8 = VAR_7->options;
 if (VAR_6->opt_cur.lc != VAR_8->lc || VAR_6->opt_cur.lp != VAR_8->lp
   || VAR_6->opt_cur.pb != VAR_8->pb) {

  if (VAR_8->lc > VAR_0 || VAR_8->lp > VAR_0
    || VAR_8->lc + VAR_8->lp > VAR_0
    || VAR_8->pb > VAR_3)
   return VAR_2;



  VAR_6->opt_cur.lc = VAR_8->lc;
  VAR_6->opt_cur.lp = VAR_8->lp;
  VAR_6->opt_cur.pb = VAR_8->pb;
  VAR_6->need_properties = 1;
  VAR_6->need_state_reset = 1;
 }

 return VAR_1;
}
