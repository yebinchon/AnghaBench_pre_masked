
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int pCursor ;
struct TYPE_6__ {int nOffset; int zOffset; } ;
struct TYPE_5__ {TYPE_2__ snippet; } ;
typedef TYPE_1__ fulltext_cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  fulltext_cursor *VAR_5;
  if( VAR_3<1 ) return;
  if( FUNC_7(VAR_4[0])!=VAR_0 ||
      FUNC_6(VAR_4[0])!=sizeof(VAR_5) ){
    FUNC_3(VAR_2, "illegal first argument to offsets",-1);
  }else{
    FUNC_0(&VAR_5, FUNC_5(VAR_4[0]), sizeof(VAR_5));
    FUNC_1(VAR_5);
    FUNC_2(&VAR_5->snippet);
    FUNC_4(VAR_2,
                        VAR_5->snippet.zOffset, VAR_5->snippet.nOffset,
                        VAR_1);
  }
}
