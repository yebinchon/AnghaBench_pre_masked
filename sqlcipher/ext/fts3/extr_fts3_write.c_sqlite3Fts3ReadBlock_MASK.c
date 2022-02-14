
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {scalar_t__ zSegmentsTbl; scalar_t__ pSegments; int zDb; int db; int zName; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int ,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,char*,int,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char*,int ) ;

int FUNC_9(
  Fts3Table *VAR_5,
  sqlite3_int64 VAR_6,
  char **VAR_7,
  int *VAR_8,
  int *VAR_9
){
  int VAR_10;


  FUNC_0( VAR_8 );

  if( VAR_5->pSegments ){
    VAR_10 = FUNC_5(VAR_5->pSegments, VAR_6);
  }else{
    if( 0==VAR_5->zSegmentsTbl ){
      VAR_5->zSegmentsTbl = FUNC_8("%s_segments", VAR_5->zName);
      if( 0==VAR_5->zSegmentsTbl ) return VAR_3;
    }
    VAR_10 = FUNC_3(
       VAR_5->db, VAR_5->zDb, VAR_5->zSegmentsTbl, "block", VAR_6, 0, &VAR_5->pSegments
    );
  }

  if( VAR_10==VAR_4 ){
    int VAR_11 = FUNC_2(VAR_5->pSegments);
    *VAR_8 = VAR_11;
    if( VAR_7 ){
      char *VAR_12 = FUNC_7(VAR_11 + VAR_2);
      if( !VAR_12 ){
        VAR_10 = VAR_3;
      }else{
        if( VAR_9 && VAR_11>(VAR_1) ){
          VAR_11 = VAR_0;
          *VAR_9 = VAR_11;
        }
        VAR_10 = FUNC_4(VAR_5->pSegments, VAR_12, VAR_11, 0);
        FUNC_1(&VAR_12[VAR_11], 0, VAR_2);
        if( VAR_10!=VAR_4 ){
          FUNC_6(VAR_12);
          VAR_12 = 0;
        }
      }
      *VAR_7 = VAR_12;
    }
  }

  return VAR_10;
}
