
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int azDirs ;


 scalar_t__ FUNC_0 (int ) ;
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
     "."
  };
  unsigned int VAR_2 = 0;
  struct stat VAR_3;
  const char *VAR_4 = VAR_0;

  if( !VAR_1[0] ) VAR_1[0] = FUNC_1("SQLITE_TMPDIR");
  if( !VAR_1[1] ) VAR_1[1] = FUNC_1("TMPDIR");
  while(1){
    if( VAR_4!=0
     && FUNC_3(VAR_4, &VAR_3)==0
     && FUNC_0(VAR_3.st_mode)
     && FUNC_2(VAR_4, 03)==0
    ){
      return VAR_4;
    }
    if( VAR_2>=sizeof(VAR_1)/sizeof(VAR_1[0]) ) break;
    VAR_4 = VAR_1[VAR_2++];
  }
  return 0;
}
