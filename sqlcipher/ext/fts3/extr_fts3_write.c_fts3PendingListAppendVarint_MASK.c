
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_7__ {int nSpace; char* aData; int nData; } ;
typedef TYPE_1__ PendingList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(
  PendingList **VAR_3,
  sqlite3_int64 VAR_4
){
  PendingList *VAR_5 = *VAR_3;


  if( !VAR_5 ){
    VAR_5 = FUNC_2(sizeof(*VAR_5) + 100);
    if( !VAR_5 ){
      return VAR_1;
    }
    VAR_5->nSpace = 100;
    VAR_5->aData = (char *)&VAR_5[1];
    VAR_5->nData = 0;
  }
  else if( VAR_5->nData+VAR_0+1>VAR_5->nSpace ){
    int VAR_6 = VAR_5->nSpace * 2;
    VAR_5 = FUNC_3(VAR_5, sizeof(*VAR_5) + VAR_6);
    if( !VAR_5 ){
      FUNC_1(*VAR_3);
      *VAR_3 = 0;
      return VAR_1;
    }
    VAR_5->nSpace = VAR_6;
    VAR_5->aData = (char *)&VAR_5[1];
  }


  VAR_5->nData += FUNC_0(&VAR_5->aData[VAR_5->nData], VAR_4);
  VAR_5->aData[VAR_5->nData] = '\0';
  *VAR_3 = VAR_5;
  return VAR_2;
}
