
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* z; TYPE_1__* a; } ;
struct TYPE_4__ {int nByte; } ;
typedef TYPE_2__ EditDist3FromString ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  EditDist3FromString *VAR_0,
  int VAR_1,
  const char *VAR_2,
  int VAR_3
){
  int VAR_4 = VAR_0->a[VAR_1].nByte;
  if( VAR_4>VAR_3 ) return 0;
  FUNC_0( VAR_4>0 );
  if( VAR_0->z[VAR_1]!=VAR_2[0] ) return 0;
  if( FUNC_1(VAR_0->z+VAR_1, VAR_2, VAR_4)!=0 ) return 0;
  return 1;
}
