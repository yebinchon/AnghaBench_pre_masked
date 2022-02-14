
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_work_bucket {int perm_x; int perm_n; unsigned int* perm; } ;
struct crush_bucket {int size; int* items; int id; int hash; } ;
typedef int __u32 ;


 unsigned int FUNC_0 (int ,int,int ,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_2(const struct crush_bucket *VAR_0,
         struct crush_work_bucket *VAR_1,
         int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_3 % VAR_0->size;
 unsigned int VAR_5, VAR_6;


 if (VAR_1->perm_x != (__u32)VAR_2 || VAR_1->perm_n == 0) {
  FUNC_1("bucket %d new x=%d\n", VAR_0->id, VAR_2);
  VAR_1->perm_x = VAR_2;


  if (VAR_4 == 0) {
   VAR_6 = FUNC_0(VAR_0->hash, VAR_2, VAR_0->id, 0) %
    VAR_0->size;
   VAR_1->perm[0] = VAR_6;
   VAR_1->perm_n = 0xffff;
   goto out;
  }

  for (VAR_5 = 0; VAR_5 < VAR_0->size; VAR_5++)
   VAR_1->perm[VAR_5] = VAR_5;
  VAR_1->perm_n = 0;
 } else if (VAR_1->perm_n == 0xffff) {

  for (VAR_5 = 1; VAR_5 < VAR_0->size; VAR_5++)
   VAR_1->perm[VAR_5] = VAR_5;
  VAR_1->perm[VAR_1->perm[0]] = 0;
  VAR_1->perm_n = 1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_1->perm_n; VAR_5++)
  FUNC_1(" perm_choose have %d: %d\n", VAR_5, VAR_1->perm[VAR_5]);
 while (VAR_1->perm_n <= VAR_4) {
  unsigned int VAR_7 = VAR_1->perm_n;

  if (VAR_7 < VAR_0->size - 1) {
   VAR_5 = FUNC_0(VAR_0->hash, VAR_2, VAR_0->id, VAR_7) %
    (VAR_0->size - VAR_7);
   if (VAR_5) {
    unsigned int VAR_8 = VAR_1->perm[VAR_7 + VAR_5];
    VAR_1->perm[VAR_7 + VAR_5] = VAR_1->perm[VAR_7];
    VAR_1->perm[VAR_7] = VAR_8;
   }
   FUNC_1(" perm_choose swap %d with %d\n", VAR_7, VAR_7+VAR_5);
  }
  VAR_1->perm_n++;
 }
 for (VAR_5 = 0; VAR_5 < VAR_0->size; VAR_5++)
  FUNC_1(" perm_choose  %d: %d\n", VAR_5, VAR_1->perm[VAR_5]);

 VAR_6 = VAR_1->perm[VAR_4];
out:
 FUNC_1(" perm_choose %d sz=%d x=%d r=%d (%d) s=%d\n", VAR_0->id,
  VAR_0->size, VAR_2, VAR_3, VAR_4, VAR_6);
 return VAR_0->items[VAR_6];
}
