
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int InteriorReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char const*,int,int) ;

__attribute__((used)) static void FUNC_7(const char *VAR_0, int VAR_1,
                                  const char *VAR_2, int VAR_3, int VAR_4,
                                  sqlite_int64 *VAR_5,
                                  sqlite_int64 *VAR_6){
  InteriorReader VAR_7;

  FUNC_0( VAR_1>1 );
  FUNC_0( *VAR_0!='\0' );
  FUNC_4(VAR_0, VAR_1, &VAR_7);


  while( !FUNC_1(&VAR_7) ){
    if( FUNC_6(&VAR_7, VAR_2, VAR_3, 0)>0 ) break;
    FUNC_5(&VAR_7);
  }
  *VAR_5 = FUNC_2(&VAR_7);





  while( !FUNC_1(&VAR_7) ){
    if( FUNC_6(&VAR_7, VAR_2, VAR_3, VAR_4)>0 ) break;
    FUNC_5(&VAR_7);
  }
  *VAR_6 = FUNC_2(&VAR_7);

  FUNC_3(&VAR_7);


  FUNC_0( *VAR_6>=*VAR_5 );
  FUNC_0( VAR_4 || *VAR_5==*VAR_6 );
}
