
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ keylen; scalar_t__ needfree; int key; } ;
typedef TYPE_1__ Pairs ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const Pairs *VAR_2 = VAR_0;
 const Pairs *VAR_3 = VAR_1;

 if (VAR_2->keylen == VAR_3->keylen)
 {
  int VAR_4 = FUNC_0(VAR_2->key, VAR_3->key, VAR_2->keylen);

  if (VAR_4)
   return VAR_4;


  if (VAR_3->needfree == VAR_2->needfree)
   return 0;
  else if (VAR_2->needfree)
   return 1;
  else
   return -1;
 }
 return (VAR_2->keylen > VAR_3->keylen) ? 1 : -1;
}
