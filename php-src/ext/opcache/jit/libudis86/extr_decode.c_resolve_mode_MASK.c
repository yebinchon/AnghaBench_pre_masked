
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ud {int dis_mode; int vex_op; int _rex; int vex_b1; int vex_b2; int pfx_rex; int opr_mode; int adr_mode; scalar_t__ pfx_adr; scalar_t__ pfx_opr; TYPE_1__* itab_entry; scalar_t__ error; } ;
struct TYPE_2__ {int prefix; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ud*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6( struct ud* VAR_0 )
{
  int VAR_1;

  if ( VAR_0->error ) return -1;


  if ( VAR_0->dis_mode == 64 ) {


    if ( FUNC_1( VAR_0->itab_entry->prefix ) ) {
      FUNC_4(VAR_0, "instruction invalid in 64bits\n");
      return -1;
    }






    if (VAR_0->vex_op == 0xc4) {

        VAR_0->_rex = ((~(VAR_0->vex_b1 >> 5) & 0x7) |
                   ((VAR_0->vex_b2 >> 4) & 0x8) );
    } else if (VAR_0->vex_op == 0xc5) {

        VAR_0->_rex = (~(VAR_0->vex_b1 >> 5)) & 4;
    } else {
        FUNC_5(VAR_0->vex_op == 0);
        VAR_0->_rex = VAR_0->pfx_rex;
    }
    VAR_0->_rex &= FUNC_2(VAR_0->itab_entry->prefix);




    VAR_1 = FUNC_0( VAR_0->itab_entry->prefix );

    if (FUNC_3(VAR_0->_rex)) {
        VAR_0->opr_mode = 64;
    } else if ( VAR_0->pfx_opr ) {
        VAR_0->opr_mode = 16;
    } else {




        VAR_0->opr_mode = VAR_1 ? 64 : 32;
    }


    VAR_0->adr_mode = (VAR_0->pfx_adr) ? 32 : 64;
  } else if ( VAR_0->dis_mode == 32 ) {
    VAR_0->opr_mode = ( VAR_0->pfx_opr ) ? 16 : 32;
    VAR_0->adr_mode = ( VAR_0->pfx_adr ) ? 16 : 32;
  } else if ( VAR_0->dis_mode == 16 ) {
    VAR_0->opr_mode = ( VAR_0->pfx_opr ) ? 32 : 16;
    VAR_0->adr_mode = ( VAR_0->pfx_adr ) ? 32 : 16;
  }

  return 0;
}
