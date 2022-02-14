
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int coll_id; int hash; } ;
typedef int Size ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static uint32
FUNC_2(const void *VAR_1, Size VAR_2)
{
 Datum VAR_3 = *((const Datum *) VAR_1);
 Datum VAR_4;

 VAR_4 = FUNC_1(VAR_0->hash,
        VAR_0->coll_id,
        VAR_3);
 return FUNC_0(VAR_4);
}
