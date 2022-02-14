
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_4__ {scalar_t__ processed; TYPE_1__* tuptable; } ;
struct TYPE_3__ {scalar_t__ numvals; } ;
typedef TYPE_1__ SPITupleTable ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool
FUNC_0(void)
{
 uint64 VAR_1 = VAR_0->processed;
 SPITupleTable *VAR_2 = VAR_0->tuptable;
 bool VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  VAR_3 = 1;
 else if (VAR_1 != VAR_2->numvals)
  VAR_3 = 1;

 return VAR_3;
}
