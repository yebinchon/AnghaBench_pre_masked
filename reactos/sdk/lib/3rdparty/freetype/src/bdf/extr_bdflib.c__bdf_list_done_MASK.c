
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field; scalar_t__ memory; } ;
typedef TYPE_1__ _bdf_list_t ;
typedef scalar_t__ FT_Memory ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_2( _bdf_list_t* VAR_0 )
  {
    FT_Memory VAR_1 = VAR_0->memory;


    if ( VAR_1 )
    {
      FUNC_0( VAR_0->field );
      FUNC_1( VAR_0 );
    }
  }
