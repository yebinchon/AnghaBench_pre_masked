
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {int nSegment; int ** apSegment; } ;
typedef int Fts3SegReader ;
typedef TYPE_1__ Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int) ;

__attribute__((used)) static int FUNC_2(
  Fts3MultiSegReader *VAR_2,
  Fts3SegReader *VAR_3
){
  if( (VAR_2->nSegment%16)==0 ){
    Fts3SegReader **VAR_4;
    sqlite3_int64 VAR_5 = (VAR_2->nSegment + 16)*sizeof(Fts3SegReader*);
    VAR_4 = (Fts3SegReader **)FUNC_1(VAR_2->apSegment, VAR_5);
    if( !VAR_4 ){
      FUNC_0(VAR_3);
      return VAR_0;
    }
    VAR_2->apSegment = VAR_4;
  }
  VAR_2->apSegment[VAR_2->nSegment++] = VAR_3;
  return VAR_1;
}
