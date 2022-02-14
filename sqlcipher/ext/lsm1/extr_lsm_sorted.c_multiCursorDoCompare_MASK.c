
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* aTree; int nTree; } ;
typedef TYPE_1__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int*,void**,int*) ;
 int FUNC_2 (TYPE_1__*,int,void*,int,int,void*,int) ;

__attribute__((used)) static void FUNC_3(MultiCursor *VAR_2, int VAR_3, int VAR_4){
  int VAR_5;
  int VAR_6;
  int VAR_7;
  void *VAR_8; int VAR_9; int VAR_10;
  void *VAR_11; int VAR_12; int VAR_13;
  const int VAR_14 = (VAR_4 ? -1 : 1);

  FUNC_0( VAR_2->aTree && VAR_3<VAR_2->nTree );
  if( VAR_3>=(VAR_2->nTree/2) ){
    VAR_5 = (VAR_3 - VAR_2->nTree/2) * 2;
    VAR_6 = VAR_5 + 1;
  }else{
    VAR_5 = VAR_2->aTree[VAR_3*2];
    VAR_6 = VAR_2->aTree[VAR_3*2+1];
  }

  FUNC_1(VAR_2, VAR_5, &VAR_10, &VAR_8, &VAR_9);
  FUNC_1(VAR_2, VAR_6, &VAR_13, &VAR_11, &VAR_12);

  if( VAR_8==0 ){
    VAR_7 = VAR_6;
  }else if( VAR_11==0 ){
    VAR_7 = VAR_5;
  }else{
    int VAR_15;


    VAR_15 = FUNC_2(VAR_2,
        VAR_10, VAR_8, VAR_9, VAR_13, VAR_11, VAR_12
    );

    VAR_15 = VAR_15 * VAR_14;
    if( VAR_15==0 ){




      int VAR_16 = (VAR_10 & (VAR_0|VAR_1))==0;
      int VAR_17 = (VAR_13 & (VAR_0|VAR_1))==0;
      VAR_7 = (VAR_16 > VAR_17) ? VAR_6 : VAR_5;
    }else if( VAR_15<0 ){
      VAR_7 = VAR_5;
    }else{
      VAR_7 = VAR_6;
    }
  }

  VAR_2->aTree[VAR_3] = VAR_7;
}
