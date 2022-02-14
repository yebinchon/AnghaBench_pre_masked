
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prefix_size; scalar_t__ prefix; int * suffix; int memory; } ;
typedef int FT_UShort ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_LzwState ;
typedef int FT_Error ;
typedef int FT_Byte ;


 int FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int) ;

__attribute__((used)) static int
  FUNC_2( FT_LzwState VAR_0 )
  {
    FT_UInt VAR_1 = VAR_0->prefix_size;
    FT_UInt VAR_2 = VAR_1;
    FT_Memory VAR_3 = VAR_0->memory;
    FT_Error VAR_4;


    if ( VAR_2 == 0 )
      VAR_2 = 512;
    else
      VAR_2 += VAR_2 >> 2;
    if ( FUNC_1( VAR_0->prefix, VAR_1, VAR_2,
                          sizeof ( FT_UShort ) + sizeof ( FT_Byte ) ) )
      return -1;


    VAR_0->suffix = (FT_Byte*)( VAR_0->prefix + VAR_2 );

    FUNC_0( VAR_0->suffix,
                 VAR_0->prefix + VAR_1,
                 VAR_1 * sizeof ( FT_Byte ) );

    VAR_0->prefix_size = VAR_2;
    return 0;
  }
