
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char const*,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2){
  int VAR_3, VAR_4;

  if( VAR_2==0 ) return;
  FUNC_1( VAR_2>0 );
  FUNC_1( VAR_1!=0 );
  FUNC_1( VAR_1+VAR_2>VAR_1 );


  VAR_3 = FUNC_2(VAR_1, &VAR_4);
  FUNC_1( VAR_4==0 );
  FUNC_1( VAR_3>0 );
  FUNC_1( VAR_3<VAR_2 );
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;


  VAR_3 = FUNC_2(VAR_1, &VAR_4);
  FUNC_1( VAR_3>0 );
  FUNC_1( VAR_4>0 );
  FUNC_1( VAR_3+VAR_4>0 );
  FUNC_1( VAR_3+VAR_4<VAR_2 );
  VAR_1 += VAR_3+VAR_4;
  VAR_2 -= VAR_3+VAR_4;


  VAR_3 = FUNC_2(VAR_1, &VAR_4);
  FUNC_1( VAR_3>0 );
  FUNC_1( VAR_4>0 );
  FUNC_1( VAR_3+VAR_4>0 );
  FUNC_1( VAR_3+VAR_4<=VAR_2 );
  FUNC_0(VAR_0, VAR_1+VAR_3, VAR_4, ((void*)0));
  VAR_1 += VAR_3+VAR_4;
  VAR_2 -= VAR_3+VAR_4;


  while( VAR_2!=0 ){
    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    FUNC_1( VAR_3>0 );
    FUNC_1( VAR_4>=0 );
    FUNC_1( VAR_3<VAR_2 );
    VAR_1 += VAR_3;
    VAR_2 -= VAR_3;
    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    FUNC_1( VAR_3>0 );
    FUNC_1( VAR_4>0 );
    FUNC_1( VAR_3+VAR_4>0 );
    FUNC_1( VAR_3+VAR_4<VAR_2 );
    VAR_1 += VAR_3+VAR_4;
    VAR_2 -= VAR_3+VAR_4;

    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    FUNC_1( VAR_3>0 );
    FUNC_1( VAR_4>0 );
    FUNC_1( VAR_3+VAR_4>0 );
    FUNC_1( VAR_3+VAR_4<=VAR_2 );
    FUNC_0(VAR_0, VAR_1+VAR_3, VAR_4, ((void*)0));
    VAR_1 += VAR_3+VAR_4;
    VAR_2 -= VAR_3+VAR_4;
  }
}
