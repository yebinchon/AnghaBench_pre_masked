
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int sqlite3 ;
struct TYPE_4__ {int iReadOff; int nBuffer; int* aBuffer; } ;
typedef TYPE_1__ VdbeSorterIter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int,int**) ;

__attribute__((used)) static int FUNC_2(sqlite3 *VAR_1, VdbeSorterIter *VAR_2, u64 *VAR_3){
  int VAR_4;

  VAR_4 = VAR_2->iReadOff % VAR_2->nBuffer;
  if( VAR_4 && (VAR_2->nBuffer-VAR_4)>=9 ){
    VAR_2->iReadOff += FUNC_0(&VAR_2->aBuffer[VAR_4], VAR_3);
  }else{
    u8 VAR_5[16], *VAR_6;
    int VAR_7 = 0, VAR_8;
    do{
      VAR_8 = FUNC_1(VAR_1, VAR_2, 1, &VAR_6);
      if( VAR_8 ) return VAR_8;
      VAR_5[(VAR_7++)&0xf] = VAR_6[0];
    }while( (VAR_6[0]&0x80)!=0 );
    FUNC_0(VAR_5, VAR_3);
  }

  return VAR_0;
}
