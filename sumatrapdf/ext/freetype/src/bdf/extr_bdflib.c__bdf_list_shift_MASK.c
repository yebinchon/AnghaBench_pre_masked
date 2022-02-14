
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long used; int * field; } ;
typedef TYPE_1__ _bdf_list_t ;



__attribute__((used)) static void
  FUNC_0( _bdf_list_t* VAR_0,
                   unsigned long VAR_1 )
  {
    unsigned long VAR_2, VAR_3;


    if ( VAR_0 == 0 || VAR_0->used == 0 || VAR_1 == 0 )
      return;

    if ( VAR_1 >= VAR_0->used )
    {
      VAR_0->used = 0;
      return;
    }

    for ( VAR_3 = VAR_1, VAR_2 = 0; VAR_3 < VAR_0->used; VAR_2++, VAR_3++ )
      VAR_0->field[VAR_2] = VAR_0->field[VAR_3];
    VAR_0->used -= VAR_1;
  }
