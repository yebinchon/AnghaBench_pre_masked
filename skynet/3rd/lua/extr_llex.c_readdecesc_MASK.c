
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current; int buff; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (LexState *VAR_1) {
  int VAR_2;
  int VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < 3 && FUNC_1(VAR_1->current); VAR_2++) {
    VAR_3 = 10*VAR_3 + VAR_1->current - '0';
    FUNC_3(VAR_1);
  }
  FUNC_0(VAR_1, VAR_3 <= VAR_0, "decimal escape too large");
  FUNC_2(VAR_1->buff, VAR_2);
  return VAR_3;
}
