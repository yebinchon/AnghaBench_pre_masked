
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct yy_buffer_state {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_buf_size; char* yy_ch_buf; int yy_is_our_buffer; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int) ;

YY_BUFFER_STATE FUNC_3 (FILE * VAR_0, int VAR_1 )
{
 YY_BUFFER_STATE VAR_2;

 VAR_2 = (YY_BUFFER_STATE) FUNC_2(sizeof( struct yy_buffer_state ) );
 if ( ! VAR_2 )
  FUNC_0( "out of dynamic memory in parser__create_buffer()" );

 VAR_2->yy_buf_size = VAR_1;




 VAR_2->yy_ch_buf = (char *) FUNC_2(VAR_2->yy_buf_size + 2 );
 if ( ! VAR_2->yy_ch_buf )
  FUNC_0( "out of dynamic memory in parser__create_buffer()" );

 VAR_2->yy_is_our_buffer = 1;

 FUNC_1(VAR_2,VAR_0 );

 return VAR_2;
}
