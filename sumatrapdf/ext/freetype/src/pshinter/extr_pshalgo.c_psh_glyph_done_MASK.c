
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * memory; scalar_t__ num_contours; scalar_t__ num_points; int contours; int points; int * hint_tables; } ;
typedef TYPE_1__* PSH_Glyph ;
typedef int * FT_Memory ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
  FUNC_2( PSH_Glyph VAR_0 )
  {
    FT_Memory VAR_1 = VAR_0->memory;


    FUNC_1( &VAR_0->hint_tables[1], VAR_1 );
    FUNC_1( &VAR_0->hint_tables[0], VAR_1 );

    FUNC_0( VAR_0->points );
    FUNC_0( VAR_0->contours );

    VAR_0->num_points = 0;
    VAR_0->num_contours = 0;

    VAR_0->memory = ((void*)0);
  }
