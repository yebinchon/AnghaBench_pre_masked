
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(zval *VAR_2, zval *VAR_3, zval *VAR_4)
{
 zval VAR_5, VAR_6;
 zval *VAR_7 = ((void*)0);
 zval *VAR_8 = ((void*)0);

 if( FUNC_1(VAR_3) == VAR_0 )
 {
  VAR_7 = FUNC_2( VAR_3, &VAR_5 );
  VAR_3 = VAR_7;
 }

 if( FUNC_1(VAR_4) == VAR_0 )
 {
  VAR_8 = FUNC_2( VAR_4, &VAR_6 );
  VAR_4 = VAR_8;
 }

 FUNC_0(VAR_2, FUNC_3(VAR_3, VAR_4));

 if( VAR_7 )
  FUNC_4( VAR_7 );
 if( VAR_8 )
  FUNC_4( VAR_8 );

 return VAR_1;
}
