
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nPairs; int * pairs; } ;
struct TYPE_6__ {TYPE_1__ object; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbPair ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int,int,int ,int*) ;

__attribute__((used)) static void
FUNC_4(JsonbValue *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_0(VAR_2->type == VAR_0);

 if (VAR_2->val.object.nPairs > 1)
  FUNC_3(VAR_2->val.object.pairs, VAR_2->val.object.nPairs, sizeof(JsonbPair),
      VAR_1, &VAR_3);

 if (VAR_3)
 {
  JsonbPair *VAR_4 = VAR_2->val.object.pairs + 1,
       *VAR_5 = VAR_2->val.object.pairs;

  while (VAR_4 - VAR_2->val.object.pairs < VAR_2->val.object.nPairs)
  {

   if (FUNC_1(VAR_4, VAR_5) != 0)
   {
    VAR_5++;
    if (VAR_4 != VAR_5)
     FUNC_2(VAR_5, VAR_4, sizeof(JsonbPair));
   }
   VAR_4++;
  }

  VAR_2->val.object.nPairs = VAR_5 + 1 - VAR_2->val.object.pairs;
 }
}
