
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_9__ {int zName; int tnum; int nCol; } ;
typedef TYPE_1__ Table ;
struct TYPE_10__ {int tnum; } ;
typedef int Parse ;
typedef TYPE_2__ Index ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int,int ,int,int ) ;
 int FUNC_7 (int *,int,int,int ,int) ;
 int FUNC_8 (int *,int,int,int ,int,int ) ;
 int FUNC_9 (int *,TYPE_2__*) ;

void FUNC_10(
  Parse *VAR_2,
  int VAR_3,
  int VAR_4,
  Table *VAR_5,
  int VAR_6
){
  Vdbe *VAR_7;
  FUNC_3( !FUNC_1(VAR_5) );
  VAR_7 = FUNC_4(VAR_2);
  FUNC_3( VAR_6==VAR_1 || VAR_6==VAR_0 );
  FUNC_6(VAR_2, VAR_4, VAR_5->tnum,
                   (VAR_6==VAR_1)?1:0, VAR_5->zName);
  if( FUNC_0(VAR_5) ){
    FUNC_8(VAR_7, VAR_6, VAR_3, VAR_5->tnum, VAR_4, VAR_5->nCol);
    FUNC_2((VAR_7, "%s", VAR_5->zName));
  }else{
    Index *VAR_8 = FUNC_5(VAR_5);
    FUNC_3( VAR_8!=0 );
    FUNC_3( VAR_8->tnum==VAR_5->tnum );
    FUNC_7(VAR_7, VAR_6, VAR_3, VAR_8->tnum, VAR_4);
    FUNC_9(VAR_2, VAR_8);
    FUNC_2((VAR_7, "%s", VAR_5->zName));
  }
}
