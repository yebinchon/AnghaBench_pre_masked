
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_3__ {int base; int * db; } ;
typedef TYPE_1__ FstreeVtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5, const char *const*VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  FstreeVtab *VAR_9;

  if( VAR_5!=3 ){
    *VAR_8 = FUNC_3("wrong number of arguments");
    return VAR_0;
  }

  VAR_9 = (FstreeVtab *)FUNC_2(sizeof(FstreeVtab));
  if( !VAR_9 ) return VAR_1;
  FUNC_0(VAR_9, 0, sizeof(FstreeVtab));
  VAR_9->db = VAR_3;

  *VAR_7 = &VAR_9->base;
  FUNC_1(VAR_3, "CREATE TABLE xyz(path, size, data);");

  return VAR_2;
}
