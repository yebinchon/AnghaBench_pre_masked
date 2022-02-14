
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int same_subexprs_refutes; int same_subexprs_implies; } ;
typedef TYPE_1__ OprProofCacheEntry ;
typedef int Oid ;


 TYPE_1__* FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_1(Oid VAR_0, Oid VAR_1, bool VAR_2)
{
 OprProofCacheEntry *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_2)
  return VAR_3->same_subexprs_refutes;
 else
  return VAR_3->same_subexprs_implies;
}
