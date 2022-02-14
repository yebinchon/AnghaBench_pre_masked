
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_file ;
typedef int quotaConn ;



__attribute__((used)) static sqlite3_file *FUNC_0(sqlite3_file *VAR_0){
  quotaConn *VAR_1 = (quotaConn*)VAR_0;
  return (sqlite3_file*)&VAR_1[1];
}
