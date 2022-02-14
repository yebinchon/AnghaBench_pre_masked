
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QTMmodelsym {int cumfreq; size_t sym; } ;
struct QTMmodel {int shiftsleft; int entries; int* tabloc; struct QTMmodelsym* syms; } ;



__attribute__((used)) static void FUNC_0(struct QTMmodel *VAR_0, int VAR_1) {
  struct QTMmodelsym VAR_2;
  int VAR_3, VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) VAR_0->syms[VAR_3].cumfreq += 8;

  if (VAR_0->syms[0].cumfreq > 3800) {
    if (--VAR_0->shiftsleft) {
      for (VAR_3 = VAR_0->entries - 1; VAR_3 >= 0; VAR_3--) {

        VAR_0->syms[VAR_3].cumfreq >>= 1;
        if (VAR_0->syms[VAR_3].cumfreq <= VAR_0->syms[VAR_3+1].cumfreq) {
          VAR_0->syms[VAR_3].cumfreq = VAR_0->syms[VAR_3+1].cumfreq + 1;
        }
      }
    }
    else {
      VAR_0->shiftsleft = 50;
      for (VAR_3 = 0; VAR_3 < VAR_0->entries ; VAR_3++) {


        VAR_0->syms[VAR_3].cumfreq -= VAR_0->syms[VAR_3+1].cumfreq;
        VAR_0->syms[VAR_3].cumfreq++;
        VAR_0->syms[VAR_3].cumfreq >>= 1;
      }





      for (VAR_3 = 0; VAR_3 < VAR_0->entries - 1; VAR_3++) {
        for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_0->entries; VAR_4++) {
          if (VAR_0->syms[VAR_3].cumfreq < VAR_0->syms[VAR_4].cumfreq) {
            VAR_2 = VAR_0->syms[VAR_3];
            VAR_0->syms[VAR_3] = VAR_0->syms[VAR_4];
            VAR_0->syms[VAR_4] = VAR_2;
          }
        }
      }


      for (VAR_3 = VAR_0->entries - 1; VAR_3 >= 0; VAR_3--) {
        VAR_0->syms[VAR_3].cumfreq += VAR_0->syms[VAR_3+1].cumfreq;
      }

      for (VAR_3 = 0; VAR_3 < VAR_0->entries; VAR_3++) {
        VAR_0->tabloc[VAR_0->syms[VAR_3].sym] = VAR_3;
      }
    }
  }
}
