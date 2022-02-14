
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nFrom; char const* a; } ;
typedef TYPE_1__ EditDist3Cost ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(EditDist3Cost *VAR_0, const char *VAR_1, int VAR_2){
  FUNC_0( VAR_0->nFrom<=VAR_2 );
  if( VAR_0->nFrom ){
    if( VAR_0->a[0]!=VAR_1[0] ) return 0;
    if( FUNC_1(VAR_0->a, VAR_1, VAR_0->nFrom)!=0 ) return 0;
  }
  return 1;
}
