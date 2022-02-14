
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int Fts5ExtensionApi ;
typedef int Fts5Context ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;

__attribute__((used)) static int FUNC_1(
  const Fts5ExtensionApi *VAR_1,
  Fts5Context *VAR_2,
  void *VAR_3
){
  sqlite3_int64 *VAR_4 = (sqlite3_int64*)VAR_3;
  FUNC_0(VAR_1, VAR_2);
  (*VAR_4)++;
  return VAR_0;
}
