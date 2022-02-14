
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_bits; int buf_size; scalar_t__ buf_offset; int in_eof; int buf_total; int buf_tab; int source; } ;
typedef scalar_t__ FT_ULong ;
typedef int FT_UInt ;
typedef TYPE_1__* FT_LzwState ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
  FUNC_2( FT_LzwState VAR_0 )
  {
    FT_ULong VAR_1;


    if ( VAR_0->in_eof )
      return -1;

    VAR_1 = FUNC_1( VAR_0->source,
                               VAR_0->buf_tab,
                               VAR_0->num_bits );

    VAR_0->buf_size = (FT_UInt)VAR_1;
    VAR_0->buf_total += VAR_1;
    VAR_0->in_eof = FUNC_0( VAR_1 < VAR_0->num_bits );
    VAR_0->buf_offset = 0;

    VAR_0->buf_size <<= 3;
    if ( VAR_0->buf_size > VAR_0->num_bits )
      VAR_0->buf_size -= VAR_0->num_bits - 1;
    else
      return -1;

    if ( VAR_1 == 0 )
      return -1;

    return 0;
  }
