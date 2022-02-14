
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** b; size_t y; int x; int* blen; int* bsize; } ;
typedef TYPE_1__ RConsCanvas ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (char*,int) ;

__attribute__((used)) static bool FUNC_7(RConsCanvas *VAR_0, int VAR_1, int VAR_2) {
 if (VAR_1 == 0) {
  return 1;
 }
 int VAR_3 = FUNC_1 (VAR_0->b[VAR_0->y] + VAR_0->x, VAR_2, VAR_0->blen[VAR_0->y] - VAR_0->x);
 int VAR_4 = FUNC_0 (0, (VAR_3 - VAR_2));
 int VAR_5 = (VAR_1 - VAR_2) - VAR_4;

 if (VAR_5) {
  if (VAR_5 > 0 && VAR_0->blen[VAR_0->y] + VAR_5 > VAR_0->bsize[VAR_0->y]) {
   int VAR_6 = FUNC_0 (VAR_0->bsize[VAR_0->y] * 1.5, VAR_0->blen[VAR_0->y] + VAR_5);
   char * VAR_7 = FUNC_6 (VAR_0->b[VAR_0->y], sizeof (*VAR_0->b[VAR_0->y])*(VAR_6));
   if (!VAR_7) {
    return 0;
   }
   FUNC_5 (VAR_7 + VAR_0->bsize[VAR_0->y], 0, VAR_6 - VAR_0->bsize[VAR_0->y]);
   VAR_0->b[VAR_0->y] = VAR_7;
   VAR_0->bsize[VAR_0->y] = VAR_6;
  }
  int VAR_8 = FUNC_0 (VAR_0->blen[VAR_0->y] - VAR_0->x - VAR_4, 0);
  char *VAR_9 = VAR_0->b[VAR_0->y] + VAR_0->x + VAR_4;
  char *VAR_10 = FUNC_3 (VAR_8);
  if (!VAR_10) {
   return 0;
  }
  FUNC_4 (VAR_10, VAR_9, VAR_8);
  if (VAR_5 < 0) {
   int VAR_11 = FUNC_0 (0, VAR_0->b[VAR_0->y] - (VAR_9 + VAR_5));
   FUNC_4 (VAR_9 + VAR_5 + VAR_11, VAR_10 + VAR_11, VAR_8 - VAR_11);
   FUNC_2 (VAR_10);
   VAR_0->blen[VAR_0->y] += VAR_5;
   return 1;
  }
  FUNC_4 (VAR_9 + VAR_5, VAR_10, VAR_8);
  FUNC_2 (VAR_10);
  VAR_0->blen[VAR_0->y] += VAR_5;
 }
 return 1;
}
