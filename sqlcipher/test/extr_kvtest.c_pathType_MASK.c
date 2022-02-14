
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct stat {int st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct stat*,int ,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_6){
  struct stat VAR_7;
  int VAR_8;
  if( FUNC_1(VAR_6,VAR_5) ) return VAR_2;
  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  VAR_8 = FUNC_5(VAR_6, &VAR_7);
  if( VAR_8<0 ) return VAR_3;
  if( FUNC_0(VAR_7.st_mode) ){
    char *VAR_9 = FUNC_4("%s/00", VAR_6);
    FUNC_2(&VAR_7, 0, sizeof(VAR_7));
    VAR_8 = FUNC_5(VAR_9, &VAR_7);
    FUNC_3(VAR_9);
    if( VAR_8<0 ) return VAR_1;
    if( FUNC_0(VAR_7.st_mode) ) return VAR_4;
    return VAR_1;
  }
  if( (VAR_7.st_size%512)==0 ) return VAR_0;
  return VAR_3;
}
