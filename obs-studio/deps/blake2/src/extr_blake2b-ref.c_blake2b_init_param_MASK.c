
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int outlen; int * h; } ;
typedef TYPE_1__ blake2b_state ;
struct TYPE_7__ {int digest_length; } ;
typedef TYPE_2__ blake2b_param ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*) ;

int FUNC_2( blake2b_state *VAR_0, const blake2b_param *VAR_1 )
{
  const uint8_t *VAR_2 = ( const uint8_t * )( VAR_1 );
  size_t VAR_3;

  FUNC_0( VAR_0 );


  for( VAR_3 = 0; VAR_3 < 8; ++VAR_3 )
    VAR_0->h[VAR_3] ^= FUNC_1( VAR_2 + sizeof( VAR_0->h[VAR_3] ) * VAR_3 );

  VAR_0->outlen = VAR_1->digest_length;
  return 0;
}
