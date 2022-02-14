
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int sqlite3_vfs ;
typedef int sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct timeval*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static int FUNC_4(sqlite3_vfs *VAR_3, sqlite3_int64 *VAR_4){
  static const sqlite3_int64 VAR_5 = 24405875*(sqlite3_int64)8640000;
  int VAR_6 = VAR_1;
  struct timeval VAR_7;
  (void)FUNC_2(&VAR_7, 0);
  *VAR_4 = VAR_5 + 1000*(sqlite3_int64)VAR_7.tv_sec + VAR_7.tv_usec/1000;







  FUNC_0(VAR_3);
  return VAR_6;
}
