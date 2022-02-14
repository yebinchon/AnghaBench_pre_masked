
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nvalues; int maxvalues; int * categories; int * keys; } ;
typedef TYPE_1__ KeyArray ;
typedef int GinNullCategory ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(KeyArray *VAR_0, Datum VAR_1, GinNullCategory VAR_2)
{
 if (VAR_0->nvalues >= VAR_0->maxvalues)
 {
  VAR_0->maxvalues *= 2;
  VAR_0->keys = (Datum *)
   FUNC_0(VAR_0->keys, sizeof(Datum) * VAR_0->maxvalues);
  VAR_0->categories = (GinNullCategory *)
   FUNC_0(VAR_0->categories, sizeof(GinNullCategory) * VAR_0->maxvalues);
 }

 VAR_0->keys[VAR_0->nvalues] = VAR_1;
 VAR_0->categories[VAR_0->nvalues] = VAR_2;
 VAR_0->nvalues++;
}
