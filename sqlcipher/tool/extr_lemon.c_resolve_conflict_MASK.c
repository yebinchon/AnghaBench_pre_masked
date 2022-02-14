
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {scalar_t__ prec; scalar_t__ assoc; } ;
struct TYPE_4__ {TYPE_1__* rp; } ;
struct action {scalar_t__ type; TYPE_2__ x; struct symbol* sp; } ;
struct TYPE_3__ {struct symbol* precsym; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  struct action *VAR_11,
  struct action *VAR_12
){
  struct symbol *VAR_13, *VAR_14;
  int VAR_15 = 0;
  FUNC_0( VAR_11->sp==VAR_12->sp );
  if( VAR_11->type==VAR_7 && VAR_12->type==VAR_7 ){
    VAR_12->type = VAR_10;
    VAR_15++;
  }
  if( VAR_11->type==VAR_7 && VAR_12->type==VAR_4 ){
    VAR_13 = VAR_11->sp;
    VAR_14 = VAR_12->x.rp->precsym;
    if( VAR_14==0 || VAR_13->prec<0 || VAR_14->prec<0 ){

      VAR_12->type = VAR_9;
      VAR_15++;
    }else if( VAR_13->prec>VAR_14->prec ){
      VAR_12->type = VAR_3;
    }else if( VAR_13->prec<VAR_14->prec ){
      VAR_11->type = VAR_8;
    }else if( VAR_13->prec==VAR_14->prec && VAR_13->assoc==VAR_5 ){
      VAR_12->type = VAR_3;
    }else if( VAR_13->prec==VAR_14->prec && VAR_13->assoc==VAR_1 ){
      VAR_11->type = VAR_8;
    }else{
      FUNC_0( VAR_13->prec==VAR_14->prec && VAR_13->assoc==VAR_2 );
      VAR_11->type = VAR_0;
    }
  }else if( VAR_11->type==VAR_4 && VAR_12->type==VAR_4 ){
    VAR_13 = VAR_11->x.rp->precsym;
    VAR_14 = VAR_12->x.rp->precsym;
    if( VAR_13==0 || VAR_14==0 || VAR_13->prec<0 ||
    VAR_14->prec<0 || VAR_13->prec==VAR_14->prec ){
      VAR_12->type = VAR_6;
      VAR_15++;
    }else if( VAR_13->prec>VAR_14->prec ){
      VAR_12->type = VAR_3;
    }else if( VAR_13->prec<VAR_14->prec ){
      VAR_11->type = VAR_3;
    }
  }else{
    FUNC_0(
      VAR_11->type==VAR_8 ||
      VAR_11->type==VAR_3 ||
      VAR_11->type==VAR_10 ||
      VAR_11->type==VAR_9 ||
      VAR_11->type==VAR_6 ||
      VAR_12->type==VAR_8 ||
      VAR_12->type==VAR_3 ||
      VAR_12->type==VAR_10 ||
      VAR_12->type==VAR_9 ||
      VAR_12->type==VAR_6
    );



  }
  return VAR_15;
}
