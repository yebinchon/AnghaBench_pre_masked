
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void sqlite3 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (char const*,void**,int,int *) ;

void *FUNC_2(const char *VAR_4) {
  sqlite3 *VAR_5 = ((void*)0);
  if (FUNC_1(VAR_4, &VAR_5, VAR_3 | VAR_1 |
                                        VAR_2,
                      ((void*)0)) == VAR_0) {
    FUNC_0(VAR_5, "CREATE TABLE IF NOT EXISTS kv(key PRIMARY KEY, val);", 0,
                 0, 0);
  }
  return VAR_5;
}
