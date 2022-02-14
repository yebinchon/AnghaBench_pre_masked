
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double time_t ;
typedef int sqlite3_vfs ;


 int VAR_0 ;
 double FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vfs *VAR_1, double *VAR_2){
  time_t VAR_3 = FUNC_0(0);
  *VAR_2 = VAR_3/86400.0 + 2440587.5;
  return VAR_0;
}
