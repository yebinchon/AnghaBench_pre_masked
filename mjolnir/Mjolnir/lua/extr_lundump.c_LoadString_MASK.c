
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int L; } ;
typedef int TString ;
typedef TYPE_1__ LoadState ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,char*,size_t) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int ,size_t) ;
 int * FUNC_5 (int ,char*,size_t) ;

__attribute__((used)) static TString *FUNC_6 (LoadState *VAR_1) {
  size_t VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 == 0xFF)
    FUNC_1(VAR_1, VAR_2);
  if (VAR_2 == 0)
    return ((void*)0);
  else if (--VAR_2 <= VAR_0) {
    char VAR_3[VAR_0];
    FUNC_2(VAR_1, VAR_3, VAR_2);
    return FUNC_5(VAR_1->L, VAR_3, VAR_2);
  }
  else {
    TString *VAR_4 = FUNC_4(VAR_1->L, VAR_2);
    FUNC_2(VAR_1, FUNC_3(VAR_4), VAR_2);
    return VAR_4;
  }
}
