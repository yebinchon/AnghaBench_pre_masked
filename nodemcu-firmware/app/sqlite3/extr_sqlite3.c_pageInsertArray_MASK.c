
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {scalar_t__** apCell; } ;
struct TYPE_7__ {scalar_t__ hdrOffset; scalar_t__* aData; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(
  MemPage *VAR_1,
  u8 *VAR_2,
  u8 **VAR_3,
  u8 *VAR_4,
  int VAR_5,
  int VAR_6,
  CellArray *VAR_7
){
  int VAR_8;
  u8 *VAR_9 = VAR_1->aData;
  u8 *VAR_10 = *VAR_3;
  int VAR_11 = VAR_5 + VAR_6;
  FUNC_0( VAR_0 || VAR_1->hdrOffset==0 );
  for(VAR_8=VAR_5; VAR_8<VAR_11; VAR_8++){
    int VAR_12, VAR_13;
    u8 *VAR_14;
    VAR_12 = FUNC_1(VAR_7, VAR_8);
    if( (VAR_9[1]==0 && VAR_9[2]==0) || (VAR_14 = FUNC_3(VAR_1,VAR_12,&VAR_13))==0 ){
      if( (VAR_10 - VAR_2)<VAR_12 ) return 1;
      VAR_10 -= VAR_12;
      VAR_14 = VAR_10;
    }



    FUNC_0( (VAR_14+VAR_12)<=VAR_7->apCell[VAR_8]
         || VAR_14>=(VAR_7->apCell[VAR_8]+VAR_12)
         || VAR_0 );
    FUNC_2(VAR_14, VAR_7->apCell[VAR_8], VAR_12);
    FUNC_4(VAR_4, (VAR_14 - VAR_9));
    VAR_4 += 2;
  }
  *VAR_3 = VAR_10;
  return 0;
}
