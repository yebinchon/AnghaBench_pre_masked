
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {scalar_t__ base; int n; struct field* f; } ;
struct field {int tag; } ;



__attribute__((used)) static struct field *
FUNC_0(const struct sproto_type *VAR_0, int VAR_1) {
 int VAR_2, VAR_3;
 if (VAR_0->base >=0 ) {
  VAR_1 -= VAR_0->base;
  if (VAR_1 < 0 || VAR_1 >= VAR_0->n)
   return ((void*)0);
  return &VAR_0->f[VAR_1];
 }
 VAR_2 = 0;
 VAR_3 = VAR_0->n;
 while (VAR_2 < VAR_3) {
  int VAR_4 = (VAR_2+VAR_3)/2;
  struct field *VAR_5 = &VAR_0->f[VAR_4];
  int VAR_6 = VAR_5->tag;
  if (VAR_6 == VAR_1) {
   return VAR_5;
  }
  if (VAR_1 > VAR_6) {
   VAR_2 = VAR_4 + 1;
  } else {
   VAR_3 = VAR_4;
  }
 }
 return ((void*)0);
}
