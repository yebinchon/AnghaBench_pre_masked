
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor {scalar_t__ pos; int nr; int curr; int first; } ;



__attribute__((used)) static inline void FUNC_0(struct callchain_cursor *VAR_0,
          struct callchain_cursor *VAR_1)
{
 *VAR_0 = *VAR_1;

 VAR_0->first = VAR_1->curr;
 VAR_0->nr -= VAR_1->pos;
}
