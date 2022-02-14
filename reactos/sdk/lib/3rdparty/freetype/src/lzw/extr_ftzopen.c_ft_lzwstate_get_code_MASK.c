
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long num_bits; unsigned long buf_offset; unsigned long buf_size; scalar_t__ free_ent; scalar_t__ free_bits; scalar_t__ max_bits; unsigned long max_free; unsigned long* buf_tab; scalar_t__ buf_clear; } ;
typedef unsigned long FT_UInt ;
typedef TYPE_1__* FT_LzwState ;
typedef int FT_Int32 ;
typedef unsigned long FT_Int ;
typedef unsigned long FT_Byte ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static FT_Int32
  FUNC_2( FT_LzwState VAR_2 )
  {
    FT_UInt VAR_3 = VAR_2->num_bits;
    FT_UInt VAR_4 = VAR_2->buf_offset;
    FT_Byte* VAR_5;
    FT_Int VAR_6;


    if ( VAR_2->buf_clear ||
         VAR_4 >= VAR_2->buf_size ||
         VAR_2->free_ent >= VAR_2->free_bits )
    {
      if ( VAR_2->free_ent >= VAR_2->free_bits )
      {
        VAR_2->num_bits = ++VAR_3;
        if ( VAR_3 > VAR_1 )
          return -1;

        VAR_2->free_bits = VAR_2->num_bits < VAR_2->max_bits
                           ? (FT_UInt)( ( 1UL << VAR_3 ) - 256 )
                           : VAR_2->max_free + 1;
      }

      if ( VAR_2->buf_clear )
      {
        VAR_2->num_bits = VAR_3 = VAR_0;
        VAR_2->free_bits = (FT_UInt)( ( 1UL << VAR_3 ) - 256 );
        VAR_2->buf_clear = 0;
      }

      if ( FUNC_1( VAR_2 ) < 0 )
        return -1;

      VAR_4 = 0;
    }

    VAR_2->buf_offset = VAR_4 + VAR_3;

    VAR_5 = &VAR_2->buf_tab[VAR_4 >> 3];
    VAR_4 &= 7;
    VAR_6 = *VAR_5++ >> VAR_4;
    VAR_4 = 8 - VAR_4;
    VAR_3 -= VAR_4;

    if ( VAR_3 >= 8 )
    {
      VAR_6 |= *VAR_5++ << VAR_4;
      VAR_4 += 8;
      VAR_3 -= 8;
    }
    if ( VAR_3 > 0 )
      VAR_6 |= ( *VAR_5 & FUNC_0( VAR_3 ) ) << VAR_4;

    return VAR_6;
  }
