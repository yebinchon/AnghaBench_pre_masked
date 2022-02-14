
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* pData; int nData; int term; int iBlockid; } ;
typedef TYPE_1__ InteriorReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,int*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, int VAR_1,
                               InteriorReader *VAR_2){
  int VAR_3, VAR_4;


  FUNC_1( VAR_1>0 );
  FUNC_1( VAR_0[0]!='\0' );

  FUNC_0(VAR_2);


  VAR_3 = FUNC_4(VAR_0+1, &VAR_2->iBlockid);
  FUNC_1( 1+VAR_3<=VAR_1 );
  VAR_2->pData = VAR_0+1+VAR_3;
  VAR_2->nData = VAR_1-(1+VAR_3);





  if( VAR_2->nData==0 ){
    FUNC_2(&VAR_2->term, 0);
  }else{
    VAR_3 = FUNC_5(VAR_2->pData, &VAR_4);
    FUNC_2(&VAR_2->term, VAR_4);
    FUNC_3(&VAR_2->term, VAR_2->pData+VAR_3, VAR_4);
    FUNC_1( VAR_3+VAR_4<=VAR_2->nData );
    VAR_2->pData += VAR_3+VAR_4;
    VAR_2->nData -= VAR_3+VAR_4;
  }
}
