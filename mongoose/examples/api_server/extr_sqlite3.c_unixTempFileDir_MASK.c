
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int azDirs ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 char* VAR_0 ;

__attribute__((used)) static const char *FUNC_4(void){
  static const char *VAR_1[] = {
     0,
     0,
     "/var/tmp",
     "/usr/tmp",
     "/tmp",
     0
  };
  unsigned int VAR_2;
  struct stat VAR_3;
  const char *VAR_4 = 0;

  VAR_1[0] = VAR_0;
  if( !VAR_1[1] ) VAR_1[1] = FUNC_1("TMPDIR");
  for(VAR_2=0; VAR_2<sizeof(VAR_1)/sizeof(VAR_1[0]); VAR_4=VAR_1[VAR_2++]){
    if( VAR_4==0 ) continue;
    if( FUNC_3(VAR_4, &VAR_3) ) continue;
    if( !FUNC_0(VAR_3.st_mode) ) continue;
    if( FUNC_2(VAR_4, 07) ) continue;
    break;
  }
  return VAR_4;
}
