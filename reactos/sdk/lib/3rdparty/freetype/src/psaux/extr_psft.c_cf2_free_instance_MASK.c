
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int BV; int lastNDV; } ;
struct TYPE_4__ {TYPE_1__ blend; int memory; } ;
typedef int FT_Memory ;
typedef TYPE_2__* CF2_Font ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
  FUNC_1( void* VAR_0 )
  {
    CF2_Font VAR_1 = (CF2_Font)VAR_0;


    if ( VAR_1 )
    {
      FT_Memory VAR_2 = VAR_1->memory;


      FUNC_0( VAR_1->blend.lastNDV );
      FUNC_0( VAR_1->blend.BV );
    }
  }
