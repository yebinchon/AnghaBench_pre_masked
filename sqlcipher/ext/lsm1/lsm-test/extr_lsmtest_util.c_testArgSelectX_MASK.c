
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*,int,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(
  void *VAR_0,
  const char *VAR_1,
  int VAR_2,
  const char *VAR_3,
  int *VAR_4
){
  struct Entry { const char *zName; };
  struct Entry *VAR_5;
  int VAR_6 = FUNC_2(VAR_3);

  int VAR_7 = 0;
  int VAR_8 = -1;
  int VAR_9 = 0;

  for(VAR_5=(struct Entry *)VAR_0;
      VAR_5->zName;
      VAR_5=(struct Entry *)&((unsigned char *)VAR_5)[VAR_2]
  ){
    int VAR_10 = FUNC_2(VAR_5->zName);
    if( VAR_6<=VAR_10 && FUNC_1(VAR_5->zName, VAR_3, VAR_6)==0 ){
      VAR_8 = VAR_7;
      if( VAR_10==VAR_6 ){
        VAR_9 = 1;
        break;
      }
      VAR_9++;
    }
    VAR_7++;
  }

  if( VAR_9!=1 ){
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }else{
    *VAR_4 = VAR_8;
  }
  return (VAR_9!=1);
}
