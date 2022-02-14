
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int h; int len; char const* l; int n; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, int VAR_2, struct line **VAR_3) {
 int VAR_4, VAR_5;
 const char *VAR_6, *VAR_7 = VAR_1;
 const char * const VAR_8 = VAR_1 + VAR_2 - 1;
 struct line *VAR_9;

 if (!VAR_1) {
  FUNC_0 ("null pointer received\n");
  return 0;
 }


 VAR_5 = 1;
 for (VAR_6 = VAR_1; VAR_6 < VAR_1 + VAR_2; VAR_6++) {
  if (*VAR_6 == '\n' || VAR_6 == VAR_8) {
   VAR_5++;
  }
 }

 *VAR_3 = VAR_9 = (struct line *)FUNC_1(sizeof(struct line) * VAR_5);
 if (!VAR_9) {
  return -1;
 }


 VAR_4 = 0;
 for (VAR_6 = VAR_1; VAR_6 < VAR_1 + VAR_2; VAR_6++) {

  VAR_4 = (VAR_4 * 1664525) + *VAR_6 + 1013904223;

  if (*VAR_6 == '\n' || VAR_6 == VAR_8) {
   VAR_9->h = VAR_4;
   VAR_4 = 0;
   VAR_9->len = VAR_6 - VAR_7 + 1;
   VAR_9->l = VAR_7;
   VAR_9->n = VAR_0;
   VAR_9++;
   VAR_7 = VAR_6 + 1;
  }
 }


 VAR_9->h = VAR_9->len = 0;
 VAR_9->l = VAR_1 + VAR_2;
 return VAR_5 - 1;
}
