
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncFlags; } ;
typedef int Parse ;
typedef TYPE_1__ NameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_3,
  NameContext *VAR_4,
  const char *VAR_5,
  int VAR_6
){
  FUNC_0( (VAR_6&~(VAR_1|VAR_2|VAR_0))==0 );
  if( (VAR_4->ncFlags & VAR_6)!=0 ){
    const char *VAR_7 = "partial index WHERE clauses";
    if( VAR_4->ncFlags & VAR_0 ) VAR_7 = "index expressions";

    else if( VAR_4->ncFlags & VAR_1 ) VAR_7 = "CHECK constraints";

    FUNC_1(VAR_3, "%s prohibited in %s", VAR_5, VAR_7);
  }
}
