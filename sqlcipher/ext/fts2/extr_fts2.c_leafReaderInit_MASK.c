
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* pData; int nData; int term; } ;
typedef TYPE_1__ LeafReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (char const*,int*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, int VAR_1,
                           LeafReader *VAR_2){
  int VAR_3, VAR_4;

  FUNC_1( VAR_1>0 );
  FUNC_1( VAR_0[0]=='\0' );

  FUNC_0(VAR_2);


  VAR_4 = FUNC_4(VAR_0+1, &VAR_3);
  FUNC_2(&VAR_2->term, VAR_3);
  FUNC_3(&VAR_2->term, VAR_0+1+VAR_4, VAR_3);


  FUNC_1( 1+VAR_4+VAR_3<VAR_1 );
  VAR_2->pData = VAR_0+1+VAR_4+VAR_3;
  VAR_2->nData = VAR_1-1-VAR_4-VAR_3;
}
