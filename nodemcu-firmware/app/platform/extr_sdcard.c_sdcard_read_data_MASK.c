
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int to_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,size_t,void*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( uint8_t *VAR_7, size_t VAR_8 )
{
  to_t VAR_9;


  FUNC_4( &VAR_9, 100 * 1000 );
  while ((VAR_6 = FUNC_1( VAR_5, 8, 0xff)) == 0xff) {
    if (FUNC_5( &VAR_9 )) {
      goto fail;
    }
  }

  if (VAR_6 != VAR_0) {
    VAR_4 = VAR_2;
    goto fail;
  }

  FUNC_0( VAR_5, VAR_8, (void *)VAR_7 );


  FUNC_2( VAR_5, 16, 0xffff, 0, 0, 0, 0, 0 );

  FUNC_3();
  return VAR_3;

  fail:
  FUNC_3();
  return VAR_1;
}
