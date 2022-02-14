
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__* aSnapshot; int pFS; } ;
typedef TYPE_1__ lsm_db ;
typedef int MetaPage ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int*) ;
 int FUNC_3 (int ,int,int,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,int) ;

int FUNC_6(lsm_db *VAR_2, int VAR_3){
  MetaPage *VAR_4 = 0;
  int VAR_5;

  FUNC_0( VAR_3==1 || VAR_3==2 );
  VAR_5 = FUNC_3(VAR_2->pFS, 1, VAR_3, &VAR_4);
  if( VAR_5==VAR_1 ){
    u8 *VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_8 = (int)VAR_2->aSnapshot[VAR_0];
    VAR_6 = FUNC_2(VAR_4, &VAR_7);
    FUNC_5(VAR_6, VAR_2->aSnapshot, VAR_8*sizeof(u32));
    FUNC_1((u32 *)VAR_6, VAR_8);
    VAR_5 = FUNC_4(VAR_4);
  }

  return VAR_5;
}
