
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ud {int error; unsigned int inp_ctr; int pc; scalar_t__ asm_buf_fill; int insn_offset; scalar_t__ pfx_seg; TYPE_1__* operand; TYPE_2__* itab_entry; int mnemonic; int * le; } ;
struct TYPE_4__ {int prefix; int mnemonic; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ud*) ;
 int FUNC_2 (struct ud*) ;
 int FUNC_3 (struct ud*) ;
 int FUNC_4 (struct ud*) ;
 TYPE_2__* VAR_1 ;
 int * VAR_2 ;

unsigned int
FUNC_5(struct ud *VAR_3)
{
  FUNC_4(VAR_3);
  FUNC_1(VAR_3);
  VAR_3->le = &VAR_2[0];
  VAR_3->error = FUNC_3(VAR_3) == -1 ||
             FUNC_2(VAR_3) == -1 ||
             VAR_3->error;

  if (VAR_3->error) {

    FUNC_1(VAR_3);

    VAR_3->itab_entry = &VAR_1[0];
    VAR_3->mnemonic = VAR_3->itab_entry->mnemonic;
  }




    if ( !FUNC_0( VAR_3->itab_entry->prefix ) &&
            VAR_3->operand[0].type != VAR_0 &&
            VAR_3->operand[1].type != VAR_0 )
        VAR_3->pfx_seg = 0;

  VAR_3->insn_offset = VAR_3->pc;
  VAR_3->asm_buf_fill = 0;
  VAR_3->pc += VAR_3->inp_ctr;


  return VAR_3->inp_ctr;
}
