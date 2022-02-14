
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int maxvalues; scalar_t__ nvalues; int * categories; int * keys; } ;
typedef TYPE_1__ KeyArray ;
typedef int GinNullCategory ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(KeyArray *VAR_0, int32 VAR_1)
{
 VAR_0->keys = (Datum *) FUNC_0(sizeof(Datum) * VAR_1);
 VAR_0->categories = (GinNullCategory *)
  FUNC_0(sizeof(GinNullCategory) * VAR_1);
 VAR_0->nvalues = 0;
 VAR_0->maxvalues = VAR_1;
}
