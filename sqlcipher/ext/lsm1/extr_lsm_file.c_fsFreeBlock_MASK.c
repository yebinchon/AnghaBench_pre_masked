
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int pDb; } ;
struct TYPE_12__ {struct TYPE_12__* pNext; } ;
struct TYPE_11__ {scalar_t__* aiAppend; } ;
typedef TYPE_1__ Snapshot ;
typedef int Segment ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_2__ Level ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
  FileSystem *VAR_2,
  Snapshot *VAR_3,
  Segment *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_1;
  LsmPgno VAR_7;
  LsmPgno VAR_8;
  Level *VAR_9;

  int VAR_10;
  int VAR_11 = 0;
  LsmPgno *VAR_12 = VAR_3->aiAppend;

  VAR_7 = FUNC_0(VAR_2, VAR_5);
  VAR_8 = FUNC_1(VAR_2, VAR_5);



  for(VAR_9=FUNC_4(VAR_3); VAR_9; VAR_9=VAR_9->pNext){
    if( FUNC_2(VAR_9, VAR_4, VAR_7, VAR_8) ){
      return VAR_1;
    }
  }


  for(VAR_10=0; VAR_10<VAR_0; VAR_10++){
    if( VAR_12[VAR_10]<VAR_7 || VAR_12[VAR_10]>VAR_8 ){
      VAR_12[VAR_11++] = VAR_12[VAR_10];
    }
  }
  while( VAR_11<VAR_0 ) VAR_12[VAR_11++] = 0;

  if( VAR_6==VAR_1 ){
    VAR_6 = FUNC_3(VAR_2->pDb, VAR_5);
  }
  return VAR_6;
}
