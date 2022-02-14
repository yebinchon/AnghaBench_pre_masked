
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
typedef int fulltext_statement ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int **) ;

__attribute__((used)) static int FUNC_1(fulltext_vtab *VAR_2,
                                     fulltext_statement VAR_3,
                                     sqlite3_stmt **VAR_4){
  int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  return (VAR_5==VAR_0) ? VAR_1 : VAR_5;
}
