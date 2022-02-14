
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int sqlite3_uint64 ;


 int FUNC_0 (struct timeval*,int ) ;

__attribute__((used)) static sqlite3_uint64 FUNC_1(){
  struct timeval VAR_0;
  FUNC_0(&VAR_0, 0);
  return VAR_0.tv_usec + (sqlite3_uint64)VAR_0.tv_sec * 1000000;
}
