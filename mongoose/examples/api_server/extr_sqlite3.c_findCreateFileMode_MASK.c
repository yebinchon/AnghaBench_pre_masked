
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_gid; scalar_t__ st_uid; } ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
  const char *VAR_6,
  int VAR_7,
  mode_t *VAR_8,
  uid_t *VAR_9,
  gid_t *VAR_10
){
  int VAR_11 = VAR_2;
  *VAR_8 = 0;
  *VAR_9 = 0;
  *VAR_10 = 0;
  if( VAR_7 & (VAR_5|VAR_4) ){
    char VAR_12[VAR_0+1];
    int VAR_13;
    struct stat VAR_14;
    VAR_13 = FUNC_4(VAR_6) - 1;




    while( VAR_6[VAR_13]!='-' ){
      FUNC_0( VAR_13>0 );
      FUNC_0( VAR_6[VAR_13]!='\n' );
      VAR_13--;
    }

    FUNC_1(VAR_12, VAR_6, VAR_13);
    VAR_12[VAR_13] = '\0';

    if( 0==FUNC_2(VAR_12, &VAR_14) ){
      *VAR_8 = VAR_14.st_mode & 0777;
      *VAR_9 = VAR_14.st_uid;
      *VAR_10 = VAR_14.st_gid;
    }else{
      VAR_11 = VAR_1;
    }
  }else if( VAR_7 & VAR_3 ){
    *VAR_8 = 0600;
  }
  return VAR_11;
}
