
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

zval* FUNC_5( zval* VAR_1, zval *VAR_2)
{
 zval VAR_3;
 zval* VAR_4 = ((void*)0);

 if( FUNC_1(VAR_1) != VAR_0 )
 {

  int VAR_5 = FUNC_3(VAR_1, &VAR_3);

  if( VAR_5 )
  {
   VAR_4 = FUNC_2( &VAR_3, VAR_2 );
   FUNC_4( &VAR_3 );
  }
  else
  {
   VAR_4 = FUNC_2( VAR_1, VAR_2 );
  }
 }
 else
 {
  FUNC_0( VAR_1 );
 }

 return VAR_4;
}
