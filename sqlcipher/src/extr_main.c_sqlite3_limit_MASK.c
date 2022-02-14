
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* aLimit; } ;
typedef TYPE_1__ sqlite3 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int* VAR_26 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(sqlite3 *VAR_27, int VAR_28, int VAR_29){
  int VAR_30;
  FUNC_0( VAR_26[VAR_5]==VAR_17 );
  FUNC_0( VAR_26[VAR_7]==VAR_19 );
  FUNC_0( VAR_26[VAR_1]==VAR_13 );
  FUNC_0( VAR_26[VAR_3]==VAR_15 );
  FUNC_0( VAR_26[VAR_2]==VAR_14);
  FUNC_0( VAR_26[VAR_10]==VAR_22 );
  FUNC_0( VAR_26[VAR_4]==VAR_16 );
  FUNC_0( VAR_26[VAR_0]==VAR_12 );
  FUNC_0( VAR_26[VAR_6]==
                                               VAR_18 );
  FUNC_0( VAR_26[VAR_9]==VAR_21);
  FUNC_0( VAR_26[VAR_8]==VAR_20 );
  FUNC_0( VAR_26[VAR_11]==VAR_23 );
  FUNC_0( VAR_11==(VAR_25-1) );


  if( VAR_28<0 || VAR_28>=VAR_25 ){
    return -1;
  }
  VAR_30 = VAR_27->aLimit[VAR_28];
  if( VAR_29>=0 ){
    if( VAR_29>VAR_26[VAR_28] ){
      VAR_29 = VAR_26[VAR_28];
    }
    VAR_27->aLimit[VAR_28] = VAR_29;
  }
  return VAR_30;
}
