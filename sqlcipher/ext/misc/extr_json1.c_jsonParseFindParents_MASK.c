
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nNode; int oom; int * aUp; } ;
typedef TYPE_1__ JsonParse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(JsonParse *VAR_2){
  u32 *VAR_3;
  FUNC_0( VAR_2->aUp==0 );
  VAR_3 = VAR_2->aUp = FUNC_2( sizeof(u32)*VAR_2->nNode );
  if( VAR_3==0 ){
    VAR_2->oom = 1;
    return VAR_0;
  }
  FUNC_1(VAR_2, 0, 0);
  return VAR_1;
}
