
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct stat {int st_mode; int st_gid; int st_uid; } ;
typedef int mode_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_1(
  const char *VAR_2,
  mode_t *VAR_3,
  uid_t *VAR_4,
  gid_t *VAR_5
){
  struct stat VAR_6;
  int VAR_7 = VAR_1;
  if( 0==FUNC_0(VAR_2, &VAR_6) ){
    *VAR_3 = VAR_6.st_mode & 0777;
    *VAR_4 = VAR_6.st_uid;
    *VAR_5 = VAR_6.st_gid;
  }else{
    VAR_7 = VAR_0;
  }
  return VAR_7;
}
