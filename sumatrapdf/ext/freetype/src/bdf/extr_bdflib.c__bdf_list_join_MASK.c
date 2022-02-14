
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long used; char** field; } ;
typedef TYPE_1__ _bdf_list_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
  FUNC_0( _bdf_list_t* VAR_1,
                  int VAR_2,
                  unsigned long *VAR_3 )
  {
    unsigned long VAR_4, VAR_5;
    char* VAR_6;


    *VAR_3 = 0;

    if ( VAR_1 == 0 || VAR_1->used == 0 )
      return 0;

    VAR_6 = VAR_1->field[0];
    for ( VAR_4 = VAR_5 = 0; VAR_4 < VAR_1->used; VAR_4++ )
    {
      char* VAR_7 = VAR_1->field[VAR_4];


      while ( *VAR_7 )
        VAR_6[VAR_5++] = *VAR_7++;

      if ( VAR_4 + 1 < VAR_1->used )
        VAR_6[VAR_5++] = (char)VAR_2;
    }
    if ( VAR_6 != VAR_0 )
      VAR_6[VAR_5] = 0;

    *VAR_3 = VAR_5;
    return VAR_6;
  }
