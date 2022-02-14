
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_cursor ;
typedef int TestDb ;
struct TYPE_2__ {int * pCsr; int db; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const**,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,void*,int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,void const**,int*) ;
 int FUNC_11 (void*,void const*,int ) ;

__attribute__((used)) static int FUNC_12(
  TestDb *VAR_3,
  void *VAR_4,
  int VAR_5,
  void *VAR_6, int VAR_7,
  void *VAR_8, int VAR_9,
  void (*VAR_10)(void *, void *, int , void *, int)
){
  LsmDb *VAR_11 = (LsmDb *)VAR_3;
  lsm_cursor *VAR_12;
  lsm_cursor *VAR_13 = 0;
  int VAR_14;

  if( VAR_11->pCsr==0 ){
    VAR_14 = FUNC_6(VAR_11->db, &VAR_12);
    if( VAR_14!=VAR_0 ) return VAR_14;
  }else{
    VAR_14 = VAR_0;
    VAR_12 = VAR_11->pCsr;
  }





  if( VAR_8 && VAR_6 ){
    if( VAR_5 ){
      VAR_14 = FUNC_8(VAR_12, VAR_6, VAR_7, VAR_2);
    }else{
      VAR_14 = FUNC_8(VAR_12, VAR_8, VAR_9, VAR_1);
    }
  }

  if( VAR_5 ){
    if( VAR_8 ){
      VAR_14 = FUNC_8(VAR_12, VAR_8, VAR_9, VAR_2);
    }else{
      VAR_14 = FUNC_4(VAR_12);
    }
  }else{
    if( VAR_6 ){
      VAR_14 = FUNC_8(VAR_12, VAR_6, VAR_7, VAR_1);
    }else{
      VAR_14 = FUNC_2(VAR_12);
    }
  }

  while( VAR_14==VAR_0 && FUNC_9(VAR_12) ){
    const void *VAR_15; int VAR_16;
    const void *VAR_17; int VAR_18;
    int VAR_19;

    FUNC_3(VAR_12, &VAR_15, &VAR_16);
    FUNC_10(VAR_12, &VAR_17, &VAR_18);

    if( VAR_5 && VAR_6 ){
      VAR_19 = FUNC_11(VAR_6, VAR_15, FUNC_0(VAR_16, VAR_7));
      if( VAR_19>0 || (VAR_19==0 && VAR_7>VAR_16) ) break;
    }else if( VAR_5==0 && VAR_8 ){
      VAR_19 = FUNC_11(VAR_8, VAR_15, FUNC_0(VAR_16, VAR_9));
      if( VAR_19<0 || (VAR_19==0 && VAR_9<VAR_16) ) break;
    }

    VAR_10(VAR_4, (void *)VAR_15, VAR_16, (void *)VAR_17, VAR_18);

    if( VAR_5 ){
      VAR_14 = FUNC_7(VAR_12);
    }else{
      VAR_14 = FUNC_5(VAR_12);
    }
  }

  if( VAR_11->pCsr==0 ){
    FUNC_1(VAR_12);
  }
  return VAR_14;
}
