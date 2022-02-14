
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_9__ {scalar_t__ eContent; void* bPrefixIndex; } ;
struct TYPE_7__ {TYPE_3__* pConfig; int pIndex; } ;
struct TYPE_8__ {int pStorage; TYPE_1__ p; } ;
typedef TYPE_2__ Fts5FullTable ;
typedef TYPE_3__ Fts5Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_3__*,char const*,int *,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 void* FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
  Fts5FullTable *VAR_4,
  const char *VAR_5,
  sqlite3_value *VAR_6
){
  Fts5Config *VAR_7 = VAR_4->p.pConfig;
  int VAR_8 = VAR_3;
  int VAR_9 = 0;

  if( 0==FUNC_9("delete-all", VAR_5) ){
    if( VAR_7->eContent==VAR_1 ){
      FUNC_0(VAR_4,
          "'delete-all' may only be used with a "
          "contentless or external content fts5 table"
      );
      VAR_8 = VAR_2;
    }else{
      VAR_8 = FUNC_4(VAR_4->pStorage);
    }
  }else if( 0==FUNC_9("rebuild", VAR_5) ){
    if( VAR_7->eContent==VAR_0 ){
      FUNC_0(VAR_4,
          "'rebuild' may not be used with a contentless fts5 table"
      );
      VAR_8 = VAR_2;
    }else{
      VAR_8 = FUNC_8(VAR_4->pStorage);
    }
  }else if( 0==FUNC_9("optimize", VAR_5) ){
    VAR_8 = FUNC_7(VAR_4->pStorage);
  }else if( 0==FUNC_9("merge", VAR_5) ){
    int VAR_10 = FUNC_10(VAR_6);
    VAR_8 = FUNC_6(VAR_4->pStorage, VAR_10);
  }else if( 0==FUNC_9("integrity-check", VAR_5) ){
    VAR_8 = FUNC_5(VAR_4->pStorage);




  }else{
    VAR_8 = FUNC_2(VAR_4->p.pIndex);
    if( VAR_8==VAR_3 ){
      VAR_8 = FUNC_1(VAR_4->p.pConfig, VAR_5, VAR_6, &VAR_9);
    }
    if( VAR_8==VAR_3 ){
      if( VAR_9 ){
        VAR_8 = VAR_2;
      }else{
        VAR_8 = FUNC_3(VAR_4->pStorage, VAR_5, VAR_6, 0);
      }
    }
  }
  return VAR_8;
}
