
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tz; int tzSet; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (char const*,char*,int*,int*) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, DateTime *VAR_1){
  int VAR_2 = 0;
  int VAR_3, VAR_4;
  int VAR_5;
  while( FUNC_1(*VAR_0) ){ VAR_0++; }
  VAR_1->tz = 0;
  VAR_5 = *VAR_0;
  if( VAR_5=='-' ){
    VAR_2 = -1;
  }else if( VAR_5=='+' ){
    VAR_2 = +1;
  }else if( VAR_5=='Z' || VAR_5=='z' ){
    VAR_0++;
    goto zulu_time;
  }else{
    return VAR_5!=0;
  }
  VAR_0++;
  if( FUNC_0(VAR_0, "20b:20e", &VAR_3, &VAR_4)!=2 ){
    return 1;
  }
  VAR_0 += 5;
  VAR_1->tz = VAR_2*(VAR_4 + VAR_3*60);
zulu_time:
  while( FUNC_1(*VAR_0) ){ VAR_0++; }
  VAR_1->tzSet = 1;
  return *VAR_0!=0;
}
