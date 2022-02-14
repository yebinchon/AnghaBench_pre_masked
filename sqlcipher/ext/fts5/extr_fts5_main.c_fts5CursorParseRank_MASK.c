
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_11__ {scalar_t__ zRankArgs; scalar_t__ zRank; } ;
struct TYPE_9__ {TYPE_1__* pVtab; } ;
struct TYPE_10__ {char* zRank; char* zRankArgs; TYPE_2__ base; } ;
struct TYPE_8__ {int zErrMsg; } ;
typedef TYPE_3__ Fts5Cursor ;
typedef TYPE_4__ Fts5Config ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char**,char**) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  Fts5Config *VAR_5,
  Fts5Cursor *VAR_6,
  sqlite3_value *VAR_7
){
  int VAR_8 = VAR_4;
  if( VAR_7 ){
    const char *VAR_9 = (const char*)FUNC_3(VAR_7);
    char *VAR_10 = 0;
    char *VAR_11 = 0;

    if( VAR_9==0 ){
      if( FUNC_4(VAR_7)==VAR_3 ) VAR_8 = VAR_2;
    }else{
      VAR_8 = FUNC_1(VAR_9, &VAR_10, &VAR_11);
    }
    if( VAR_8==VAR_4 ){
      VAR_6->zRank = VAR_10;
      VAR_6->zRankArgs = VAR_11;
      FUNC_0(VAR_6, VAR_0);
    }else if( VAR_8==VAR_2 ){
      VAR_6->base.pVtab->zErrMsg = FUNC_2(
          "parse error in rank function: %s", VAR_9
      );
    }
  }else{
    if( VAR_5->zRank ){
      VAR_6->zRank = (char*)VAR_5->zRank;
      VAR_6->zRankArgs = (char*)VAR_5->zRankArgs;
    }else{
      VAR_6->zRank = (char*)VAR_1;
      VAR_6->zRankArgs = 0;
    }
  }
  return VAR_8;
}
