
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outqueuenode {int textlen; int textp; struct outqueuenode* buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct outqueuenode*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct outqueuenode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(struct outqueuenode *VAR_6) {
  int VAR_7;

  while (VAR_6->textlen) {
    VAR_7= FUNC_4(1, VAR_6->textp, VAR_6->textlen);
    if (VAR_7 < 0) {
      if (VAR_2 == VAR_1) continue;
      if (VAR_2 == VAR_0) { VAR_3= 1; break; }
      FUNC_3("write stdout");
    }
    FUNC_1(VAR_7 <= VAR_6->textlen);
    VAR_6->textp += VAR_7;
    VAR_6->textlen -= VAR_7;
  }
  if (!VAR_6->textlen) {
    FUNC_0(VAR_4,VAR_6);
    FUNC_2(VAR_6->buffer);
    FUNC_2(VAR_6);
    VAR_5--;
  }
}
