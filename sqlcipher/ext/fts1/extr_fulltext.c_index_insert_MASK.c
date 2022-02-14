
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
struct TYPE_5__ {int pTokenizer; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int HashElem ;
typedef int Hash ;
typedef int DocList ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ,char const*,int ) ;
 int FUNC_7 (TYPE_1__*,int *,char const*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(fulltext_vtab *VAR_1,
                        sqlite3_value *VAR_2, const char *VAR_3,
                        sqlite_int64 *VAR_4){
  Hash VAR_5;
  HashElem *VAR_6;

  int VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3, -1);
  if( VAR_7!=VAR_0 ) return VAR_7;
  *VAR_4 = FUNC_10(VAR_1->db);

  if( !VAR_3 ) return VAR_0;

  VAR_7 = FUNC_6(&VAR_5, VAR_1->pTokenizer, VAR_3, *VAR_4);
  if( VAR_7!=VAR_0 ) return VAR_7;

  for(VAR_6=FUNC_2(&VAR_5); VAR_6; VAR_6=FUNC_5(VAR_6)){
    DocList *VAR_8 = FUNC_1(VAR_6);
    VAR_7 = FUNC_9(VAR_1, FUNC_3(VAR_6), FUNC_4(VAR_6), *VAR_4, VAR_8);
    if( VAR_7!=VAR_0 ) break;
  }

  for(VAR_6=FUNC_2(&VAR_5); VAR_6; VAR_6=FUNC_5(VAR_6)){
    DocList *VAR_9 = FUNC_1(VAR_6);
    FUNC_8(VAR_9);
  }
  FUNC_0(&VAR_5);
  return VAR_7;
}
