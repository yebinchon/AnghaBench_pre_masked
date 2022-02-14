
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QTMmodelsym {int sym; int cumfreq; } ;
struct QTMmodel {int shiftsleft; int entries; int* tabloc; struct QTMmodelsym* syms; } ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1(struct QTMmodel *VAR_0, struct QTMmodelsym *VAR_1, int VAR_2, int VAR_3) {
  int VAR_4;
  VAR_0->shiftsleft = 4;
  VAR_0->entries = VAR_2;
  VAR_0->syms = VAR_1;
  FUNC_0(VAR_0->tabloc, 0xFF, sizeof(VAR_0->tabloc));
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_0->tabloc[VAR_4+VAR_3] = VAR_4;
    VAR_0->syms[VAR_4].sym = VAR_4+VAR_3;
    VAR_0->syms[VAR_4].cumfreq = VAR_2-VAR_4;
  }
  VAR_0->syms[VAR_2].cumfreq = 0;
}
