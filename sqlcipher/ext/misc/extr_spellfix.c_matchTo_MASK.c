
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* a; size_t nFrom; int nTo; } ;
typedef TYPE_1__ EditDist3Cost ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(EditDist3Cost *VAR_0, const char *VAR_1, int VAR_2){
  FUNC_0( VAR_2>0 );
  if( VAR_0->a[VAR_0->nFrom]!=VAR_1[0] ) return 0;
  if( VAR_0->nTo>VAR_2 ) return 0;
  if( FUNC_1(VAR_0->a+VAR_0->nFrom, VAR_1, VAR_0->nTo)!=0 ) return 0;
  return 1;
}
