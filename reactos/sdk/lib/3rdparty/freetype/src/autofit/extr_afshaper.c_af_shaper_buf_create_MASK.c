
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int memory; } ;
typedef int FT_ULong ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_Face ;
typedef int FT_Error ;


 int FUNC_0 (int *,int) ;

void*
  FUNC_1( FT_Face VAR_0 )
  {
    FT_Error VAR_1;
    FT_Memory VAR_2 = VAR_0->memory;
    FT_ULong* VAR_3;


    FUNC_0( VAR_3, sizeof ( FT_ULong ) );

    return (void*)VAR_3;
  }
