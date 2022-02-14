
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int i64 ;
struct TYPE_3__ {scalar_t__ rc; } ;
typedef TYPE_1__ Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static i64 FUNC_1(
  Error *VAR_1,
  const char *VAR_2
){
  i64 VAR_3 = 0;
  if( VAR_1->rc==VAR_0 ){
    struct stat VAR_4;
    if( FUNC_0(VAR_2, &VAR_4) ){
      VAR_3 = -1;
    }else{
      VAR_3 = VAR_4.st_size;
    }
  }
  return VAR_3;
}
