
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct stat {int st_size; int st_mode; } ;
typedef int sqlite3_int64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stat*,int ,int) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static sqlite3_int64 FUNC_3(const char *VAR_0){
  struct stat VAR_1;
  int VAR_2;
  FUNC_1(&VAR_1, 0, sizeof(VAR_1));
  VAR_2 = FUNC_2(VAR_0, &VAR_1);
  if( VAR_2<0 ) return -1;
  if( !FUNC_0(VAR_1.st_mode) ) return -1;
  return VAR_1.st_size;
}
