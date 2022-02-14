
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_geo {int keylen; } ;



__attribute__((used)) static void FUNC_0(struct btree_geo *VAR_0, unsigned long *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_0->keylen - 1; VAR_3 >= 0; VAR_3--) {
  VAR_2 = VAR_1[VAR_3];
  VAR_1[VAR_3] = VAR_2 - 1;
  if (VAR_2)
   break;
 }
}
