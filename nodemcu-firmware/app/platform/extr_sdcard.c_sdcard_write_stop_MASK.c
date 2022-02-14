
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( void )
{
  FUNC_2();

  if (! FUNC_3( 100 * 1000 )) {
    goto fail;
  }
  FUNC_0( VAR_5, 8, VAR_2, 0, 0, 0, 0, 0 );
  if (! FUNC_3( 100 * 1000 )) {
    goto fail;
  }

  FUNC_1();
  return VAR_3;

  fail:
  VAR_4 = VAR_1;
  FUNC_1();
  return VAR_0;
}
