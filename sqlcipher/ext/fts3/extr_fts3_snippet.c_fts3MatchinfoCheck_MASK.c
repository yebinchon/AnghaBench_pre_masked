
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bHasDocsize; scalar_t__ bFts4; } ;
typedef TYPE_1__ Fts3Table ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char**,char*,char) ;

__attribute__((used)) static int FUNC_1(
  Fts3Table *VAR_11,
  char VAR_12,
  char **VAR_13
){
  if( (VAR_12==VAR_8)
   || (VAR_12==VAR_6)
   || (VAR_12==VAR_7 && VAR_11->bFts4)
   || (VAR_12==VAR_0 && VAR_11->bFts4)
   || (VAR_12==VAR_3 && VAR_11->bHasDocsize)
   || (VAR_12==VAR_2)
   || (VAR_12==VAR_1)
   || (VAR_12==VAR_4)
   || (VAR_12==VAR_5)
  ){
    return VAR_10;
  }
  FUNC_0(VAR_13, "unrecognized matchinfo request: %c", VAR_12);
  return VAR_9;
}
