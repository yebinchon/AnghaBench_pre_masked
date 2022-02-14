
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int id; } ;
typedef TYPE_1__ Keyword ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1){
  const Keyword *VAR_2 = (Keyword*)VAR_0;
  const Keyword *VAR_3 = (Keyword*)VAR_1;
  int VAR_4 = VAR_2->offset - VAR_3->offset;
  if( VAR_4==0 ) VAR_4 = VAR_3->id - VAR_2->id;
  FUNC_0( VAR_4!=0 );
  return VAR_4;
}
