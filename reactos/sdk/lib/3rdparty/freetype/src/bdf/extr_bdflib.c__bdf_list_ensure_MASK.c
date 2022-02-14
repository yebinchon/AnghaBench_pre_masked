
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long size; int field; int memory; } ;
typedef TYPE_1__ _bdf_list_t ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static FT_Error
  FUNC_2( _bdf_list_t* VAR_3,
                    unsigned long VAR_4 )
  {
    FT_Error VAR_5 = VAR_0;


    if ( VAR_4 > VAR_3->size )
    {
      unsigned long VAR_6 = VAR_3->size;
      unsigned long VAR_7 = VAR_6 + ( VAR_6 >> 1 ) + 5;
      unsigned long VAR_8 = (unsigned long)( VAR_1 / sizeof ( char* ) );
      FT_Memory VAR_9 = VAR_3->memory;


      if ( VAR_6 == VAR_8 )
      {
        VAR_5 = FUNC_1( VAR_2 );
        goto Exit;
      }
      else if ( VAR_7 < VAR_6 || VAR_7 > VAR_8 )
        VAR_7 = VAR_8;

      if ( FUNC_0( VAR_3->field, VAR_6, VAR_7 ) )
        goto Exit;

      VAR_3->size = VAR_7;
    }

  Exit:
    return VAR_5;
  }
