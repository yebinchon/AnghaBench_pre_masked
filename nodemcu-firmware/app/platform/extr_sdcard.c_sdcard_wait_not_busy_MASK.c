
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int to_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( uint32_t VAR_3 )
{
  to_t VAR_4;

  FUNC_1( &VAR_4, VAR_3 );
  while (FUNC_0( VAR_2, 8, 0xff ) != 0xff) {
    if (FUNC_2( &VAR_4 )) {
      goto fail;
    }
  }
  return VAR_1;

  fail:
  return VAR_0;
}
