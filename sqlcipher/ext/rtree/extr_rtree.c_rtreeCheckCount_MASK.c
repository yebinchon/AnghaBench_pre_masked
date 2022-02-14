
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {scalar_t__ rc; int zTab; int zDb; } ;
typedef TYPE_1__ RtreeCheck ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char const*,scalar_t__,scalar_t__) ;
 int * FUNC_1 (TYPE_1__*,char*,int ,int ,char const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RtreeCheck *VAR_2, const char *VAR_3, i64 VAR_4){
  if( VAR_2->rc==VAR_0 ){
    sqlite3_stmt *VAR_5;
    VAR_5 = FUNC_1(VAR_2, "SELECT count(*) FROM %Q.'%q%s'",
        VAR_2->zDb, VAR_2->zTab, VAR_3
    );
    if( VAR_5 ){
      if( FUNC_4(VAR_5)==VAR_1 ){
        i64 VAR_6 = FUNC_2(VAR_5, 0);
        if( VAR_6!=VAR_4 ){
          FUNC_0(VAR_2, "Wrong number of entries in %%%s table"
              " - expected %lld, actual %lld" , VAR_3, VAR_4, VAR_6
          );
        }
      }
      VAR_2->rc = FUNC_3(VAR_5);
    }
  }
}
