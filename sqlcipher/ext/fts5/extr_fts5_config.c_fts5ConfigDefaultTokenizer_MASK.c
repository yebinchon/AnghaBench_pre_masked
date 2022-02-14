
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pTok; scalar_t__ pTokApi; } ;
typedef int Fts5Global ;
typedef TYPE_1__ Fts5Config ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_2(Fts5Global *VAR_0, Fts5Config *VAR_1){
  FUNC_0( VAR_1->pTok==0 && VAR_1->pTokApi==0 );
  return FUNC_1(
      VAR_0, 0, 0, &VAR_1->pTok, &VAR_1->pTokApi, 0
  );
}
