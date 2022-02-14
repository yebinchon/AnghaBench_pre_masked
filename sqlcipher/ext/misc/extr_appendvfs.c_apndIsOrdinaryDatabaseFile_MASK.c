
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zHdr ;
typedef int sqlite3_int64 ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_5__ {int (* xRead ) (TYPE_2__*,char*,int,int ) ;} ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_2__*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_int64 VAR_0, sqlite3_file *VAR_1){
  int VAR_2;
  char VAR_3[16];
  static const char VAR_4[] = "SQLite format 3";
  if( VAR_0<512 ) return 0;
  VAR_2 = VAR_1->pMethods->xRead(VAR_1, VAR_3, sizeof(VAR_3), 0);
  if( VAR_2 ) return 0;
  return FUNC_0(VAR_3, VAR_4, sizeof(VAR_3))==0;
}
