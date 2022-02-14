
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {char* zDb; int zTab; } ;
typedef TYPE_1__ UnionSrc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,char*,int ,char*,char const**,int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_2,
  UnionSrc *VAR_3,
  char **VAR_4
){
  int VAR_5 = 0;
  const char *VAR_6 = 0;
  int VAR_7;

  FUNC_3(
      VAR_2, VAR_3->zDb, VAR_3->zTab, "_rowid_", &VAR_6, 0, 0, &VAR_5, 0
  );
  VAR_7 = FUNC_0(VAR_2);
  if( VAR_7==VAR_0
   || (VAR_7==VAR_1 && (!VAR_5 || FUNC_2("integer", VAR_6)))
  ){
    VAR_7 = VAR_0;
    *VAR_4 = FUNC_1("no such rowid table: %s%s%s",
        (VAR_3->zDb ? VAR_3->zDb : ""),
        (VAR_3->zDb ? "." : ""),
        VAR_3->zTab
    );
  }
  return VAR_7;
}
