
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pPartIdxWhere; } ;
typedef TYPE_1__ Index ;


 int FUNC_0 (scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_1(
  Index *VAR_0,
  int *VAR_1,
  int VAR_2
){
  if( VAR_0->pPartIdxWhere==0 ) return 0;
  return FUNC_0(VAR_0->pPartIdxWhere,
                                            VAR_1, VAR_2);
}
