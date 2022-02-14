
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static i64 FUNC_2(char *VAR_0){
  int VAR_1 = FUNC_1(VAR_0);
  char VAR_2 = VAR_0[VAR_1-1];
  i64 VAR_3 = 1;

  switch( VAR_2 ){
    case 'g': case 'G':
      VAR_3 = (1<<30);
      break;

    case 'm': case 'M':
      VAR_3 = (1<<20);
      break;

    case 'k': case 'K':
      VAR_3 = (1<<10);
      break;

    default:
      VAR_3 = 1;
  }

  return VAR_3 * (i64)FUNC_0(VAR_0);
}
