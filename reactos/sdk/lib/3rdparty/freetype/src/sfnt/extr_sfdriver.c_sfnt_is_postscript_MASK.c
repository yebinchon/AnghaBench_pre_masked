
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int
  FUNC_0( int VAR_1 )
  {
    unsigned int VAR_2;


    if ( VAR_1 < 0 || VAR_1 >= 0x80 )
      return 0;

    VAR_2 = (unsigned int)VAR_1;

    return VAR_0[VAR_2 >> 3] & ( 1 << ( VAR_2 & 0x07 ) );
  }
