
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ yy_size_t ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_is_our_buffer; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

YY_BUFFER_STATE FUNC_3 (const char * VAR_1, int VAR_2 )
{
 YY_BUFFER_STATE VAR_3;
 char *VAR_4;
 yy_size_t VAR_5;
 int VAR_6;


 VAR_5 = (yy_size_t) (VAR_2 + 2);
 VAR_4 = (char *) FUNC_2( VAR_5 );
 if ( ! VAR_4 )
  FUNC_0( "out of dynamic memory in yy_scan_bytes()" );

 for ( VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6 )
  VAR_4[VAR_6] = VAR_1[VAR_6];

 VAR_4[VAR_2] = VAR_4[VAR_2+1] = VAR_0;

 VAR_3 = FUNC_1( VAR_4, VAR_5 );
 if ( ! VAR_3 )
  FUNC_0( "bad buffer in yy_scan_bytes()" );




 VAR_3->yy_is_our_buffer = 1;

 return VAR_3;
}
