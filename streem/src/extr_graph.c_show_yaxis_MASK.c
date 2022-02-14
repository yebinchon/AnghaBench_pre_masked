
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {int llen; int dlen; int max; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct bar_data* VAR_0)
{
  FUNC_0(1,2);
  FUNC_1("\x1b[0m");
  for (int VAR_1=0; VAR_1<VAR_0->llen; VAR_1++) {
    FUNC_0(VAR_1+2, VAR_0->dlen+1);
    if (VAR_1 == 0) {
      FUNC_1("├ %d   ", VAR_0->max);
    }
    else if (VAR_1 == VAR_0->llen-1) {
      FUNC_1("├ 0");
    }
    else {
      FUNC_1("│");
    }
  }
}
