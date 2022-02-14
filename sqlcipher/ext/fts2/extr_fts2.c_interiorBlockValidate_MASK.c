
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {char* pData; int nData; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ InteriorBlock ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static void FUNC_3(InteriorBlock *VAR_0){
  const char *VAR_1 = VAR_0->data.pData;
  int VAR_2 = VAR_0->data.nData;
  int VAR_3, VAR_4;
  sqlite_int64 VAR_5;

  FUNC_0( VAR_2>0 );
  FUNC_0( VAR_1!=0 );
  FUNC_0( VAR_1+VAR_2>VAR_1 );


  VAR_3 = FUNC_2(VAR_1, &VAR_4);
  FUNC_0( VAR_3>0 );
  FUNC_0( VAR_4>0 );
  FUNC_0( VAR_3<VAR_2 );
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;


  VAR_3 = FUNC_1(VAR_1, &VAR_5);
  FUNC_0( VAR_3>0 );
  FUNC_0( VAR_3<=VAR_2 );
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;


  if( VAR_2!=0 ){

    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    FUNC_0( VAR_3>0 );
    FUNC_0( VAR_4>0 );
    FUNC_0( VAR_3+VAR_4>0);
    FUNC_0( VAR_3+VAR_4<=VAR_2 );
    VAR_1 += VAR_3+VAR_4;
    VAR_2 -= VAR_3+VAR_4;


    while( VAR_2!=0 ){

      VAR_3 = FUNC_2(VAR_1, &VAR_4);
      FUNC_0( VAR_3>0 );
      FUNC_0( VAR_4>=0 );
      FUNC_0( VAR_3<VAR_2 );
      VAR_1 += VAR_3;
      VAR_2 -= VAR_3;


      VAR_3 = FUNC_2(VAR_1, &VAR_4);
      FUNC_0( VAR_3>0 );
      FUNC_0( VAR_4>0 );
      FUNC_0( VAR_3+VAR_4>0);
      FUNC_0( VAR_3+VAR_4<=VAR_2 );
      VAR_1 += VAR_3+VAR_4;
      VAR_2 -= VAR_3+VAR_4;
    }
  }
}
