
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_16__ {int iDepth; } ;
struct TYPE_15__ {int iRowid; } ;
typedef int RtreeNode ;
typedef scalar_t__ RtreeDValue ;
typedef TYPE_1__ RtreeCell ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int,int *,int **) ;
 int FUNC_4 (TYPE_2__*,int *,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(
  Rtree *VAR_2,
  RtreeCell *VAR_3,
  int VAR_4,
  RtreeNode **VAR_5
){
  int VAR_6;
  int VAR_7;
  RtreeNode *VAR_8 = 0;
  VAR_6 = FUNC_3(VAR_2, 1, 0, &VAR_8);

  for(VAR_7=0; VAR_6==VAR_1 && VAR_7<(VAR_2->iDepth-VAR_4); VAR_7++){
    int VAR_9;
    sqlite3_int64 VAR_10 = 0;

    RtreeDValue VAR_11 = VAR_0;
    RtreeDValue VAR_12 = VAR_0;

    int VAR_13 = FUNC_0(VAR_8);
    RtreeCell VAR_14;
    RtreeNode *VAR_15;

    RtreeCell *VAR_16 = 0;





    for(VAR_9=0; VAR_9<VAR_13; VAR_9++){
      int VAR_17 = 0;
      RtreeDValue VAR_18;
      RtreeDValue VAR_19;
      FUNC_4(VAR_2, VAR_8, VAR_9, &VAR_14);
      VAR_18 = FUNC_2(VAR_2, &VAR_14, VAR_3);
      VAR_19 = FUNC_1(VAR_2, &VAR_14);
      if( VAR_9==0||VAR_18<VAR_11||(VAR_18==VAR_11 && VAR_19<VAR_12) ){
        VAR_17 = 1;
      }
      if( VAR_17 ){
        VAR_11 = VAR_18;
        VAR_12 = VAR_19;
        VAR_10 = VAR_14.iRowid;
      }
    }

    FUNC_6(VAR_16);
    VAR_6 = FUNC_3(VAR_2, VAR_10, VAR_8, &VAR_15);
    FUNC_5(VAR_2, VAR_8);
    VAR_8 = VAR_15;
  }

  *VAR_5 = VAR_8;
  return VAR_6;
}
