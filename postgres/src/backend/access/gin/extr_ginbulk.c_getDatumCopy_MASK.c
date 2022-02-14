
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int allocatedMemory; TYPE_1__* ginstate; } ;
struct TYPE_7__ {int attlen; scalar_t__ attbyval; } ;
struct TYPE_6__ {int origTupdesc; } ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;
typedef TYPE_3__ BuildAccumulator ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static Datum
FUNC_4(BuildAccumulator *VAR_0, OffsetNumber VAR_1, Datum VAR_2)
{
 Form_pg_attribute VAR_3;
 Datum VAR_4;

 VAR_3 = FUNC_2(VAR_0->ginstate->origTupdesc, VAR_1 - 1);
 if (VAR_3->attbyval)
  VAR_4 = VAR_2;
 else
 {
  VAR_4 = FUNC_3(VAR_2, 0, VAR_3->attlen);
  VAR_0->allocatedMemory += FUNC_1(FUNC_0(VAR_4));
 }
 return VAR_4;
}
