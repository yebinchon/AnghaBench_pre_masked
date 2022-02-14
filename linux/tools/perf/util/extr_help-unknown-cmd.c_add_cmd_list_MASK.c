
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {unsigned int cnt; unsigned int alloc; int * names; } ;


 unsigned int FUNC_0 (unsigned int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static int FUNC_3(struct cmdnames *VAR_0, struct cmdnames *VAR_1)
{
 unsigned int VAR_2, VAR_3 = VAR_0->cnt + VAR_1->cnt;
 void *VAR_4;

 if (VAR_3 > VAR_0->alloc) {

  if (FUNC_0(VAR_0->alloc) < VAR_3)
   VAR_0->alloc = VAR_3;
  else
   VAR_0->alloc = FUNC_0(VAR_0->alloc);
  VAR_4 = FUNC_1(VAR_0->names, VAR_0->alloc * sizeof(*VAR_0->names));
  if (!VAR_4)
   return -1;
  VAR_0->names = VAR_4;
 }
 for (VAR_2 = 0; VAR_2 < VAR_1->cnt; VAR_2++)
  VAR_0->names[VAR_0->cnt++] = VAR_1->names[VAR_2];
 FUNC_2(&VAR_1->names);
 VAR_1->cnt = 0;
 return 0;
}
