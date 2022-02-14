
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ud {scalar_t__ mnemonic; int dis_mode; scalar_t__ pfx_repe; TYPE_2__* operand; TYPE_1__* le; } ;
struct TYPE_6__ {scalar_t__ mnemonic; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ base; } ;
struct TYPE_4__ {size_t* table; } ;


 int FUNC_0 (struct ud*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_1 (struct ud*) ;
 TYPE_3__* VAR_9 ;

__attribute__((used)) static int FUNC_2( struct ud* VAR_10 )
{

  if ( VAR_10->mnemonic == VAR_0 ) {
    VAR_10->mnemonic = VAR_9[ VAR_10->le->table[ FUNC_1( VAR_10 ) ] ].mnemonic;
  }

  if ( VAR_10->mnemonic == VAR_3 && VAR_10->dis_mode != 64 ) {
    FUNC_0(VAR_10, "swapgs invalid in 64bits mode\n");
    return -1;
  }

  if (VAR_10->mnemonic == VAR_4) {
    if ((VAR_10->operand[0].type == VAR_6 && VAR_10->operand[0].base == VAR_7 &&
         VAR_10->operand[1].type == VAR_6 && VAR_10->operand[1].base == VAR_7) ||
        (VAR_10->operand[0].type == VAR_6 && VAR_10->operand[0].base == VAR_8 &&
         VAR_10->operand[1].type == VAR_6 && VAR_10->operand[1].base == VAR_8)) {
      VAR_10->operand[0].type = VAR_5;
      VAR_10->operand[1].type = VAR_5;
      VAR_10->mnemonic = VAR_1;
    }
  }

  if (VAR_10->mnemonic == VAR_1 && VAR_10->pfx_repe) {
    VAR_10->pfx_repe = 0;
    VAR_10->mnemonic = VAR_2;
  }
  return 0;
}
