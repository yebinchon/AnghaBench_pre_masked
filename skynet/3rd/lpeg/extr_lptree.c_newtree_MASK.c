
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int * tree; scalar_t__ codesize; int * code; } ;
typedef int TTree ;
typedef TYPE_1__ Pattern ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static TTree *FUNC_5 (lua_State *VAR_1, int VAR_2) {
  size_t VAR_3 = (VAR_2 - 1) * sizeof(TTree) + sizeof(Pattern);
  Pattern *VAR_4 = (Pattern *)FUNC_1(VAR_1, VAR_3);
  FUNC_0(VAR_1, VAR_0);
  FUNC_2(VAR_1, -1);
  FUNC_4(VAR_1, -3);
  FUNC_3(VAR_1, -2);
  VAR_4->code = ((void*)0); VAR_4->codesize = 0;
  return VAR_4->tree;
}
