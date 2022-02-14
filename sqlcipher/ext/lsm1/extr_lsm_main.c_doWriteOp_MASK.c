
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nTransOpen; int nTreeLimit; scalar_t__ bAutowork; int pFS; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,void*,int,void*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,void*,int,void*,int) ;
 int FUNC_6 (TYPE_1__*,void*,int,void*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(
  lsm_db *VAR_5,
  int VAR_6,
  const void *VAR_7, int VAR_8,
  const void *VAR_9, int VAR_10
){
  int VAR_11 = VAR_3;
  int VAR_12 = 0;

  if( VAR_5->nTransOpen==0 ){
    VAR_12 = 1;
    VAR_11 = FUNC_8(VAR_5, 1);
  }

  if( VAR_11==VAR_3 ){
    int VAR_13 = (VAR_6 ? VAR_2 : (VAR_10>=0?VAR_4:VAR_1));
    VAR_11 = FUNC_2(VAR_5, VAR_13, (void *)VAR_7, VAR_8, (void *)VAR_9, VAR_10);
  }

  FUNC_4(VAR_5);

  if( VAR_11==VAR_3 ){
    int VAR_14 = FUNC_1(VAR_5->pFS);
    int VAR_15 = VAR_0 * VAR_14;
    int VAR_16;
    int VAR_17;
    int VAR_18;

    if( VAR_15>VAR_5->nTreeLimit ){
      VAR_15 = FUNC_0(VAR_5->nTreeLimit, VAR_14);
    }

    VAR_16 = FUNC_7(VAR_5);
    if( VAR_6 ){
      VAR_11 = FUNC_5(VAR_5, (void *)VAR_7, VAR_8, (void *)VAR_9, VAR_10);
    }else{
      VAR_11 = FUNC_6(VAR_5, (void *)VAR_7, VAR_8, (void *)VAR_9, VAR_10);
    }

    VAR_17 = FUNC_7(VAR_5);
    VAR_18 = (VAR_17/VAR_15) - (VAR_16/VAR_15);
    if( VAR_11==VAR_3 && VAR_5->bAutowork && VAR_18!=0 ){
      VAR_11 = FUNC_3(VAR_5, VAR_18 * VAR_0);
    }
  }



  if( VAR_12 ){
    if( VAR_11==VAR_3 ){
      VAR_11 = FUNC_9(VAR_5, 0);
    }else{
      FUNC_10(VAR_5, 0);
    }
  }

  return VAR_11;
}
