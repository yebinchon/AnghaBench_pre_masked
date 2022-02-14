
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef long code_int ;
struct TYPE_5__ {size_t cur_bits; long cur_accum; scalar_t__ n_bits; scalar_t__ free_ent; scalar_t__ maxcode; scalar_t__ g_init_bits; long EOFCode; scalar_t__ clear_flg; } ;
typedef TYPE_1__ GifCtx ;


 size_t VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 long* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(code_int VAR_4, GifCtx *VAR_5)
{
 if (VAR_5->cur_bits == VAR_0) {
  return;
 }

    VAR_5->cur_accum &= VAR_1[ VAR_5->cur_bits ];

    if( VAR_5->cur_bits > 0 )
        VAR_5->cur_accum |= ((long)VAR_4 << VAR_5->cur_bits);
    else
        VAR_5->cur_accum = VAR_4;

    VAR_5->cur_bits += VAR_5->n_bits;

    while( VAR_5->cur_bits >= 8 ) {
        FUNC_1( (unsigned int)(VAR_5->cur_accum & 0xff), VAR_5 );
        VAR_5->cur_accum >>= 8;
        VAR_5->cur_bits -= 8;
    }





   if ( VAR_5->free_ent > VAR_5->maxcode || VAR_5->clear_flg ) {

            if( VAR_5->clear_flg ) {

                VAR_5->maxcode = FUNC_0 (VAR_5->n_bits = VAR_5->g_init_bits);
                VAR_5->clear_flg = 0;

            } else {

                ++(VAR_5->n_bits);
                if ( VAR_5->n_bits == VAR_2 )
                    VAR_5->maxcode = VAR_3;
                else
                    VAR_5->maxcode = FUNC_0(VAR_5->n_bits);
            }
        }

    if( VAR_4 == VAR_5->EOFCode ) {



        while( VAR_5->cur_bits > 0 ) {
                FUNC_1( (unsigned int)(VAR_5->cur_accum & 0xff), VAR_5);
                VAR_5->cur_accum >>= 8;
                VAR_5->cur_bits -= 8;
        }


  VAR_5->cur_bits = VAR_0;

        FUNC_2(VAR_5);
    }
}
