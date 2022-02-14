
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int keylen; int vallen; scalar_t__ isnull; int val; int key; scalar_t__ needfree; } ;
typedef TYPE_1__ Pairs ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int,int,int ) ;

int
FUNC_4(Pairs *VAR_1, int32 VAR_2, int32 *VAR_3)
{
 Pairs *VAR_4,
      *VAR_5;

 *VAR_3 = 0;
 if (VAR_2 < 2)
 {
  if (VAR_2 == 1)
   *VAR_3 = VAR_1->keylen + ((VAR_1->isnull) ? 0 : VAR_1->vallen);
  return VAR_2;
 }

 FUNC_3((void *) VAR_1, VAR_2, sizeof(Pairs), VAR_0);





 VAR_4 = VAR_1 + 1;
 VAR_5 = VAR_1;
 while (VAR_4 - VAR_1 < VAR_2)
 {
  if (VAR_4->keylen == VAR_5->keylen &&
   FUNC_0(VAR_4->key, VAR_5->key, VAR_5->keylen) == 0)
  {
   if (VAR_4->needfree)
   {
    FUNC_2(VAR_4->key);
    FUNC_2(VAR_4->val);
   }
  }
  else
  {
   *VAR_3 += VAR_5->keylen + ((VAR_5->isnull) ? 0 : VAR_5->vallen);
   VAR_5++;
   if (VAR_5 != VAR_4)
    FUNC_1(VAR_5, VAR_4, sizeof(Pairs));
  }

  VAR_4++;
 }

 *VAR_3 += VAR_5->keylen + ((VAR_5->isnull) ? 0 : VAR_5->vallen);
 return VAR_5 + 1 - VAR_1;
}
