
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int last; int len; int cap; int* buf; int* ptr; scalar_t__ col; scalar_t__ sep; } ;
typedef int fz_context ;


 int* FUNC_0 (int *,int) ;
 int* FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_4(fz_context *VAR_0, struct fmt *VAR_1, int VAR_2)
{
 if (VAR_1->sep && !FUNC_2(VAR_1->last) && !FUNC_2(VAR_2)) {
  VAR_1->sep = 0;
  FUNC_4(VAR_0, VAR_1, ' ');
 }
 VAR_1->sep = 0;

 if (VAR_1->len >= VAR_1->cap)
 {
  VAR_1->cap *= 2;
  if (VAR_1->buf == VAR_1->ptr)
  {
   VAR_1->ptr = FUNC_0(VAR_0, VAR_1->cap);
   FUNC_3(VAR_1->ptr, VAR_1->buf, VAR_1->len);
  }
  else
  {
   VAR_1->ptr = FUNC_1(VAR_0, VAR_1->ptr, VAR_1->cap);
  }
 }

 VAR_1->ptr[VAR_1->len] = VAR_2;

 if (VAR_2 == '\n')
  VAR_1->col = 0;
 else
  VAR_1->col ++;

 VAR_1->len ++;

 VAR_1->last = VAR_2;
}
