
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBase ;
typedef int va_list ;
typedef int StrAccum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,char const*,int ) ;

char *FUNC_4(const char *VAR_3, va_list VAR_4){
  char *VAR_5;
  char VAR_6[VAR_2];
  StrAccum VAR_7;
  if( FUNC_2() ) return 0;

  FUNC_1(&VAR_7, 0, VAR_6, sizeof(VAR_6), VAR_0);
  FUNC_3(&VAR_7, VAR_3, VAR_4);
  VAR_5 = FUNC_0(&VAR_7);
  return VAR_5;
}
