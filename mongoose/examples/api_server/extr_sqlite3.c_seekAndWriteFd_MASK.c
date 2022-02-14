
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,void const*,int,int) ;
 int FUNC_5 (int,void const*,int,int) ;
 int FUNC_6 (int,void const*,int) ;

__attribute__((used)) static int FUNC_7(
  int VAR_6,
  i64 VAR_7,
  const void *VAR_8,
  int VAR_9,
  int *VAR_10
){
  int VAR_11 = 0;

  FUNC_2( VAR_9==(VAR_9&0x1ffff) );
  VAR_9 &= 0x1ffff;
  VAR_4;






  do{
    i64 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_1);
    FUNC_1( VAR_12-- );

    if( VAR_12!=VAR_7 ){
      if( VAR_10 ) *VAR_10 = (VAR_12==-1 ? VAR_5 : 0);
      return -1;
    }
    VAR_11 = FUNC_6(VAR_6, VAR_8, VAR_9);
  }while( VAR_11<0 && VAR_5==VAR_0 );


  VAR_3;
  FUNC_0(("WRITE   %-3d %5d %7lld %llu\n", VAR_6, VAR_11, VAR_7, VAR_2));

  if( VAR_11<0 && VAR_10 ) *VAR_10 = VAR_5;
  return VAR_11;
}
